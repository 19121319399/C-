#include <windows.h>
#include<iostream>
#include<string>
using namespace std;
//数组元素逆置
int main()
{
    int arr[] = {5,9,7,2,6,10};
    cout<<"元素逆置前："<<endl;
    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start = 0;//数组中第一个元素的下标
    int end = sizeof(arr)/sizeof(arr[0]) - 1;//数组中最后一个元素的下标
    while(start<end)
    {
        //实现元素互换
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //下标更新
        start++;
        end--;
    }
    cout<<"元素逆置后："<<endl;
    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    system("pause");
    return 0;
}