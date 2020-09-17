#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//子类拥有父类的所有成员变量和成语函数
//public 修饰成员变量 方法 在类的内部用
class Parent
{
private:
  
public:
    int m_a;
    int m_b;
    void MyPrintf()
    {
        cout<<"m_a:"<<m_a<<endl;
        cout<<"m_b:"<<m_b<<endl;
    }
};
class chirld:public Parent
{
    private:
    int m_c;
public:
};
int main(int argc, char const *argv[])
{
    /* code */
    chirld c1;
    c1.m_a = 10;
    c1.m_b = 20;
    c1.MyPrintf();
    return 0;
}
