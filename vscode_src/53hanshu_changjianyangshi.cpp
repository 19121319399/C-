#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//�����ĳ�����ʽ

//1���޲��޷�
void test01()
{
	cout << "�޲��޷�����" << endl;	
}
//2���в��޷�
void test02(int a)
{
	cout << "�в��޷�����" << endl;
	cout << "a = " << a << endl;
}
//3���޲��з�
int test03()
{
	cout << "�޲��з����� " << endl;
	return 10;
}
//4���в��з�
int test04(int a, int b)
{
	cout << "�в��з����� " << endl;
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