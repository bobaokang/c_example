#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
template <typename T>

void myswap(T &a,T &b)
{
   cout<<"我是模板函数"<<endl;
}

void myswap(int a,char b)
{
    cout<<"我是普通函数"<<endl;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    char b = 'b';
    myswap(a, b);//普通函数  调用可以进行隐式的类型转换
    myswap(b , a);//普通函数
    myswap(a, a);//调用函数模板 （本质：类型参数化），将严格的按照类型进行匹配，不会进行类型转换
    return 0;
}
//1、函数模板可以像普通函数一样被重载
//2、C++编译器优先考虑普通函数
//3、显示使用函数模板加<>
//4、函数模板能产生一个更好的匹配 使用函数模板
//5、可以通过空模板实参列表的语法限定编译器只能使用函数模板