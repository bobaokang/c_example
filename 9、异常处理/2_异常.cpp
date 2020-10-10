#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//发生异常之后是跨函数的
void divide(int x,int y)
{
    if (y == 0)
    {
        throw x;    //抛出int类型异常
    }
    cout<<"结果："<<x/y<<endl;
}

void mydivide(int x,int y)
{
    try
    {
        divide(x,y);
        throw ;
    }
    catch(...)
    {
        cout<<"mydivide收到的异常，继续往外抛"<<endl;
    }
    
}
int main1(int argc, char const *argv[])
{
    try
    {
        //divide(10,2);
        //divide(100,0);
        mydivide(100,0);
    }
    catch(int e)
    {
        cout<<e<<"除以0"<<endl;
    }
    
    catch(...)
    {
        cout<<"其他位置类型异常"<<endl;
    }

    return 0;
}


int main(int argc, char const *argv[])
{
    try
    {
        throw 'h';
    }
    catch(int e)
    {
        cout<<"捕获到int类型异常"<<endl;
    }
    catch(char e)
    {
        cout<<"捕获到char类型异常"<<endl;
    }
    catch(...)
    {
        cout<<"捕获到未知类型异常"<<endl;
    }
    return 0;
}
