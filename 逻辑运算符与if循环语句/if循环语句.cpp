// ifѭ�����
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "���������ķ�����" << endl;
	cin >> score;
	cout << "���ķ���Ϊ��" << score << endl;

	//����if���
	// if (score > 600)
	// {
	// 	cout << "������һ����ѧ" << endl;
	// }

	//����if���
	/*if (score > 600)
	{
		cout << "������һ����ѧ" << endl;
	}
	else
	{
		cout << "��δ����һ����ѧ\n";
	}
	*/
	//������if���
	/*
	if (score > 600)
	{
		cout << "�����ϵ�Ϊһ����ѧ" << endl;
	}
	else if(score >500) //�ڶ����ж�����
	{
		cout << "�����ϵ�Ϊ������ѧ\n";
	
	}
	else if (score > 400)
	{
		cout << "�����ϵ�Ϊ������ѧ\n";
	}
	else
	{
		cout << "��δ���ϴ�ѧ" << endl;
	}
	*/

	//������if���

	if (score > 600)
	{
		cout << "�����ϵ�Ϊһ����ѧ" << endl;
		if (score > 700)
		{
			cout << "�㿼�ϵı���\n";
		}
		else if (score > 800)
		{
			cout << "�㿼���廪��ѧ\n";
		}
		else {
			cout << "�㿼���˴�\n";
		}
	}
	else if (score > 500) //�ڶ����ж�����
	{
		cout << "�����ϵ�Ϊ������ѧ\n";

	}
	else if (score > 400)
	{
		cout << "�����ϵ�Ϊ������ѧ\n";
	}
	else
	{
		cout << "��δ���ϴ�ѧ" << endl;
	}



	system("pause");
	return 0;

}