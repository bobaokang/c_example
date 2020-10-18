#include "map"
#include "iostream"
#include "string.h"
using namespace std;
class Teacher
{
private:
    int age;
    int name[64];
public:

};


int main1(int argc, char const *argv[])
{
    map<int ,string >mp1;

    //1
    mp1.insert(pair<int ,string>(21,"Teacher1"));
    mp1.insert(pair<int ,string>(22,"Teacher2"));
    //2
    mp1.insert(make_pair(23,"Teacher3"));
    mp1.insert(make_pair(24,"Teacher4"));
    //3
    mp1.insert(map<int,string>::value_type(25,"Teacher5"));
    mp1.insert(map<int,string>::value_type(26,"Teacher6"));
    //4
    mp1[27] = "Teacher7";       //会
    mp1[28] = "Teacher8";

    //printf
    for (map<int ,string >::iterator it = mp1.begin();it != mp1.end();it++)
    {
        cout<<it->first<<":"<<it->second<<"  ";
    }
    cout<<"遍历结束"<<endl;

    //delete
    while (!mp1.empty())
    {
        map<int ,string >::iterator it = mp1.begin();
        cout<<it->first <<":"<<it->second<<endl;
        mp1.erase(it);
    }
    

    return 0;
}

int main(int argc, char const *argv[])
{
    map<int ,string >mp1;
    //1
    pair<map<int ,string >::iterator,bool> p1 = mp1.insert(pair<int,string>(21,"Teacher1"));
    if (p1.second != true)
    {
        cout<<"插入失败"<<endl<<p1.first->first<<"\t"<<p1.first->second<<endl;;
    }
    else
    {
        cout<<"插入成功"<<endl<<p1.first->first<<"\t"<<p1.first->second<<endl;;
    }
    
    pair<map<int ,string >::iterator,bool>p2 = mp1.insert(pair<int,string>(22,"Teacher2"));
    if (p2.second != true)
    {
        cout<<"插入失败"<<endl<<p2.first->first<<"\t"<<p2.first->second<<endl;;
    }
    else
    {
        cout<<"插入成功"<<endl<<p2.first->first<<"\t"<<p2.first->second<<endl;;
    }
    //2
    pair<map<int ,string >::iterator,bool>p3 = mp1.insert(make_pair(23,"Teacher3"));
    if (p3.second != true)
    {
        cout<<"插入失败"<<endl<<p3.first->first<<"\t"<<p3.first->second<<endl;;
    }
    else
    {
        cout<<"插入成功"<<endl<<p3.first->first<<"\t"<<p3.first->second<<endl;;
    }
    //pair<map<int ,string >::iterator,bool>p4 = mp1.insert(make_pair(24,"Teacher4"));
    //3
    pair<map<int ,string >::iterator,bool>p5 = mp1.insert(map<int,string>::value_type(25,"Teacher5"));
    if (p5.second != true)
    {
        cout<<"插入失败"<<endl<<p5.first->first<<"\t"<<p5.first->second<<endl;;
    }
    else
    {
        cout<<"插入成功"<<endl<<p5.first->first<<"\t"<<p5.first->second<<endl;;
    }
    //pair<map<int ,string >::iterator,bool>p6 = mp1.insert(map<int,string>::value_type(26,"Teacher6"));
    //4
    mp1[27] = "Teacher7";
    mp1[28] = "Teacher8";

    //printf
    for (map<int ,string >::iterator it = mp1.begin();it != mp1.end();it++)
    {
        cout<<it->first<<":"<<it->second<<"  ";
    }
    cout<<"遍历结束"<<endl;
    return 0;
}
