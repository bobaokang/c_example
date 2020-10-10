#pragma once
#include "Employee.h"
class Technician:public Employee
{
private:
    double HourSalary;
    int HourWork;
public:
    Technician(/* args */);
    ~Technician();
    virtual void Init();
    virtual void GetPay();
    virtual void Level(int lev);
};



