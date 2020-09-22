#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
template <typename Type>
class MyVector;
template <typename Type>
ostream& operator<<(ostream &out,MyVector<Type> &obj);
template <typename Type>
class MyVector
{
private:
    Type *m_data;
    int   m_len;
public:
    MyVector(int index);
    ~MyVector();
    MyVector(const MyVector &obj);
    Type &operator[](int index);
    MyVector& operator=(const MyVector &obj); 
    friend ostream& operator<< <Type>(ostream &out,MyVector<Type> &obj);
    int getlength();
};

