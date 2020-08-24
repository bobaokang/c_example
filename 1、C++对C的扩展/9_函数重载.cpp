#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
//名称、参数、返回值
//1、类型不一样
int mycz(int a)
{
    return 0;
}
int mycz(double a)
{
    return 0;
}
//2、参数个数不一样
int mycz(int a,int b)
{
    return 0;
}
int mycz(int a,int b,int c)
{
    return 0;
}
//3、返回值不是判断函数重载的标准
//int mycz(int a);
//char mycz(int a);

//函数重载本质上是相互独立的函数
int main(int argc, char const *argv[])
{
    //
    mycz(1);
    mycz(1,2);
    mycz(1.234);
    return 0;
}