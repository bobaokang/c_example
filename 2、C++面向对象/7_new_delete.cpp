#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
class Teacher
{
private:
    int m_a;
public:
    Teacher(int a);
    ~Teacher();
};

Teacher::Teacher(int a)
{
    cout <<"构造函数被调用"<<endl;
    m_a = a;
}

Teacher::~Teacher()
{
    cout <<"析构函数被调用"<<endl;
}

//1、new 和 delete操作符是C++的语法
//2、基础类型变量 数组变量 类对象 //在栈上
int main(int argc, char const *argv[])
{
    //c语言 的函数 free malloc
    int *p1 = (int *)malloc(sizeof(int));
    free(p1);
    //c++ 的操作符 new delete
    int *p2 = new int;
    *p2 = 20;
    cout << *p2 <<endl;
    free(p2);
    
    int *p3=new int(30);
    cout << *p3 <<endl;
    delete(p3);
    
    int *p4 = new int[10];
    p4[1] = 2;
    cout << p4[1] <<endl;
    delete []p4;        //数组一定要加[]
   
   //c语言  分配类对象
   Teacher *p5 = (Teacher *)malloc(sizeof(Teacher));
   free(p5);
    //C++
    Teacher *p6 = new Teacher(5);       //new能执行类的构造函数
    delete p6;                          //delete能执行类的析构函数
                                        //malloc free是函数不会调用类的构造和析构函数
   //new 出来的内存用 free操作 基本类型 能被释放、  
   //malloc 出来的内存用 delete操作 基本类型 能被释放  
    return 0;
}

