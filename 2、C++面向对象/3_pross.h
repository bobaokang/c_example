#pragma once
#include <iostream>
using namespace std;
class Yuan
{
private:
    double m_r;
    double m_x0;
    double m_y0;
public:
    void SetY_r( double r,double x0,double y0);
    double Get_m_r();
    double Get_m_x0();
    double Get_m_y0();
};

class Point
{
private:
    double p_x0;
    double p_y0;
public:
    void SetP_r(double x0,double y0);
    double Get_p_x0();
    double Get_p_y0();

    int Judge(Yuan &Y);
};
