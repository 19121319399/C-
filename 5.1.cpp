// С�������
#include<iostream>
using namespace std;

int main()
{
    int num1 =0;
    int num2 =0;
    int num3 =0;

    //�û�����С�������
    cout<<"������С��A������: "<<endl;
    cin>>num1;
    cout<<"������С��B������: "<<endl;
    cin>>num2;
    cout<<"������С��C������: "<<endl;
    cin>>num3;

    cout<<"С��A������Ϊ: "<<num1<<endl;
    cout<<"С��B������Ϊ: "<<num2<<endl;
    cout<<"С��C������Ϊ: "<<num3<<endl;

    if(num1>num2)//A��B��
    {
       if(num1>num3)//A��C��
       {
        cout<<"С��A����"<<endl;
       }
       else if(num1<num3)
       {
        cout<<"С��C����"<<endl;
       }
       else
       {
        cout<<"С��A��C����"<<endl;
       }
    }
    else if(num1<num2)//B��A��
    {
        if(num2>num3)//B��C��
       {
        cout<<"С��B����"<<endl;
       }
       else if(num2<num3)
       {
        cout<<"С��C����"<<endl;
       } 
       else
       {
        cout<<"С��B��C����"<<endl;
       }
    }
    else 
    {
        if(num2>num3)//B��C��
       {
        cout<<"С��A��B����"<<endl;
       }
       else if(num2<num3)
       {
        cout<<"С��C����"<<endl;
       } 
       else
       {
        cout<<"С��A��B��Cһ����"<<endl;
       }
    }
    system("pause");
	return 0;
}