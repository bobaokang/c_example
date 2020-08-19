#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
inline int Test_Inline(int a,int b)
{
    return  (a > b ? a : b);
}
int main(int argc, char const *argv[])
{
    /* code */
    cout<<Test_Inline(2,3)<<endl;
    return 0;
}
