#include <windows.h>
#include<iostream>
#include<string>
using namespace std;

//找出数组元素中的最大值
int main()
{
    int arr[]={300,350,500,400,250};
    int max = 0;//访问数组中的每个元素，如果这个元素比认定的最大值大，则更新最大值
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    cout<<"最大值为："<<max<<endl;

    int max1 = 0;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        max1 = (arr[i]>max1?arr[i]:max1);//用三目运算符
    }

    cout<<"最大值为："<<max1<<endl;

    system("pause");
    return 0;
}