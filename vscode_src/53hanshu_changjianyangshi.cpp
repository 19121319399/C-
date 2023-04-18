#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//函数的常见样式

//1、无参无返
void test01()
{
	cout << "无参无返调用" << endl;	
}
//2、有参无返
void test02(int a)
{
	cout << "有参无返调用" << endl;
	cout << "a = " << a << endl;
}
//3、无参有返
int test03()
{
	cout << "无参有返调用 " << endl;
	return 10;
}
//4、有参有返
int test04(int a, int b)
{
	cout << "有参有返调用 " << endl;
	int sum = a + b;
	return sum;
}
int main()
{
    test01(); 

    test02(5);

    int t3 = test03();
    cout << t3 << endl;

    int t4 = test04(2,3);
    cout << t4 << endl;

    system("pause");
    return 0;
}