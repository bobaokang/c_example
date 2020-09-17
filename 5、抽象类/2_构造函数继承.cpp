#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class A
{
private:
    int a;
    int b;
public:
    A(int a,int b);
   virtual ~A();        //如果不加virtual只会在play函数析构父类A
};

A::A(int a,int b)
{
    printf("a:%d\n",a);
    printf("b:%d\n",b);

}

 A::~A()
{
    printf("析构A\n");
}


class B:public A
{
private:
    /* data */
public:
    B(int a,int b,int c,int d);
    void Myprintf()
    {
        printf("printB\n\n");
    }
    ~B();
};

B::B(int a,int b,int c,int d):A(a,b)
{
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("c:%d\n",c);
    printf("d:%d\n",d);

}

 B::~B()
{
    printf("析构B\n");
}



class C:public B
{
private:
    /* data */
public:
    C(int a,int b,int c,int d);
    void Myprintf()
    {
        printf("printC\n\n");
    }
    ~C();
};

C::C(int a,int b,int c,int d):B(a,b,c,d)
{
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("c:%d\n",c);
    printf("d:%d\n",d);

}

 C::~C()
{
    printf("析构C\n");
}


void play(A *a)
{
    printf("定义一个父类\n");
    delete a;                       //在父类加上virtual才会在析构所有
}
int main(int argc, char const *argv[])
{
    // B b1(1,2,3,4);
    // b1.Myprintf();
    // B *myB = new B(6,7,8,9);
    // myB->Myprintf();
    // delete myB;


    // printf("\n\n");
    // C c1(1,2,3,4);
    // c1.Myprintf();
    // //myB = &b1;
    C *c2 = new C(1,2,3,4);
    play(c2);
    return 0;
}
