//�߼������
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
	//ע�⣺char �ַ���Ҳ�ɽ����߼����������
	//char�����ǿ����������Ϊchar��ASCII���ַ���������ж�Ӧ����ֵ��
	char a4 ='b';
	char a5 = 'a';
	//���е����� 
	// ! ��
	// ����0��Ϊ��
	cout<<"�ǣ�"<<endl;
    cout <<!a<<endl; // 0
	cout <<!!a<<endl; // 15
	cout<<!a3<<endl;
	cout<<!a4<<endl;
	// && ��
	cout<<"�룺"<<endl;
	bool ret = (a&&b); // 1
	cout <<(a&&b)<<endl;
	cout <<ret<<endl;
	cout <<(a&&b1)<<endl; //0 ��һ��Ϊ����Ϊ��
	cout<<(a1&&b1)<<endl; //0 ������Ϊ����Ϊ��
	cout<<"a4:"<<(a4&&a5)<<endl;
	//ͬ��Ϊ�棬����Ϊ��

	// || ��
	cout<<"��"<<endl;
	cout<<(a||b)<<endl; //1
	cout<<(a1||b)<<endl;//1
	cout<<(a1||b1)<<endl;//0
	//ͬ��Ϊ�٣�����Ϊ��
	system("pause");
	return 0;
}