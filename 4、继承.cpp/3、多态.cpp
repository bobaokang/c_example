#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class one
{
public:
   virtual  ~one()
    {
        printf("执行虚析构函数one.\n");
    }
   virtual int One_play()
    {
       return 10;
    }
};



class two: public one
{
public:
    virtual ~two()
    {
        printf("执行虚析构函数two.\n");
    }
    virtual int One_play()
    {
        return 20;
    }
};


class three: public one
{
public:
    virtual ~three()
    {
        printf("执行虚析构函数three.\n");
    }
    virtual int One_play()
    {
        return 30;
    }
};


class tem
{
public:
    ~tem()
    {
        printf("执行虚析构函数tem.\n");
    }
     int Ten_tem()
    {
        return 20;
    }
};



void paly(one *o,tem *t)
{
    if(o->One_play() >= t->Ten_tem())
    {
        printf("One_play() win\n");
    }
    else
    {
        printf("One_play() loss\n");

    }
    
}
void paly2(one &o,tem &t)
{
    if(o.One_play() >= t.Ten_tem())
    {
        printf("One_play() win\n");
    }
    else
    {
        printf("One_play() loss\n");

    }
    
}
int main(int argc, char const *argv[])
{
    //one oneone;
    two twotwo;
    three threethree;
    tem temtem;
    paly(&threethree,&temtem);
    paly(&twotwo,&temtem);
    // paly(&threethree,&temtem);

    // paly2(oneone,temtem);
    // paly2(twotwo,temtem);
    // paly2(threethree,temtem);
    return 0;
}
