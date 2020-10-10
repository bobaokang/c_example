#include "Salesman.h"
Salasman::Salasman(/* args */)
{
    cout<<"Salasman构造"<<endl;
}
Salasman::~Salasman()
{
    cout<<"~Salasman"<<endl;
}
void Salasman:: Init()
{
    this->Percent = 0.04;
    cout<<"请输入销售姓名："<<endl;
    cin>>name;
    cout<<"请输入销售人员总销售额："<<endl;
    cin>>this->AllWorkMoney;
    id = startNum++;
}
void Salasman::GetPay()
{
    salary = AllWorkMoney*Percent;
}
  
void Salasman::Level(int lev)
{
    level = lev;
    if (level==1)
    {
        Percent = 0.04;
    }
    else if (level==2)
    {
        Percent = 0.05;
    }
    else if (level==3)
    {
        Percent = 0.06;
    }
    else
    {
        Percent = 0.01;
    }

};