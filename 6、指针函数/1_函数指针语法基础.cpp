#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main1(int argc, char const *argv[])
{
    int a[10];
    typedef int (PtypedefArry1)[10];
    PtypedefArry1 myArry1;
    myArry1[0] = 10;
    printf("myArry1[0]：%d\n",myArry1[0]);
   
    typedef int (*PtypedefArry2)[10];
    PtypedefArry2 myArry2;
    myArry2 = &a;
    (*myArry2)[0] = 20;
    printf("(*myArry2)[0]：%d\n",a[0]);
   
    //定义一个指向数组类型的指针 数组类的指针
    int (*myPointer)[10];   //变量 告诉C编译器 给我分配内存
    myPointer = &a;
    (*myPointer)[0] = 40;
    printf("(*myPointer)[0]：%d\n",a[0]);

    return 0;
}


int add(int a,int b)    //任务的实现者
{
    printf("%d+%d=%d\n",a,b,a+b);
    return a + b;
}
int add1(int a,int b)    //任务的实现者
{
    printf("%d+%d=%d\n",a,b,a+b);
    return a + b;
}
int add2(int a,int b)    //任务的实现者
{
    printf("%d+%d=%d\n",a,b,a+b);
    return a + b;
}
int add3(int a,int b)    //任务的实现者
{
    printf("%d+%d=%d\n",a,b,a+b);
    return a + b;
}
int main2(int argc, char const *argv[])
{
    //如何定义一个函数类型
    //如何定义一个函数指针类型
    //如何定一个指向函数类型的函数指针
    add(1,2);
    typedef int (MyFunType)(int a,int b);
    MyFunType *myFunType = NULL;
    myFunType = &add;
    myFunType(2,3);
   
    myFunType = add;
    myFunType(3,4);
    
    //定义一个函数指针类型
    typedef int (*MyPointerFunType)(int a,int b);//int *a = NUll；
    MyPointerFunType myPointerFunType;
    myPointerFunType = add;
    myPointerFunType(4,5);

    //直接定义一个函数指针
    int(*MypointerFunc)(int a, int b);
    MypointerFunc = add;
    MypointerFunc(5,6);
    return 0;
}


typedef int (*MyTypedefFuncAdd)(int a,int b);
//函数指针做函数参数
int Op(MyTypedefFuncAdd myadd)
{
    myadd(3,4);
    return 0;
}
int main(int argc, char const *argv[])
{
    add(1,2);//直接调用
    MyTypedefFuncAdd myTypedefFuncAdd = add;
    myTypedefFuncAdd(2,3);  //非直接调用
    
    Op(add2);   
    Op(add1);
    return 0;
}
