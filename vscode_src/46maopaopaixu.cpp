#include <windows.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//ð������ʵ����������
/*��õ������㷨����������Ԫ�ؽ�������
1.�Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�����������
2.��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
3.�ظ����ϵĲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�
*/
int main()
{
    int arr[] = { 4,2,8,0,5,7,9,1,3 };

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1 ; i++)//���������� = Ԫ�ظ��� - 1
    {
        for(int j = 0 ; j < sizeof(arr)/sizeof(arr[0]) - i -1; j++)//ÿ�ֶԱȴ��� = Ԫ�ظ��� - �������� - 1��
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"ð�����������"<<endl;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; //ð������ִ��Ч�ʽϵ�


    sort(arr,arr + sizeof(arr)/sizeof(arr[0])-1); //sort����������ĩ��ַ��?
    cout<<"sort���������"<<endl;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    system("pause");
    return 0;
}