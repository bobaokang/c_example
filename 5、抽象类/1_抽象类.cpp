#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class A
{
public:
    virtual int Aa(int a) = 0;
    virtual int Ab(int a) = 0;
    virtual int Ac(int a) = 0;
   
};

class B:public A
{
private:
    int a;
public:
    virtual int Aa(int a) ;
    virtual int Ab(int a);
    virtual int Ac(int a);
};

int B::Aa(int a)
{
        this->a = a;
        return this->a;
}

// int B::Ab(int a)
// {
//         this->a = a;
//         return this->a;
// }
// int B::Ac(int a)
// {
//         this->a = a;
//         return this->a;
// }

int main(int argc, char const *argv[])
{
    B Bb;
    printf("Bb.Aa:%d\n",Bb.Aa(20));
    return 0;
}
