#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//��ά����������
int main()
{
    int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
    cout << "��ά�����С�� " << sizeof(arr) << endl;
	cout << "��ά����һ��Ԫ����ռ�ڴ��С�� " << sizeof(arr[0]) << endl;
	cout << "��ά���鵥��Ԫ����ռ�ڴ��С�� " << sizeof(arr[0][0]) << endl;
    cout << "��ά����������"  << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    //��ַ
    cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;
    cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;//����Ԫ�ص��׵�ַ��Ҫ�� &
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;
    system("pause");
    return 0;
}