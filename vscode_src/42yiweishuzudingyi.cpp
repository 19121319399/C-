#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
// 数组就是一个存放了相同类型数据元素的集合
// 特点1：数组中的每个数据元素都是相同的数据类型
// 特点2：数组放在连续的内存空间中
int main()
{
    //三种定义方式
    //1.数据类型  数组名[ 数组长度 /元素个数]
    int score[5];
    int score1[5];
    score[0] = 100;
	score[1] = 99;
	score[2] = 85;
    //利用下标赋值和输出
    cout << score[0] << endl;
	cout << score[1] << endl;
	cout << score[2] << endl;
    cout << score1[6] << endl;//对于没有初始赋值的元素也可以输出，但输出的结果是什么，内存地址？
    cout << score1[7] << endl;
    cout<<"------------------------------------------------------------"<<endl;

    //2.数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};直接将数组初始化
    int score2[10] = { 100, 90,80,70,60,50,40,300 };//如果{}内不足10个数据，剩余数据用0补全
    for (int i = 0; i < 16; i++)
	{
		cout << score2[i] << endl;
	}
    cout<<"-------------------------------------------------------------"<<endl;
    
    //3.数据类型 数组名[] =  {值1，值2 ，值3 ...}; 不限制元素个数，可由编译器自行推测，鼠标放上去可显示
    int score3[] = { };
    for (int i = 0; i < 10; i++)
	{
		cout << score3[i] << endl;
	}
   
    system("pause");
    return 0;
}