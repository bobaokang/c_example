#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
template <typename T>
class Comlex
{ 
    //friend ostream & operator<< <T> (ostream &out,Comlex &c2);
private:
    T a;
    T b;
public:
    Comlex(T a,T b);
    void PrintfCom();
    Comlex operator+(Comlex &c1);
    Comlex operator-(Comlex &c1); 
};