#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sort_string(char **my_string,int num)
{
    int i=0,j=0;
    char *temp;
    if(my_string == NULL)
    {
        printf("*my_string == NULL\n");
        return -1;
    }
    for ( i = 0; i < num; i++)
    {
        for ( j = i+1; j < num; j++)
        {
            if (strcmp(my_string[j],my_string[i])>0)
            {
                /* code */
               temp = my_string[j];
               my_string[j]=my_string[i];
               my_string[i]=temp;
            }
        }
    }
    return 0;
}
int sort_printf(char **in_str,int num)
{
    int  i = 0;
    if(*in_str==NULL)
    {
        printf("in_str==NULL\n");
        return -1;
    }
    for (i = 0; i < num; i++)
    {
        printf("out[%s]\n",in_str[i]);
}
    
  
    return 0;
}
int main(int argc, char const *argv[])
{
    int num = 0;
    char *my_string[]={"aaaaa","bbbbb","123123","23345","ccccc"};
    num = (sizeof(my_string))/(sizeof(my_string[0]));
    printf("num[%d]\n",num);
    printf("排序前---------------\n");
    sort_printf(my_string,num);
    sort_string(my_string,num);
    printf("排序后---------------\n");
    sort_printf(my_string,num);
    return 0;
}
