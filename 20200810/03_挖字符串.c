#include "stdlib.h"
#include "stdio.h"
#include "string.h"
// int inverse(char *str)
// {
//     if(str == NULL)
//     {
//         printf("str == NULL\n");
//         return -1;
//     }
//     char *p = str;
//     char *q = str+strlen(str)-1;
//     while (p < q)
//     {
//        char  temp = *p;
//         *p = *q;
//         *q = temp;
//         ++p;
//         --q;
//     }
//     return 0;
// }
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
        printf("%c,%c\n",*p1,*p2);
        char c = *p1;
        *p1 = *p2;
        *p2 = c;
        ++p1;
        --p2;
    }
    return 0;
    
}
int dig_string(char *buf,char *dig_str,int *number,char *outbuf)
{
    if (buf == NULL || number==NULL ||dig_str == NULL || outbuf==NULL)
    {
        printf("buf == NULL || number==NULL || outbuf==NULL\n");
        return -1;
    }
    char *s_buf = buf;
   // printf("buf[%s]\n",buf);
    while((buf = strstr(buf,dig_str))!=NULL)
    {
        if (buf - s_buf > 0)
        {
         printf("buf[%s]\n",buf);
         printf("s_buf[%s]\n",s_buf);
        }
        (*number)++;
        buf = buf + strlen(dig_str);
    }
    //printf("buf[%s]\n",buf);
   // outbuf = bufbuf;
    return 0;
}
int main(int argc, char const *argv[])
{
    int number = 0;
    char dig_str[10] = "abcd";
    char buf[] = "123abcd1111abcd1235abcd12abcd1234";
    char outbuf[100];
    dig_string(buf,dig_str,&number,outbuf);  
    printf("number[%d]outbuf[%s]\n",number,outbuf);
    return 0;
}
