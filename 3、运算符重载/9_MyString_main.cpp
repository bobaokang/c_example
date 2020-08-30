#include "MyString.h"
int main(int argc, char const *argv[])
{
    MyString s1;
    MyString s2("s2");
    MyString s3 = s2;
    s3[1] = '6';
    MyString s4;
    MyString s5;
    s5 = s4 =s2;
    if (s4 == s2)
    {
        printf("相等\n");
    }
    if (s4 != s2)
    {
        printf("不相等\n");
    }
    cout<<s4;
    s3 = "1";
    if ((s3<"2")==0)
    {
       printf("s3<bbb\n");
    }
    else
    {
       printf("s3>bbb\n");
    }

    MyString s7;
    strcpy(s7.myc_srt(),"123123123");
    printf("%s\n",s7.myc_srt());
     MyString s8(6);
     cin>>s8;
     cout<<s8;
    return 0;
}