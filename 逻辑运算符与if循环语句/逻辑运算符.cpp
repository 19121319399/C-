//逻辑运算符
#include<iostream>
using namespace std;
#include<string>
int main()
{
	int a=10;
	int b=10;
	int a1= 0;
	int b1= 0;
	float a3=3.14;
	//注意：char 字符型也可进行逻辑运算符操作
	//char类型是可以运算的因为char在ASCII等字符编码表中有对应的数值。
	char a4 ='b';
	char a5 = 'a';
	//所有的类型 
	// ! 非
	// 除了0都为真
	cout<<"非："<<endl;
    cout <<!a<<endl; // 0
	cout <<!!a<<endl; // 15
	cout<<!a3<<endl;
	cout<<!a4<<endl;
	// && 与
	cout<<"与："<<endl;
	bool ret = (a&&b); // 1
	cout <<(a&&b)<<endl;
	cout <<ret<<endl;
	cout <<(a&&b1)<<endl; //0 有一个为假则为假
	cout<<(a1&&b1)<<endl; //0 两个都为假则为假
	cout<<"a4:"<<(a4&&a5)<<endl;
	//同真为真，其余为假

	// || 或
	cout<<"或："<<endl;
	cout<<(a||b)<<endl; //1
	cout<<(a1||b)<<endl;//1
	cout<<(a1||b1)<<endl;//0
	//同假为假，其余为真
	system("pause");
	return 0;
}