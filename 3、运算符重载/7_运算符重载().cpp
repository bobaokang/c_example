#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Complex
{
private:
    int m_a;
    int m_b;
public:
    int operator()(int a,int b)
    {
        return a+b;
    }
    
};

int main(int argc, char const *argv[])
{
    Complex C1;
    cout<<C1(1,3)<<endl;
    return 0;
}
