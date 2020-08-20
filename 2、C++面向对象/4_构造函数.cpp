#include <iostream>
using namespace std;
class Teacher
{
private:
    /* data */
    int m_a;
    int m_b;
public:
    //构造是先初始化的先构造
    Teacher();//无参构造函数
    Teacher(int a);
    Teacher(int a,int b);//有参构造函数
    Teacher(const Teacher &te);
    ~Teacher();
    void print(Teacher &t);
};

Teacher::Teacher()
{
    cout<<"无参构造函数"<<endl;
}
Teacher::Teacher(int a,int b)//有参构造函数
{
    m_a = a;
    m_b = b;
    cout<<"有参构造函数"<<endl;
}
Teacher::Teacher(int a)//有参构造函数
{
    m_a = a;
    cout<<"有一个参构造函数"<<endl;
}
Teacher::Teacher(const Teacher &te)//拷贝构造函数
{
    //用一个对象初始化另外一个对象
    //完成对象初始化
    cout<<"拷贝构造函数"<<endl; 
       m_a = te.m_a;
       m_b = te.m_b;
}

Teacher::~Teacher()
{
    //析构时先创建的对象后释放
    cout<<"~Teacher()"<<endl;
}
void Teacher::print(Teacher &t)
{
    cout<<m_a<<endl<<m_b<<endl;
    cout<<t.m_a<<endl<<t.m_b<<endl;
}
void f(Teacher p)
{   
    //Teacher T6(10,20);
    //p.print(p);
}
//g函数 返回一个元素，
//结论 1、函数的返回值是一个元素（复杂类型的），返回的是一个新的匿名对象（所以会调用匿名对象类的copy构造函数）
//结论2、有关匿名对象的去或留
//如果匿名对象初始化另外一个同类型的对象，匿名对象转陈有名对象
//如果用匿名对象 赋值给另外一个同类型的对象 匿名对象被析构
Teacher g()
{
    Teacher A(1,3);
    return A;
}
int main(int argc, char const *argv[])
{

    //Teacher T1;//调用无参构造函数
   // Teacher T2(1,2);//有参构造函数
    //Teacher T3 = Teacher(1);//有一个参数的构造函数  //匿名对象的去和留 
    //Teacher T4 = T2;  //第一种
   // T2.print(T4);
   // Teacher T5(T2);   //第二种
   // T2.print(T5);
   // f(T2);               //第三种  
                         //  T2实参初始化形参p 会调用拷贝构造函数
    Teacher T1 = g();
    return 0;
}






// #include "iostream"
// using namespace std;

// class Location 
// { 
// public:
// 	Location( int xx = 0 , int yy = 0 ) 
// 	{ 
// 		X = xx ;  Y = yy ;  cout << "有参构造函数\n" ; 
// 	}
// 	Location( const Location & p ) 	    //复制构造函数
// 	{ 
// 		X = p.X ;  Y = p.Y ;   cout << "拷贝构造." << endl ;  
// 	}
// 	~Location() 
// 	{ 
// 		cout << X << "," << Y << " 析构." << endl ; 
// 	}
// 	int  GetX () { return X ; }		int GetY () { return Y ; }
// private :   int  X , Y ;
// } ;

// //alt + f8 排版
// void f ( Location  p )   
// { 
// 	//cout << "Funtion:" << p.GetX() << "," << p.GetY() << endl ; 
// }

// void mainobjplay()
// {  
// 	Location A ( 1, 2 ) ;  //形参是一个元素，函数调用，会执行实参变量初始化形参变量
// 	f ( A ) ;
// } 

// int main()
// {  
// 	mainobjplay();
// 	//system("pause");
//     return 0;
// }





// #include "iostream"
// using namespace std;
// class Location 
// { 
// public:
// 	Location( int xx = 0 , int yy = 0 ) 
// 	{ 
// 		X = xx ;  Y = yy ;  cout << "有参构造.\n" ; 
// 	}
// 	Location( const Location & p ) 	    //复制构造函数
// 	{ 
// 		X = p.X ;  Y = p.Y ;   cout << "拷贝构造." << endl ;  
// 	}
// 	~Location() 
// 	{ 
// 		cout << X << "," << Y << " 析构." << endl ; 
// 	}
// 	int  GetX () { return X ; }		int GetY () { return Y ; }
// private :   int  X , Y ;
// } ;

// //alt + f8 排版
// void f ( Location  p )   
// { 
// 	cout << "Funtion:" << p.GetX() << "," << p.GetY() << endl ; 
// }

// Location g()
// {
// 	Location A(1, 2);
// 	return A;
// }

// //对象初始化操作 和 =等号操作 是两个不同的概念
// //匿名对象的去和留，关键看，返回时如何接
// void mainobjplay()
// {  
// 	//若返回的匿名对象，赋值给另外一个同类型的对象，那么匿名对象会被析构
// 	//Location B;
// 	//B = g();  //用匿名对象 赋值 给B对象，然后匿名对象析构

// 	//若返回的匿名对象，来初始化另外一个同类型的对象，那么匿名对象会直接转成新的对象
// 	Location B = g();
// 	cout<<"传智扫地僧测试"<<endl;
// } 

// int main()
// {  
// 	mainobjplay();
// 	//system("pause");
// }
