#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void Test(int* &T1) //为了改变实参中的指针地址  不加&改变不了地址
{
    cout<<"T1:"<<T1<<endl;
    cout<<"*T1:"<<*T1<<endl;
    T1 = T1+4;
    cout<<"T1:"<<T1<<endl;
    cout<<"*T1:"<<*T1<<endl;
}
int main(int argc, char const *argv[])
{
    int b = 123;
    int *a = &b;
    cout<<"a:"<<a<<endl;
    cout<<"*a:"<<*a<<endl;
    Test(a);
    cout<<"a:"<<a<<endl;
    cout<<"*a:"<<*a<<endl;
    return 0;
}