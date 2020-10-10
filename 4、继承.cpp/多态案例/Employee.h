#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
private:
    /* data */
protected:
    string name;
    int id;
    double salary;
    int level;
    static int startNum;

public:
    Employee(/* args */);
    virtual ~Employee();
    virtual void Init() = 0;
    virtual void GetPay() = 0;
    void DisplayStatus();
    virtual void Level(int lev) = 0;

};
