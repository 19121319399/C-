#include <windows.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//冒泡排序实现升序序列
/*最常用的排序算法，对数组内元素进行排序
1.比较相邻的元素。如果第一个比第二个大，就交换他们两个
2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
3.重复以上的步骤，每次比较次数-1，直到不需要比较
*/
int main()
{
    int arr[] = { 4,2,8,0,5,7,9,1,3 };

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1 ; i++)//排序总轮数 = 元素个数 - 1
    {
        for(int j = 0 ; j < sizeof(arr)/sizeof(arr[0]) - i -1; j++)//每轮对比次数 = 元素个数 - 排序轮数 - 1；
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"冒泡排序输出："<<endl;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; //冒泡排序执行效率较低


    sort(arr,arr + sizeof(arr)/sizeof(arr[0])-1); //sort函数参数首末地址？?
    cout<<"sort函数输出："<<endl;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    system("pause");
    return 0;
}