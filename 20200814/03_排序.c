#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sort(char **myp1,int num1,char (*myp2)[30],int num2,char ***myp3,int *num3)
{
    int i = 0,j = 0;
    int str_len1 = 0;
    if (myp1 == NULL || myp2 == NULL || myp3 == NULL)
    {
        printf("myp1 == NULL || myp2 == NULL || myp3 == NULL\n");
        return -1;
    }
    
    char **temp_p3 = NULL;
    temp_p3 = (char **)malloc(sizeof(char *)*(num1+num2)); 
    if (temp_p3==NULL)
    {
        printf(" temp_p3 malloc error\n");
        return -1;
    }
    for ( i = 0; i < num1; i++)
    {
        str_len1 = strlen(myp1[i]) + 1; 
        temp_p3[i] = (char *)malloc(sizeof(char)*str_len1);
        if (temp_p3[i]==NULL)
        {
        printf(" temp_p3[i] malloc error\n");
        return -1;
        }
        strncpy(temp_p3[i],myp1[i],str_len1);
    }
    for (j = 0; j < num2; i++,j++)
    {
        str_len1 = strlen(myp2[j]) + 1; 
        temp_p3[i] = (char *)malloc(sizeof(char)*str_len1);
        if (temp_p3[i]==NULL)
        {
        printf(" temp_p3[i] malloc error\n");
        return -1;
        }
        strncpy(temp_p3[i],myp2[j],str_len1);
    }
    str_len1 = num1+num2;
    char *temp = NULL;
    for (i = 0; i < str_len1; i++)
    {
        for ( j = 0; j < i+1; j++)
        {
            if (strcmp(temp_p3[i],temp_p3[j])<0)
            {
               temp =  temp_p3[i];
               temp_p3[i] = temp_p3[j];
               temp_p3[j] = temp;
               //printf("%s  %s\n",temp_p3[i],temp_p3[j]);
            }   
        }
    }
    *num3 = num1+num2;
    *myp3 = temp_p3;
    return 0;
}

void sort_free1(char ***myp, int len)
{
    int i = 0;
    if (myp==NULL)
    {
        printf("myp == NULL");
        return ;
    }
    char **p = NULL;
    p = *myp;
    if (p == NULL)
    {
        printf("*myp == NULL");
        return ;
    }
    for ( i = 0; i < len; i++)
    {
        free(p[i]);
        p[i] = NULL;
    }
    free(p);
    *myp = NULL;

}
void sort_free2(char **myp, int len)
{
    int i = 0;
    if (myp == NULL)
    {
        printf("myp == NULL");
        return ;
    }
    for ( i = 0; i < len; i++)
    {
        free(myp[i]);
        myp[i] = NULL;
    }
    free(myp);
    myp = NULL;
    

}
int main(int argc, char const *argv[])
{
    int i = 0;
    char *p1[]={"aaaaa","ffffff","bbbbbbb","cccccc"};
    char p2[][30] = {"11111","6666666","333333333","222222222"};
    char **p3 = NULL;
    int len1 = 0 ,len2 = 0,len3 = 0;
    len1 = sizeof(p1)/sizeof(*p1);
    len2 = sizeof(p2)/sizeof(*p2);
   int ret =  sort(p1,len1,p2,len2,&p3,&len3);
   if (ret != 0)
   {
       return -1;
   }
    for ( i = 0; i < len3; i++)
    {
        printf("p3[%s]\n",p3[i]);
    }
    sort_free2(p3,len3);
    // p3 = NULL;
    // sort_free1(&p3,len3);
     for ( i = 0; i < len3; i++)
    {
        printf("p31111[%s]\n",p3[i]);
    }
    return 0;
}
