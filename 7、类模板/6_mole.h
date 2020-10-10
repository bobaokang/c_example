//算法和数据类型进行分离
#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
template <typename Type>
class MyVector;             //类声明
template <typename Type>
ostream& operator<< (ostream &out, const MyVector<Type> &obj);  //友元函数声明

template <typename Type>
class MyVector
{
private:
    Type *m_space;
    int m_len;
    friend ostream& operator<< <Type>(ostream &out, const MyVector<Type> &obj);
public:
    MyVector(int size);
    ~MyVector();
    MyVector(const MyVector& obj);
    Type& operator[](int index);
    MyVector& operator=(const MyVector&obj);
    int getlen()
    {
        return m_len;
    }
};


