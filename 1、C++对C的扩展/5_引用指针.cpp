#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
struct Teacher
{
    char name[64];
   int age;
};

int GetTeacher(Teacher **p)
{
    Teacher *pp = NULL;
    if (p == NULL)
    {
        return -1;
    }
    pp = (Teacher*)malloc(sizeof(Teacher));
    if(pp==NULL)
    {
        return -1;
    }
    pp->age = 100;
    *p = pp;
    if(pp!=NULL)
    {
        free(pp);
        pp =NULL;
    }
    return 0;
}
int GetTeacher2(Teacher* &p)
{
   
    p = (Teacher*)malloc(sizeof(Teacher));//给p赋值相当于给main函数中的T1赋值
    if(p==NULL)
    {
        return -1;
    }
    p->age = 100;
    return 0;
}
void Printf_Teacher(  Teacher* &myt)
{
    //myt->age = 10;
    printf("myt.age[%d]\n",myt->age);
}
int main(int argc, char const *argv[])
{
    Teacher *T1 = NULL;
    GetTeacher2(T1);
    Printf_Teacher(T1);
    if(T1!=NULL)
    {
        free(T1);
        T1 = NULL;
    }
    return 0;
}
