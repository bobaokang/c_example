#include "Technician.h"
#include "Salesman.h"
#include "Manager.h"
#include "SalesManager.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(int argc, char const *argv[])
{
#if 0
    Employee *Tec = new Technician;
    Tec->Init();
    Tec->Level(9);
    Tec->GetPay();
    Tec->DisplayStatus();
    delete Tec;

    Employee *Sal = new Salasman;
    Sal->Init();
    Sal->Level(9);
    Sal->GetPay();
    Sal->DisplayStatus();
    delete Sal;

    Employee *Man = new Manager;
    Man->Init();
    Man->Level(9);
    Man->GetPay();
    Man->DisplayStatus();
    delete Man;

    Employee *SaleM = new SalesManager;
    SaleM->Init();
    SaleM->Level(3);
    SaleM->GetPay();
    SaleM->DisplayStatus();
    delete SaleM;
#endif

    Employee *SaleM[]=
    {
        new Technician,
        new Salasman,
        new Manager,
        new SalesManager
    };
    for (int i = 0; i < (sizeof(SaleM)/sizeof(SaleM[0])); i++)
    {
        SaleM[i]->Init();
        SaleM[i]->Level(3);
        SaleM[i]->GetPay();
        SaleM[i]->DisplayStatus();
    }

    for (int j = 0; j < (sizeof(SaleM) / sizeof(SaleM[0])); j++)
    {
        delete SaleM[j];
    }
    
    
    return 0;
}
