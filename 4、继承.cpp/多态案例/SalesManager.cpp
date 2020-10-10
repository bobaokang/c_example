#include "SalesManager.h"
SalesManager::SalesManager(/* args */)
{
    cout<<"SalesManager构造"<<endl;
}
SalesManager::~SalesManager()
{
    cout<<"~SalesManager"<<endl;
}
void SalesManager::Init()
{
    cout<<"请输入销售经理姓名："<<endl;
    cin>>name;
    cout<<"请输入销售经理的总销售额："<<endl;
    cin>>AllWorkMoney;
    id = startNum++;
    AllMoney = 8000;
    Percent = 0.04;
}
void SalesManager::GetPay()
{
    this->salary = AllMoney+AllWorkMoney*Percent;
}
  
void SalesManager::Level(int lev)
{
    level = lev;
    if (level==1)
    {
        AllMoney = 8000;
        Percent = 0.04;
    }
    else if (level==2)
    {
        AllMoney = 10000;
        Percent = 0.05;
    }
    else if (level==3)
    {
        AllMoney = 12000;
        Percent = 0.06;
    }
    else
    {
        AllMoney = 15000;
        Percent = 0.01;
    }

};