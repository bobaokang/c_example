#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct 
{
    char name[64];
    int age;
}Teacher;

int Creat(Teacher **p,int num)
{
    Teacher *Teach;
    Teach = (Teacher*)malloc(sizeof(Teacher)*num);
    if (Teach == NULL)
    {
        printf("malloc == NULL\n");
        return -1;
    }
    memset(Teach,0,sizeof(*Teach));
    //printf("sizeof(Teach):[%ld]\n",sizeof(*Teach));
    *p = Teach;
    return 0;
}
void Free_Teacher(Teacher *p)
{
    if (p!=NULL)
    {
        free(p);
        p = NULL;
    }
    
}
int Sort_Teacher(Teacher *p,int num)
{
    if (p == NULL)
    {
        printf("Sort_Teacher == NULL\n");
        return -1;
    }
    
    int i = 0;
    int j = 0;
    Teacher temp;
    for ( i = 0; i < num; i++)
    {
        for (j = i; j < num; j++)
        {
            if (p[i].age>p[j].age)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;

            }
        }
    }
    return 0; 
}

int  Input(Teacher *p ,int num)
{
    int i = 0;
    if (p == NULL)
    {
        printf("Input == NULL\n");
        return -1;
    }
    
    for ( i = 0; i < num; i++)
    {
    printf("\nplease input age:");
    scanf("%d",&p[i].age);
    printf("\nplease input name:");
    scanf("%s",p[i].name);
    }
    return 0;
}
int Printf_Teacher(Teacher *p,int num)
{   
    int i = 0;
    if (p == NULL)
    {
        printf("Printf_Teacher == NULL\n");
        return -1;
    }
    
    for ( i = 0; i < num; i++)
    {
    printf("Teacher[%d] name:%d age:%s\n",i+1,(p[i].age),p[i].name);
    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
    int num = 5;
    int ret = 0;
    Teacher *p = NULL;
    ret =  Creat(&p,num);
    if (ret != 0)
    {
       printf("Creat Erro:%d\n",ret);
       return -1;
    }
    ret = Input(p,num);
    if (ret != 0)
    {
       printf("Input Erro:%d\n",ret);
       return -1;
    }
    printf("排序前--------\n");
    ret = Printf_Teacher(p,num);
    if (ret != 0)
    {
       printf("Printf_Teacher Erro:%d\n",ret);
       return -1;
    }
    ret = Sort_Teacher(p,num);
    if (ret != 0)
    {
       printf("Sort_Teacher Erro:%d\n",ret);
       return -1;
    }
    printf("排序后--------\n");
    Printf_Teacher(p,num);
    free(p);
    return 0;
}
