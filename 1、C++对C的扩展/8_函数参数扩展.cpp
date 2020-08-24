#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
void print(int x =3,int y = 4)//默认参数中不能没有不赋值的参数
{
    cout<< x << y<<endl;
}
void print2(int x,int y,int )//占位参数、函数调用时也必须写够参数，写三个。
{
    cout<< x << y<<endl;
}
void print3(int x,int y,int = 0 )
{
    cout<< x << y<<endl;
}
int main(int argc, char const *argv[])
{
    print(5,6);
    print(5);
    print();
    print3(1,2);
    print3(1,2,3);
    return 0;
}
