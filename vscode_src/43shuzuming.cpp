#include <windows.h>
#include<iostream>
#include<string>
using namespace std;

/*一维数组名称的用途：
1. 可以统计整个数组在内存中的长度
2. 可以获取数组在内存中的首地址*/
int main()
{
    //1、可以获取整个数组占用内存空间大小
    int arr[]={1,2,3,4,5};
    //sizeof可统计一个数据类型所占的内存空间大小
    cout << "整个数组所占内存空间为： " << sizeof(arr) << endl;//20
	cout << "每个元素所占内存空间为： " << sizeof(arr[0]) << endl;//4
	cout << "数组的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;//5

    //2、可以通过数组名获取到数组首地址
    cout << "数组首地址为： " << arr << endl;//直接打印数组名即内存地址，默认用16进制数字表示
    cout << "数组首地址为： " << (int)arr << endl;//将16进制强制转为10进制
	cout << "数组中第一个元素地址为： " << (int)&arr[0] << endl;//6422140
	cout << "数组中第二个元素地址为： " << (int)&arr[1] << endl;//6422144

    //arr = 100; 错误，数组名是常量，指向了一段首地址，因此不可以赋值

    system("pause");
    return 0;
}