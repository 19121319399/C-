//函数分文件编写一般有4个步骤
//1. 创建后缀名为.h的头文件
//2. 创建后缀名为.cpp的源文件
//3. 在头文件中写函数的声明
////4. 在源文件中写函数的定义
//
#include"swap.h"	//hpp文件	namespace初始化
//函数分文件编写
//实现两个数字交换的函数声明
//void swap(int a, int b);
//
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//int main() {
//	//int a, b;
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	cout << *p << endl;
//	int* p1 = (int *)0x1100;
//	p1 = &a;
//	cout << *p1 << endl;
//	cout << &p1 << endl;
//	/*cout << "输入交换的数字，中间用空格隔开：" << endl;
//	cin >> a;
//	cin >> b;
//	cout << "a = " << a << endl;
//	cout << "b = " << b <<endl;
//	cout << "交换后" << endl;
//	b,a = swap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;*/
//	system("pause");
//	return 0;
//
//}