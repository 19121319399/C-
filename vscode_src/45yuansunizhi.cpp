#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//����Ԫ������
int main()
{
    int arr[] = {5,9,7,2,6,10};
    cout<<"Ԫ������ǰ��"<<endl;
    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start = 0;//�����е�һ��Ԫ�ص��±�
    int end = sizeof(arr)/sizeof(arr[0]) - 1;//���������һ��Ԫ�ص��±�
    while(start<end)
    {
        //ʵ��Ԫ�ػ���
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //�±����
        start++;
        end--;
    }
    cout<<"Ԫ�����ú�"<<endl;
    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}