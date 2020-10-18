#include "map"
#include "iostream"
#include "string.h"
#include "queue"
#include "list"
#include "algorithm"
#include "functional"
using namespace std;
template<typename T>
//在一个类中定义了符号重载操作符
//用这个类定义的对象叫函数对象

//函数对象做for_each做函数参数
//or_each中函数对象当返回值
class Teacher
{
private:
    int n;
public:
    Teacher()
    {
        n = 0;
    }
    void printfN()
    {
        cout<<"n:"<<n<<endl;
    }
    void operator()(T &t)       //一元函数对象
    {
        n++;
        //printfN();
        cout<<t<<endl;
    }
};

//函数对象 定义 
//函数对象和普通函数的区别
//===========2
template<typename T>
void FuncShow1(T &t)
{
    cout<<t<<endl;
}
//==============3
void  FuncShow2(int &t)
{
    cout<<t<<endl;
}
int main1(int argc, char const *argv[])
{
    int a = 10; 
    Teacher<int> Teach;
    Teach(a);       //函数对象的（）执行 很像一个函数（仿函数）
    FuncShow1<int>(a);
    FuncShow2(a);
    return 0;
}

int main(int argc, char const *argv[])
{
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    // for_each(v1.begin(),v1.end(),Teacher<int>());   //匿名函数对象 匿名仿函数
    // for_each(v1.begin(),v1.end(),FuncShow2);    //通过回掉函数 谁使用for_each 谁去填写回掉函数的入口地址


    Teacher <int>show1;
    //cout<<"通过for_each算法的返回值看调用的次数"<<endl;
    show1 = for_each(v1.begin(),v1.end(),show1);        //返回了一个函数对象
    show1.printfN();
    return 0;
}

//