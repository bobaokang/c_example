#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
//c语言中没有字符串
class MyString
{
private:
    size_t m_len;
    char *m_p;
public:
    MyString(int m_len = 0);
    MyString(const char* p);
    MyString(const MyString& s);
    ~MyString();
    char* myc_srt();
    MyString &operator=(const char *p);
    MyString &operator=(const MyString& s);
    char& operator[](int index);
    friend  ostream& operator<<(ostream &out,MyString &s);
    friend  istream& operator>>(istream &in,MyString &s);
    bool operator==(const char *p);
    bool operator==(const MyString &s);
    bool operator!=(const char *p);
    bool operator!=(const MyString &s);
    int operator<(const char *p);
    int operator<(const MyString &s);
    int operator>(const char *p);
    int operator>(const MyString &s);
};


