#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 10;
    const int &y = x;
    printf("%d  %d\n",x,y);
    x = 20;
    printf("%d  %d\n",x,y);
    const int &z = 31;
    printf("%d \n",z);
    int &a = x;
    a = 100;
    printf("%d  %d\n",x,y);

    //1、用变量初始化常引用
    //2、常引用让实参变量拥有只读属性
    return 0;
}
