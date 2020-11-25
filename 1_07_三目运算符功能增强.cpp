
#include <iostream>
using namespace std;


//在C语言中 表达式的结果 放在什么地方 寄存器
//1 
// 在C语言中, 表达式的返回值 是变量的值
// 在C++中, 表达式返回的是变量的本身 

//2 如何做到的
//让表达式返回一个内存空间 ..内存首地址 指针
//在C语言中 如何 实现 c++的效果

//3 本质 
//c++编译器 帮我们程序员完成了 取地址的工作 

int main()
{
	int a = 10;
	int b = 20;

	int var = 100;
	var = 101;

	//返回一个最小数 并且给最小数赋值成3
	//三目运算符是一个表达式 ，表达式不可能做左值
	(a < b ? a : b )= 30;

	//int z = (a < b ? a : b );

	printf("a = %d, b = %d\n", a, b);

	system("pause");

	return 0;
}
