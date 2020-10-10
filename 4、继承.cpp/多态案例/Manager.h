#pragma once
#include "Employee.h"
class Manager:virtual public Employee
{
protected:
    double AllMoney;
public:
    Manager(/* args */);
    ~Manager();
    virtual void Init();
    virtual void GetPay();
    virtual void Level(int lev);
};