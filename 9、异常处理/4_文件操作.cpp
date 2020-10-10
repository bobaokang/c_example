#include <iostream>
#include <fstream>
#include "string.h"
using namespace std;


class Teacher
{
private:
    int age;
    char name[32];
public:
    Teacher(/* args */);
    Teacher(int age,const char *name);
    ~Teacher();
    void myprint()
    {
        cout<<age<<name<<endl;
    }
};

Teacher::Teacher(/* args */)
{
    age = 32;
    strcpy(name,"空");
}
Teacher::Teacher(int age,const char *name)
{
    this->age = age;
    strcpy(this->name,name);
}
Teacher::~Teacher()
{
}

int main(int argc, char const *argv[])
{
    // ofstream fout("./1.txt",ios::out);
    // fout<<"hello"<<endl;
    // fout.close();
    
    // ifstream fin("./1.txt");
    // char ch;
    // while (fin.get(ch),ios::in)
    // {
    //     cout<<ch;
    // }
    // fin.close();


    ofstream fout("./2.txt",ios::binary);
    if (!fout)
    {
        cout<<"打开文件失败"<<endl;
        return -1;
    }
    Teacher T1(21,"姓名T1");
    Teacher T2(22,"姓名T2");
    fout.write((char*)&T1,sizeof(Teacher));
    fout.write((char*)&T2,sizeof(Teacher));
    fout.close();

    Teacher tmp;
    ifstream fin("./2.txt");
    fin.read((char *)&tmp,sizeof(Teacher));
    tmp.myprint();
    fin.read((char *)&tmp,sizeof(Teacher));
    tmp.myprint();
    fin.close();
    return 0;
}
 