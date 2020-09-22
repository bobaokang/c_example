#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class A
{
private:
   string a = "123456789";
public:
  void PrintfA();
};

class B
{
private:
    string b;
public:
    void PrintfB();
};

void A::PrintfA()
{
    printf("a:%s\n",a.c_str());
}
void B::PrintfB()
{
    A a1;
    a1.PrintfA();
}

int main(int argc, char const *argv[])
{
    B b1;
    b1.PrintfB();
    return 0;
}
