#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
void myfunc(int a)
{
    printf("a=[%d]\n",a);
}
void myfunc(int a,int b)
{
    printf("a=[%d]b=[%d]\n",a,b);
}
void myfunc(char *s)
{
    printf("s=[%s]\n",s);
}
//函数指针
//声明一个函数类型
//声明一个函数指针类型
//定义一个函数指针变量
typedef void (myTypeFun)(int a,int b);
typedef void (*myTypeFun2)(int a,int b);//声明了一个指针的数据类型
void (*myTypeFun3)(int a,int b);
int main(int argc, char const *argv[])
{
    myTypeFun *fp;    //定义一个函数指针 这个指针指向函数的入口地址
    myTypeFun2 fp2;   //通过函数指针类型定义了一个函数指针
    fp = myfunc;
    fp(1,2);
    myfunc(1);
    //int *&a = ;
    return 0;
}