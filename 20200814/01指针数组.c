#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // typedef int (*Arrary)[5];
    // Arrary arrary;
    // int i = 0;
    // int a[5];
    // arrary = &a;
    // for (; i < 5; i++)
    // {
    //     (*arrary)[i] = i+1;
    //     printf("arrary[%d] = %d\n",i,(*arrary)[i]);
    // }
    
    int *p;
    int i  = 0;
    for (  ;i < 5; i++)
    {
        p[i] = i+1;
        printf("p[%d] = %d\n",i,p[i]);
    }
    
    return 0;
}
