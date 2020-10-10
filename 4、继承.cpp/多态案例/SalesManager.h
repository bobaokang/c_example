#pragma once
#include "Employee.h"
#include "Salesman.h"
#include "Manager.h"
class SalesManager:public Salasman,public Manager
{
public:
    SalesManager(/* args */);
    ~SalesManager();
    virtual void Init();
    virtual void GetPay();
    virtual void Level(int lev);
};