#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class A
{
private:
    int a_a;
    int a_b;
public:
    A(int a, int b);
    ~A();
};

A::A(int a, int b)
{
    a_a = a;
    a_b =b;
    printf("构造A:a[%d] b[%d]\n",a_a,a_b);
}
A::~A()
{
    printf("A析构函数\n");
}

//构造函数的初始化列表 解决：在B类中 组合了一个A类对象（A类设计了构造函数）
//根据构造函数的调用规则 设计A的构造函数 必须要用没有机会初始化A
//新的语法 构造函数的初始化列表

//先执行被组合对象的构造函数，
//如果组合对象有多个，按照定义的顺序，而不是按照初始化列表的顺序
//析构函数 和构造函数的调用顺序相反
//初始化列表用来给const初始化赋值
class B
{

public:
    B(int a,int b);
    B(int a,int b,int m,int n);
    ~B();
private:
    int b_a;
    int b_b;
    A a1;
    A a2;
};

B:: B(int a,int b):a1(1,2),a2(1,2)
{
    printf("构造B1\n");
}
B::B(int a,int b,int m,int n):a1(m,n),a2(n,m)
{
    printf("构造B2\n");
}
B::~B()
{
    printf("B析构函数\n");
}
int main(int argc, char const *argv[])
{
    //B (1,2,3,5);
    //B b2(1,2);
    cout<<"123"<<endl;
    A a = A (2,3);
    cout<<"123"<<endl;
    return 0;
}