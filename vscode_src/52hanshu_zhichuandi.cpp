#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
//ֵ����ʱ������βη����仯��������Ӱ��ʵ��

void swap(int num1 ,int num2)
{
    cout <<"����ǰ��"<<endl;
    cout << "num1 = "  << num1 << endl;
	cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout <<"������"<<endl;
    cout << "num1 = "  << num1 << endl;
	cout << "num2 = " << num2 << endl;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    
    cout<<"main�е� a = "<< a <<endl;
    cout<<"main�е� b = "<< b <<endl;

    system("pause");
    return 0;
}