#include <iostream>
using namespace std;
class Square
{
private:
    int m_a;
    int m_b;
    int m_c;
public:
void SetABC(int a,int b,int c);
int GetV();
int GetS();
int Judge(Square &sqA,Square &sqB);
int Judge(Square &sqA);
};

void Square::SetABC(int a,int b,int c)
{
    m_a = a;
    m_b = b;
    m_c = c;
}
int Square::GetS()
{
    return  2*m_a*m_b*m_c;
}
int Square::GetV()
{
   return m_a*m_b*m_c;
}

int Square::Judge(Square &sqA,Square &sqB)
{
    sqA.SetABC(1,3,3);
    sqB.SetABC(3,4,5);
    cout <<"sqA.GetV():"<<sqA.GetV()<<endl<<"sqB.GetV():"<<sqB.GetV()<<endl;
    return 0;
}

int Square::Judge(Square &sqA)
{
    cout <<m_a*m_b*m_c<<endl<<sqA.GetV()<<endl;
    return 0;
}
int main(int argc, char const *argv[])
{
    Square Sq1,Sq2;
    Sq1.SetABC(1,2,3);
    Sq2.SetABC(2,3,4);
    Sq2.Judge(Sq1);
    Sq1.Judge(Sq2);
    Sq2.Judge(Sq1,Sq2);
    return 0;
}
