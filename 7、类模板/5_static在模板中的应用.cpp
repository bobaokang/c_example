
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
template <typename T>
class A
{
private:
public:
 static T a;
};
template <typename T>
T A<T>::a = 0;      
//根据不同的类型生成各自的a;
int main(int argc, char const *argv[])
{
    A<int>a1,a2,a3,a4;
    a1.a = 10;
    a2.a++;
    a3.a++;
    a4.a++;
    cout<<a4.a<<endl;

    A<char>a5,a6,a7;
    a5.a = 'a';
    a6.a++;
    a7.a++;
    cout<<a7.a<<endl;
    return 0;
}
