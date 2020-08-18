#include "stdio.h"
#include "string.h"
int length(char *inbuf,int *len)
{
    
    *len = strlen(inbuf);
    return 0;
}
int main(int argc, char const *argv[])
{
    /* code */
    char *buff = "12323456";
    int len;
    length(buff,&len);
    printf("%s,%d\n",buff,len);
    return 0;
}
