#include "stdlib.h"
#include "stdio.h"
#include "string.h"
//第一种方法 
// int main(int argc, char const *argv[])
// {
//     char buf[]="aabcdefghij";
//     int length = strlen(buf);
//     char *p1 = buf;
//     char *p2 = buf+length-1;
//     while (p1<p2)
//     {
//         char c = *p1;
//         *p1 = *p2;
//         *p2 = c;
//         ++p1;
//         --p2;
//     }
//     printf("buf:[%s]\n",buf);
//     return 0;
// }
//第2种方法 
int inverse(char *str1)
{
    char *p1;
    char *p2;
    if(str1 == NULL)
    {
        return -1;
    }
    p1 = str1;
    int length = strlen(str1);
    p2 = str1+length-1;
    while (p1<p2)
    {
        char c = *p1;
        *p1 = *p2;
        *p2 = c;
        ++p1;
        --p2;
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    char buf[]="aabcdefghij";
    inverse(buf);
    printf("buf[%s]\n",buf);

   // buf[]="asdasdkaldasld";
    
    char buf1[]="qweqweqweqwe";
    inverse(buf1);
    printf("buf[%s]\n",buf1);

    return 0;
}
//第3种方法  
//1、通过递归的方式逆序打印
// int inverse(char *str1)
// {
//     if(str1==NULL)
//     {
//         return -1;
//     }
//     if(*str1=='\0')
//     {
//         return 0;
//     }
//     inverse(str1+1);
//     printf("%c\n",*str1);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     char buf[]="123456789";
//     inverse(buf);
//     printf("buf[%s]\n",buf);
//     return 0;
// }
//2、递归和全局变量（把逆序的结果存入全局变量）
//3、递归和非全局变量（递归指针做函数参数）
//char g_buf[1000];
// int inverse(char *str1,char *g_buf)
// {
//     if(str1==NULL||g_buf == NULL)
//     {
//         return -1;
//     }
//     if(*str1=='\0')
//     {
//         return 0;
//     }
//     inverse(str1+1,g_buf);
//     strncat(g_buf,str1,1);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     char buf[]="123456";
//     char mybuf[1024]={0};
//     inverse(buf,mybuf);
//     printf("mybuf[%s]\n",mybuf);
//     return 0;
// }