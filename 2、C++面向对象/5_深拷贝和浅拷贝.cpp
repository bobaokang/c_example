#include <iostream>
#include <string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
class Teacher
{
private:
    int m_len;
    char *m_p;
public:
    Teacher(const char *p);
    Teacher(const Teacher &p);
    ~Teacher();
};


//浅拷贝 只拷贝了内存地址，没有把堆上的数据拷贝出来
Teacher::Teacher(const char *p)
{
    m_len = strlen(p);
    m_p = (char *)malloc(m_len);
    strcpy(m_p,p);
    printf("有参构造：m_len[%d]     m_p[%s]\n",m_len,m_p);
}
//深拷贝   手动编写拷贝构造函数
Teacher::Teacher(const Teacher &p)
{
    m_len = p.m_len;
    m_p = (char *)malloc(m_len);
    strcpy(m_p,p.m_p);
    printf("拷贝构造：m_len[%d]     m_p[%s]\n",m_len,m_p);
}
//析构函数
Teacher::~Teacher()
{
    if (m_p!=NULL)
    {
        printf("析构：[%d]     m_p[%s]\n",m_len,m_p);
        free(m_p);
        m_p = NULL;
        m_len = 0;
    }
}

int main(int argc, char const *argv[])
{
    Teacher T1 = ("abcdef");
    Teacher T2 = ("1234");
    Teacher T3 = T1;
    return 0;
}