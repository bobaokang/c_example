
#include "4_test.h"
//构造函数写在类的外部
template <typename T>
Comlex<T>::Comlex(T a,T b)
{
    this->a = a;
    this->b = b;
}

//类的普通函数
template <typename T>
void Comlex<T>::PrintfCom()
{
    cout <<"a"<<a<<"b"<<b<<endl;
}
//成员函数实现的+ 运算符重载
template <typename T>
Comlex<T> Comlex<T>::operator+ (Comlex<T> &c1)
{
    Comlex Tmp(a+c1.a,b+c1.b);
    return Tmp;
}

//成员函数实现的- 运算符重载
template <typename T>
Comlex<T> Comlex<T>::operator- (Comlex<T> &c1)
{
    Comlex Tmp(a-c1.a,b-c1.b);
    return Tmp;
}

//友元函数
// template <typename T>
// ostream &operator<<(ostream &out,Comlex<T> &c2)
// {
//     out<<c2.a<<"+"<<c2.b<<"i"<<endl;
//     return out;
// }

