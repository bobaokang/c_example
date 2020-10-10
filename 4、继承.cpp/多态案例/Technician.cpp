#include "Technician.h"
Technician::Technician(/* args */)
{
    cout<<"Technician构造"<<endl;
}

Technician::~Technician()
{
    cout<<"~Technician"<<endl;
}
void Technician::Init()
{
    this->HourSalary = 100;
    cout<<"请输入技术人员姓名："<<endl;
    cin>>name;
    cout<<"请输入技术人员工时："<<endl;
    cin>>this->HourWork;
    id = startNum++;
}
void Technician::GetPay()
{
    salary = HourSalary*HourWork;
}
void Technician::Level(int lev)
{
    level = lev;
    if (level==1)
    {
        HourSalary = 100;
    }
    else if (level==2)
    {
        HourSalary = 120;
    }
    else if (level==3)
    {
        HourSalary = 150;
    }
    else
    {
        HourSalary = 200;
    }
    
    
}
