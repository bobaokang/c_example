#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   
    const int a = 1;
    int const b = 2;//一样
    const int *c = &b; //const 所指向的内存空间不能被修改
    cout << *c <<endl;
    
    int x= 20;
    c = &x;
    cout << *c <<endl;
    x = 30;
    cout << *c <<endl;
    
    int y = 40;
    c = &y;
    cout << *c <<endl;

    int z = 50;
    int *const p = &z;
    cout << *p <<endl;
    z = 60;
    cout << *p <<endl;
    return 0;
}
