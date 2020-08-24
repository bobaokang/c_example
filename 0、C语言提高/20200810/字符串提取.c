#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int delete_space(char *input_string,char *output)
{
    char *p = input_string;
    int i = 0;
    int j = 0;
    if (input_string == NULL|| output == NULL)
    {
        printf("input_string == NULL|| output == NULL\n");
        return -1;
    }
    j = strlen(p) - 1;
    while (isspace(p[i])&&p[i]!='\0')
    {
       i++;
    }
    while (isspace(p[j])&&p[j]!='\0')
    {
       j--;
    }
    int ncount = j - i + 1;
    //printf("i[%d] j[%d] ncount[%d]\n",i,j,ncount);
    strncpy(output,input_string+i,ncount);
    output[ncount] = '\0';
    return 0;
}


int refine_string(char *input_str,char *refine_srt,char *new_str)
{
    if(input_str == NULL || refine_srt == NULL ||new_str == NULL )
    {
        printf("input_str == NULL || refine_srt == NULL ||new_str == NULL\n");
        return -1;
    }
    char *p =  input_str;
    if((p = strstr(p,refine_srt))!=NULL)
    {
        p=p+strlen(refine_srt);
        //printf(" p=p+strlen(refine_srt)[%s]\n",p);
    }
    else
    {
        printf("字符串[%s]中没有[%s]字段\n",input_str,refine_srt);
        return -2;
    }
    if((p = strstr(p,"="))!= NULL)
    {
        p = p + 1;
       // printf("p = p + 1[%s]\n",p);
    }
    int ret = delete_space(p,new_str);
    if (ret == -1)
    {
        printf("delete_space(p,new_str) erro\n");
        return -1;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    char *input = "key   guuiiol  klj;os  =  h12123213   ";
    char output[100]={0};
    refine_string(input,"key",output);
    printf("output[%s]\n",output);
    return 0;
}
