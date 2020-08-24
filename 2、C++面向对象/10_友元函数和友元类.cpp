#include <iostream>
using namespace std;
class A
{
private:
    int Aa;
public:
friend class B;     //B是A的友元类 
    int DisA()
    {
        cout<<Aa<<endl;
        return Aa;
    }

};

class B
{
private:
    /* data */
    int m_a;
    A a2;
public:
    friend void  modityB(B *Pb,int _a);
    void DisB(int set)
    {
        cout<<a2.Aa<<endl;
        a2.Aa =  set;
        cout<<a2.Aa<<endl;
    }
    int Get_A();
    B(int a);
};
   B::B(int a = 0)
   {
       m_a = a;
   }

void  modityB(B *Pb,int _a)
{
    Pb->m_a = _a;
}
int B::Get_A()
{
    return m_a;
}
int main(int argc, char const *argv[])
{
    B b1(10);
    cout<<b1.Get_A()<<endl;
    modityB(&b1,100);
    cout<<b1.Get_A()<<endl;
    B b2(20);
    b2.DisB(200);
   
    return 0;
}