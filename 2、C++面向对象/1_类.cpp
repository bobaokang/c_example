#include <iostream>
using namespace std;

class MyCircle
{
private:    //只能在类的内部
    double m_r;
    double m_s;
    double m_c;
protected:  //只能在类的内部
public:     //可以在类的内部或者再类的外部
    double GetR();
    void SetR(double r);
    double GetS();
};

double MyCircle::GetR()
{
    return m_r;
}
void MyCircle::SetR(double r)
{
    m_r =r;
}
double MyCircle::GetS()
{
    return 3.14*m_r*m_r;
}

void PrintfCircle(MyCircle *Myc)
{
    cout << Myc->GetR() <<endl;
    cout << Myc->GetS() <<endl;
}
void PrintfCircle2(MyCircle &Myc)
{
    cout << Myc.GetR() <<endl;
    cout << Myc.GetS() <<endl;
}

int main(int argc, char const *argv[])
{
    MyCircle C1,C2,C3;
   
    C1.SetR(3);
    cout << C1.GetS()<<endl;
   
    C2.SetR(10);
    PrintfCircle(&C2);
   
    C3.SetR(11);
    PrintfCircle2(C3);
    return 0;
}