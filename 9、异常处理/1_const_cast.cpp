#include <iostream>
#include <stdio.h>
using namespace std;

void PrintfBuf(const char *p)
{
    char *p1 = NULL;
    p1 = const_cast<char *>(p);     //去除可读属性 必须保证是可修改的
    p1[0] = '3';

}
int main(int argc, char const *argv[])
{
    char buf[]="123456789";
    PrintfBuf(buf);
    cout<<buf<<endl;
    // char *buf1="123456789";      //不可使用
    // PrintfBuf(buf1);
    // cout<<buf1<<endl;
    return 0;
}
