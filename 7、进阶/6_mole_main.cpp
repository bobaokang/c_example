#include "6_mole.h"
#include "6_mole.cpp"
int main1(int argc, char const *argv[])
{
    MyVector <int> myv1(3);
    for (int i = 0; i < myv1.getlen(); i++)
    {
        myv1[i]=i+1;
    }
    cout<<myv1<<"";
    MyVector <int> myv2 = myv1;
    cout<<myv2<<"";
    return 0;
}
int main2(int argc, char const *argv[])
{
    MyVector <char> myv1(3);
    myv1[0] = 97;
    myv1[1] = 98;
    myv1[2] = 99;
    cout<<myv1;

    return 0;
}

int main3(int argc, char const *argv[])
{
    MyVector <float> myv1(3);
    myv1[0] = 97.123;
    myv1[2] = myv1[1] = myv1[0];
    cout<<myv1;

    return 0;
}

class Teacher
{
private:
    int age;
    char name[32];
public:
    Teacher()
    {
        age = 0;
        strcpy(name,"初始化");
    }
    Teacher(const char* name,int age)
    {
        this->age = age;
        strcpy(this->name,name);        
    }
    void MyPrint()
    {
        cout<<name<<":"<<age<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Teacher t1("T1",31),t2("T2",32),t3("T3",33);
    MyVector <Teacher> myv1(3);
    myv1[0] = t1;
    myv1[1] = t2;
    myv1[2] = t3;
    for (int i = 0; i < 3; i++)
    {
        Teacher tmp = myv1[i];
        tmp.MyPrint();
    }
    //cout<<myv1;
    return 0;
}
