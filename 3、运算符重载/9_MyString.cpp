#include "MyString.h"
MyString::MyString(int len)    //普通构造
{
    if (len == 0)
    {
        m_len = 0;
        m_p = new char[m_len + 1];
        strcpy(m_p,"");
    }
    else
    {
        m_len = len;
        m_p = new char[m_len + 1];
        memset(m_p,m_len,0);
    }
}

MyString::MyString(const char* p) //传值构造
{
    if (p == NULL)
    {
        m_len = 0;
        m_p = new char[m_len + 1];
        strcpy(m_p,"");
    }
    else
    {
        m_len = strlen(p);
        m_p = new char[m_len + 1];
        strcpy(m_p,p);
    }
}

MyString::MyString(const MyString& s)  //传类构造
{
    m_len = s.m_len;
    m_p = new char[m_len+1];
    strcpy(m_p,s.m_p);
}

MyString::~MyString()   //析构
{
    if (m_p!=NULL)
    {
        delete[]m_p;
        m_p = NULL;
        m_len = 0;
    }
}


MyString& MyString::operator=(const char *p)//=重载
{
    if (m_p!=NULL)
    {
        delete[]m_p;
        m_p = NULL;
        m_len = 0;
    }
    if (p==NULL)
    {
        m_len = 0;
        m_p = new char [m_len+1];
        strcpy(m_p,"");
    }
    else
    {
        m_len = strlen(p);
        m_p = new char [m_len+1];
        strcpy(m_p,p);
    }
    return *this;
}

MyString& MyString::operator=(const MyString &s)//=重载
{
    if (m_p!=NULL)
    {
        delete[]m_p;
        m_p = NULL;
        m_len = 0;
    }
    m_len = s.m_len;
    m_p = new char[m_len+1];
    strcpy(m_p,s.m_p);
    return *this;
}
   
char& MyString::operator[](int index)//[]重载
{
    return m_p[index];
}

ostream& operator<<(ostream &out,MyString &s)//<<重载
{
    out<<s.m_p<<endl;
    return out;
}
istream& operator>>(istream &in,MyString &s)//>>重载
{
    cin>>s.m_p;
    return cin;
}



bool MyString::operator==(const char *p)//==重载
{
    if (p == NULL)
    {
        if(m_len == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    else
    {
        if (m_len == strlen(p))
        {
            return !strcmp(m_p,p);
        }
        else
        {
            return false;
        }
    } 
    return true;
}

bool MyString::operator==(const MyString &s)//==重载
{
    if (m_len!=s.m_len)
    {
        return false;
    }
    return !strcmp(m_p,s.m_p);
}

bool MyString::operator!=(const char *p)//!=重载
{
    return !(*this == p);
}

bool MyString::operator!=(const MyString &s)//!=重载
{
    return !(*this==s);
    return true;
}

int MyString::operator<(const char *p)//<重载
{
    return strcmp(this->m_p,p);
}
int MyString::operator<(const MyString &s)//<重载
{
    return strcmp(m_p,s.m_p);
}
int MyString::operator>(const char *p)//>重载
{
    return strcmp(p,this->m_p);
}
int MyString::operator>(const MyString &s)//>重载
{
    return strcmp(s.m_p,m_p);
}
char* MyString::myc_srt()   //将私有指针变量露出
{
    return m_p;
}