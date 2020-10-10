#include "Manager.h"
Manager::Manager(/* args */)
{
    cout<<"Manager构造"<<endl;
}
Manager::~Manager()
{
    cout<<"~Manager"<<endl;
}
void Manager:: Init()
{
    cout<<"请输入普通经理姓名："<<endl;
    cin>>name;
    id = startNum++;
    AllMoney = 8000;
}
void Manager::GetPay()
{
    this->salary = AllMoney;
}
  
void Manager::Level(int lev)
{
    level = lev;
    if (level==1)
    {
        AllMoney = 8000;
    }
    else if (level==2)
    {
        AllMoney = 10000;
    }
    else if (level==3)
    {
        AllMoney = 12000;
    }
    else
    {
        AllMoney = 15000;
    }

};