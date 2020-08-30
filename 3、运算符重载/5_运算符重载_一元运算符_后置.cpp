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
    friend Complex& operator++(Complex &c1); //全局函数方法 ++一元
    Complex& operator--();  //成员函数方法 --一元
    friend Complex operator++(Complex &c1,int);  //全局函数方法 ++一元
    Complex operator--(int);
};


Complex::Complex(int a = 0 ,int b = 0)
{   
    m_a = a;
    m_b = b;
}

Complex::~Complex()
{
}

Complex operator+(Complex &c1,Complex &c2)  //全局函数方法
{
    Complex c3(c1.m_a+c2.m_a,c1.m_b+c2.m_b);
    return c3;
}
Complex  Complex::operator-(Complex &c)   //成员函数方法
{
    Complex tmp(this->m_a-c.m_a,this->m_b-c.m_b);
    return tmp;
}
Complex& operator++(Complex &c1)  //全局函数方法 ++一元
{
    c1.m_a++;
    c1.m_b++;
    return c1;
}


Complex& Complex::operator--()   //成员函数方法 --一元
{
    this->m_a--;
    this->m_b--;
    return *this;
}

Complex operator++(Complex &c1,int)  //全局函数方法 ++一元
{
    Complex tmp = c1;
    c1.m_a++;
    c1.m_b++;
    return tmp;
}

Complex Complex::operator--(int)   //成员函数方法 --一元
{
    Complex tmp = *this;
    this->m_a--;
    this->m_b--;
    return tmp;
}

void Complex::print()
{
    cout<<"m_a:"<<m_a<<endl<<"m_b:"<<m_b<<endl;
}

int main(int argc, char const *argv[])
{
    Complex c5(2,5);
    c5.print();
    Complex c6(3,4);
    c6.print();
    Complex c7 = c5 + c6;   
    c7.print();
    c5 = c5 - c6;
    c5.print();
    Complex c8(100,100);
    ++c8;
    c8.print();
    --c8;
    c8.print();
    c8++;
    c8.print();
    c8--;
    c8.print();
    return 0;
}
