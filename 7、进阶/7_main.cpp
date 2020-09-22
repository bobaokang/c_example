#include "7_test.h"
#include "7_test.cpp"
class Teacher
{
private:
    int age;
    char name[48];
public:
   Teacher();
   Teacher(int age,const char *name);
   void myprint();
};


Teacher::Teacher()
{
    age = 0;
    strcpy(name,"初始化");
}
Teacher::Teacher(int age,const char *name)
{
    this->age = age;
    strcpy(this->name,name); 
}
void Teacher:: myprint()
{
    cout<<"age:"<<age<<"   name:"<<name<<endl;
}
int main(int argc, char const *argv[])
{
    MyVector <int>myv1(3);
    myv1[0] = 10;
    myv1[1] = 20;
    myv1[2] = 30;
    cout<<myv1;

    MyVector <char>myv2(3);
    myv2[0] = 'a';
    myv2[1] = 'b';
    myv2[2] = 'c';
    cout<<myv2;

    MyVector <float>myv3(3);
    myv3[0] = 1.111;
    myv3[1] = 2.222;
    myv3[2] = 3.333;
    cout<<myv3;


    MyVector <Teacher>myv4(3);
    Teacher T1(31,"T1"),T2(32,"T2"),T3(33,"T3");
    myv4[0] = T1;
    myv4[1] = T2;
    myv4[2] = T3;
    for (int i = 0; i < myv4.getlength(); i++)
    {
        Teacher Tmp = myv4[i];
        Tmp.myprint();
    }
    return 0;
}
