#include <windows.h>
#include<iostream>
#include<string>
using namespace std;

//�ҳ�����Ԫ���е����ֵ
int main()
{
    int arr[]={300,350,500,400,250};
    int max = 0;//���������е�ÿ��Ԫ�أ�������Ԫ�ر��϶������ֵ����������ֵ
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    cout<<"���ֵΪ��"<<max<<endl;

    int max1 = 0;
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        max1 = (arr[i]>max1?arr[i]:max1);//����Ŀ�����
    }

    cout<<"���ֵΪ��"<<max1<<endl;

    system("pause");
    return 0;
}