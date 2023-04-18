// if循环语句
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请输入您的分数：" << endl;
	cin >> score;
	cout << "您的分数为：" << score << endl;

	//单行if语句
	// if (score > 600)
	// {
	// 	cout << "您好上一本大学" << endl;
	// }

	//多行if语句
	/*if (score > 600)
	{
		cout << "您好上一本大学" << endl;
	}
	else
	{
		cout << "您未考上一本大学\n";
	}
	*/
	//多条件if语句
	/*
	if (score > 600)
	{
		cout << "您考上的为一本大学" << endl;
	}
	else if(score >500) //第二个判断条件
	{
		cout << "您考上的为二本大学\n";
	
	}
	else if (score > 400)
	{
		cout << "您考上的为三本大学\n";
	}
	else
	{
		cout << "您未考上大学" << endl;
	}
	*/

	//多条件if语句

	if (score > 600)
	{
		cout << "您考上的为一本大学" << endl;
		if (score > 700)
		{
			cout << "你考上的北大\n";
		}
		else if (score > 800)
		{
			cout << "你考上清华大学\n";
		}
		else {
			cout << "你考上人大\n";
		}
	}
	else if (score > 500) //第二个判断条件
	{
		cout << "您考上的为二本大学\n";

	}
	else if (score > 400)
	{
		cout << "您考上的为三本大学\n";
	}
	else
	{
		cout << "您未考上大学" << endl;
	}



	system("pause");
	return 0;

}