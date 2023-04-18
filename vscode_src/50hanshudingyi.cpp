#include <windows.h>
#include<iostream>
#include<string>
using namespace std;

int add(int num1,int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int a = add(3,4);
    cout<<a<<endl;

    system("pause");
    return 0;
}