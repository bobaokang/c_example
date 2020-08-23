#include "3_pross.h"
void Yuan::SetY_r( double r,double x0,double y0)
{
    m_r = r;
    m_x0 = x0;
    m_y0 = y0;
}
double Yuan::Get_m_r()
{
    return m_r;
}


double Yuan::Get_m_x0()
{
    return m_x0;
}
double Yuan::Get_m_y0()
{
    return m_y0;
}

void Point::SetP_r(double x0,double y0)
{
    p_x0 = x0;
    p_y0 = y0;
}

double Point::Get_p_x0()
{
    return p_x0;
}
double Point::Get_p_y0()
{
    return p_y0;
}

int Point::Judge(Yuan &Y)
{
    cout<<Y.Get_m_r()<<endl;
    int rr = (((Y.Get_m_x0()-p_x0)*(Y.Get_m_x0()-p_x0)))+((Y.Get_m_y0()-p_y0)*(Y.Get_m_y0()-p_y0));
    if (rr > (Y.Get_m_r()*Y.Get_m_r()))
    {
        cout<<rr<<" 在圆外"<<endl;
    }
    else
    {
        cout<<rr<<" 在圆内"<<endl;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    Yuan C1;
    Point P1;
    C1.SetY_r(6,2,3);
    P1.SetP_r(3,4);
    P1.Judge(C1);
    return 0;
}