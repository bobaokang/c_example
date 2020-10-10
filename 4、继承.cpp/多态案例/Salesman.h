#pragma once
#include "Employee.h"
class Salasman:virtual public Employee
{
protected:
    int AllWorkMoney;
    double Percent;
public:
    Salasman(/* args */);
    ~Salasman();
    virtual void Init();
    virtual void GetPay();
    virtual void Level(int lev);
};