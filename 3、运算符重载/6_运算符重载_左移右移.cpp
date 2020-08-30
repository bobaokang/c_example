#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Complex
{
private:
    int m_a;
    int m_b;
public:
    Complex(int a,int b);
    ~Complex();
    void print();
    friend Complex operator+(Complex &c1,Complex &c2);  //全局函数方法
    Complex operator-(Complex &c);       //成员函数方法
};