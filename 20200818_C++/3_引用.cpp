#include <iostream>
using namespace std;
void change1(int *a,int *b)
{
    *a = *a+1;
    *b = *b+1;
}
void change2(int &a,int &b)
{
    a = a+1;
    b = b+1;
}

int &ret()
{
    static int a = 2000;
    return a;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    //int b = 10;
    // cout << "a:"<<a <<endl << "b:"<<b << endl;
    // change1(&a,&b);
    // cout << "a:"<<a <<endl << "b:"<<b << endl;
    // change2(a,b);
    // cout << "a:"<<a <<endl << "b:"<<b << endl;
    a = ret();
    int &c = ret(); 
    cout << "a:"<<a <<endl << "c:"<<c << endl;
    ret() = 100;
    cout << "a:"<<a <<endl << "ret():"<<ret() << endl;
    
    return 0;
}
