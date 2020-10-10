#include "Employee.h"
int Employee::startNum = 1000;
Employee::Employee(/* args */)
{
    cout<<"Employee构造"<<endl;
}
Employee::~Employee()
{
    cout<<"~Employee"<<endl;
}   
void Employee::DisplayStatus()
{
    cout<<"员工的名字："<<name<<endl;
    cout<<"员工的id："<<id<<endl;
    cout<<"员工的工资："<<salary<<endl;
    cout<<"员工的level："<<level<<endl;
}