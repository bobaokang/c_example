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

int main(int argc, char const *argv[])
{
    myCircle C1,C2;
    C1.SetR(12);
    cout <<"面积"<<C1.GetMianJ()<<endl;
    cout <<"周长"<<C1.GetZhouC()<<endl;
    C2.SetR(6);
    cout <<"面积"<<C2.GetMianJ()<<endl;
    cout <<"周长"<<C2.GetZhouC()<<endl;
    return 0;
}
