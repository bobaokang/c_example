#include <iostream>
#define PAI 3.1415
using namespace std;
class myCircle
{
private:
    double BanJ;
    double MianJ;
    double ZhouC;
protected:
public:
    void SetR(double r);
    double GetZhouC();
    double GetMianJ();
};
double myCircle:: GetZhouC()
{
    ZhouC = PAI * 2 *BanJ;
    return ZhouC;
}
double myCircle::GetMianJ()
{
    MianJ = PAI * BanJ *BanJ;
    return MianJ;
}
void myCircle::SetR(double r)
{
    BanJ = r;
}
namespace namespaceA
{
    int a = 10;
}
namespace namespaceB
{
    int a = 20;
    namespace namespaceC
    {
        struct Teacher
        {
            char name[64];
            int age;
        };
        
    }
}
int main(int argc, char const *argv[])
{
    myCircle C1,C2;
    C1.SetR(12);
    cout <<"面积"<<C1.GetMianJ()<<endl;
    cout <<"周长"<<C1.GetZhouC()<<endl;
    C2.SetR(6);
    cout <<"面积"<<C2.GetMianJ()<<endl;
    cout <<"周长"<<C2.GetZhouC()<<endl;
    cout << namespaceA::a<<endl;
    cout << namespaceB::a<<endl;
    namespaceB::namespaceC::Teacher t1;
    t1.age = 10;
    cout <<t1.age<<endl;
    
    bool p, p2;
    p = 10;
    cout<<p<<endl;
    p = -10;
    cout<<p<<endl;
    p = 0;
    cout<<p<<endl;
    p2 = true;
    cout<<p<<endl;
    p2 = false;
    cout<<p<<endl;
    return 0;
}
