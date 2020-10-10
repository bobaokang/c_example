#include "7_test.h"
#include "7_test.cpp"
class Teacher
{
private:
    int age;
    //char name[48];
    char *Name;
public:
   Teacher();
   ~Teacher();
   Teacher(int age,const char *name);
   void myprint();
   Teacher& operator=(const Teacher& obj);
    friend ostream& operator<<(ostream &out,Teacher &obj);
};

Teacher::Teacher()
{
    age = 0;
    Name = new char[1];
    strcpy(Name,"");
}

Teacher::~Teacher()
{
    if (Name!=NULL)
    {
        delete[]Name;
        Name=NULL;
    }
    
}

Teacher::Teacher(int age,const char *name)
{
    this->age = age;
    Name = new char[strlen(name)+1];
    strcpy(Name,name); 
}
void Teacher:: myprint()
{
    cout<<"age:"<<age<<"   name:"<<Name<<endl;
}

Teacher& Teacher::operator=(const Teacher& obj)
{
    if (Name!=NULL)
    {
        delete[]Name;
        Name = NULL;
    }
    Name = new char[strlen(obj.Name)+1];
    age = obj.age;

    strcpy(Name,obj.Name);
    return *this;
}

ostream& operator<<(ostream &out,Teacher &obj)
{
    out<<"name:"<<obj.Name<<"     "<<"age:"<<obj.age<<endl;
    return out;
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

    MyVector <Teacher *>myv5(3);
     Teacher T4(31,"T1"),T5(32,"T2"),T6;
    myv5[0] = &T4;
    myv5[1] = &T5;
    T6 = T5;
    myv5[2] = &T6;
    for (int i = 0; i < myv5.getlength(); i++)
    {
        //Teacher *Tmp = myv5[i];
        //Tmp->myprint();
        cout<<*myv5[i];
    }
    return 0;
}
