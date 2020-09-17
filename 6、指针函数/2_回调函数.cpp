#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int ADD(int (*callback)(int ,int ),int a)
{
    printf("回调函数\n");
    return callback(a,1);
}
int add(int a,int b)
{
    printf("a-b:%d\n",a-b);
    return a-b;
}

int main(int argc, char const *argv[])
{
    printf("ADD(add,1,3):%d\n",ADD(add,1));
    return 0;
}




typedef int (*callback_sub)(int a,int b);
int sub(int a,int b)
{
    return a-b;
}
int main2(int argc, char const *argv[])
{
    callback_sub ad;
    ad = sub;
    printf("%d\n",ad(2,3));
    return 0;
}



typedef int (*callback_mux)(int a,int b);
int mux(callback_mux p,int a,int b)
{
    
    return (*p)(a,b);
}
int swap(int a,int b)
{
    return a*b;
}
int main3(int argc, char const *argv[])
{
    printf("%d\n", mux(swap,2,4));
    return 0;
}
