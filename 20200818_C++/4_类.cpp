#include <iostream>
using namespace std;
class test1
{
private:
  
public:
int tes1(void);
 int a1 = 10;
    
};

class test2
{
private:
    
public:
   int a3 = 100;
   int tes2(void);

};

int test1::tes1()
{
    a1 = 1000;
    return a1;
}
int test2::tes2()
{
    a3 = 3000;
    return a3;
}
int main(int argc, char const *argv[])
{
    test1 t1;
    test2 t2;
    cout<<t1.a1<<endl;
    cout<<t2.a3<<endl;

    cout<<t1.tes1()<<endl;
    cout<<t2.tes2()<<endl;
    t1.a1 = t2.a3;
    cout<<t1.a1<<endl;
    cout<<t2.a3<<endl;
    return 0;
}
