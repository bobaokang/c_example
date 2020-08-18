#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define VALUENAME "app_filename.txt"
void App_Printf(int *outnum)
{
    int input;
    printf("==============请输入对用数字操作===============\n");
    printf("1、写入           2、读出               3、退出\n");
    printf("请输入->:");
    scanf("%d",&input);
    *outnum = input;
}
int App_Write(const char *filename,const char *key,const char *key_value)
{
    printf("filename[%s] key[%s] key_value[%s]\n",filename,key,key_value);
    FILE *fp;
    fp = fopen(filename,"a+");
    if (fp == NULL)
    {
        printf("App_Write 打开文件[%s]失败!\n",filename);
        return -1;
    }
    fprintf(fp,"%s=%s\n",key,key_value);
    fclose(fp);
    return 0;
}
int App_Read(const char *filename,const char *key,char **key_value)
{
    if (filename == NULL || key == NULL || key_value == NULL)
    {
        printf("filename == NULL || key == NULL || key_value == NULL\n");
        return -1;
    }
    
    FILE *fp;
    char buf[1024] = {0};
    char *str_start = NULL;
   // char *str_end = NULL;
    fp = fopen(filename,"r+");
    if (fp == NULL)
    {
        printf("App_Read 打开文件[%s]失败!\n",filename);
        return -1;
    }
    while (!feof(fp))
    {
        fgets(buf,1024,fp);
        if((str_start = strstr(buf,key))!=NULL)
        {
            str_start = str_start + strlen(key);
             if((str_start = strchr(str_start,'='))!=NULL)
             {
                str_start = str_start + 1;
                *key_value = str_start;
                //printf("[%s]对应的值%s\n",key,str_start);    
             }
        }
    }
    fclose(fp);
    return 0;
}
int Write_Cfg()
{
    char key[1024] = {0};
    printf("请输入要写入得key值：");
    scanf("%s",key);
    char key_value[1024] = {0};
    printf("请输入要写入得key_value值：");
    scanf("%s",key_value);
    printf("您要写入得key为[%s]  key_value为[%s]\n",key,key_value);
    int ret = App_Write(VALUENAME,key,key_value);
    if (ret != 0)
    {
        return ret;
    }
    return 0;
}
int Read_Cfg()
{
    printf("请输入要读取的key值：");
    char key[1024] = {0};
    printf("请输入要写入得key值：");
    scanf("%s",key);
    char *key_value = NULL;
    int ret = App_Read(VALUENAME,key,&key_value);
    if (ret != 0)
    {
        printf("App_Read erro\n");
        return -1;
    }
   printf("查询到key[%s]对应的key_vaule:%s",key,key_value);
    return 0;
}
int main(int argc, char const *argv[])
{
    int input_num = 0;
    while (1)
    {
        App_Printf(&input_num);
        if (input_num == 0)
        {
            return 0;
        }
        else if (input_num == 1)
        {
            printf("\n写入。。。。。\n\n");
            Write_Cfg();
        }
        else if (input_num == 2)
        {
            printf("\n读出。。。。。\n\n");
            Read_Cfg();
        }
        else
        {
            printf("\n输入错误，重新输入！\n\n");
        }
    }
    return 0;
}
