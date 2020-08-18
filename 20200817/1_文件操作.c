#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
    char str[]= "1234567";
    char str2[30];
    fp = fopen("./abc.txt","rw");
    if (fp == NULL)
    {
        printf("fp == NULL\n");
        return -1;
    }
    int ret = fwrite(str,strlen(str),1,fp);    
    printf("ret[%d]\n",ret);
    //fflush(fp);
   //ret = fread(&str2,100,1,fp);
    printf("ret[%d]\n",ret);
    printf("%s\n",str2);
    fclose(fp);
    return 0;
}
