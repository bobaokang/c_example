#include <iostream>
using namespace std;
class Teacher
{   
private:
   int m_a;
    int m_b;
    static int m_num;
    //static  是属于整个类的 
public:
    Teacher(/* args */);
    ~Teacher();
     static int Get_num();
     void Add_num();
    static int m_num2;
};
int Teacher::m_num = 10;
int Teacher::m_num2 = 100;
Teacher::Teacher(/* args */)
{
}

Teacher::~Teacher()
{
}
 int Teacher::Get_num()   //静态函数只能使用静态成员变量 不能使用普通成员函数
{
    cout<<m_num<<endl;
    return m_num;
}
void Teacher:: Add_num()
{
    m_num = m_num+10;
}
int main(int argc, char const *argv[])
{
    Teacher T1,T2;
    // T1.Get_num();
    // T2.Get_num();
    // T1.Add_num();
    // T1.Get_num();
    // T2.Get_num();
    //Teacher::m_num2();
    Teacher::Get_num();
    T2.m_num2 = 200+2;
    cout<<T1.m_num2<<endl;
    //T1.m_num = 11;
    return 0;
}