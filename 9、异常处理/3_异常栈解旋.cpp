#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class T3
{
private:
    int a;
    int b;
public:
    T3(int a,int b);
    ~T3();
};

T3::T3(int a,int b)
{
    this->a = a;
    this->b = b;
    cout<<"构造函数"<<endl;
}

T3::~T3()
{
    cout<<"析构函数"<<endl;
}

//void divide()                        //不写可以抛出任何类型
//void divide()throw()                 //不抛任何异常的函数
void divide()throw(int,char,char*)     //只能抛出int char char*的异常
{
   T3 t1(1,2),t2(3,4),t3(5,6);
   throw 1;
}
//发生异常之后是跨函数的
int main(int argc, char const *argv[])
{
    try
    {
        divide();       //会调用析构函数
    }
    catch(int e)
    {
        cout<<"捕获到int异常"<<endl;
    }
    
    return 0;
}
