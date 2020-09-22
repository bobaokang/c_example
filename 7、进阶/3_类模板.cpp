#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//1、类型参数化
template <typename Type>
class DataTest
{
private:
    Type a;
public:
    DataTest(Type T_a)
    {
        a = T_a;
        
    }
    void printfA()
    {
        cout<<a<<endl;
    }
    ~DataTest()
    {
    }
};

void MyPrintf(DataTest<int> a)
{
     a.printfA();
}
int main(int argc, char const *argv[])
{
    DataTest<int>a1(100.123);
    DataTest<float>a2(100.123);
    a1.printfA();
    a2.printfA();

    DataTest<int>a3(11),a4(21);
    MyPrintf(a3);
    MyPrintf(a4);               //2、类模板做函数参数

    return 0;
}
