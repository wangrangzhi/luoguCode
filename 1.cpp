#include<cstdio>    
#include<cstring>
#include<iostream>
using namespace std;    
int main()    
{
    string a,b;
    int n;
    int x=1;
    cin>>n;
    cin>>a;
    for(int i=2;i<=n;i++)
    {
        cin>>b;
        if(a.length()<b.length())//b的位数大，则b大
        {
            a=b;//基准数更新
            x=i;//记录编号
            /*cout<<"1error!"<<endl;调试用，可删除*/
        }
        else if(a<b&&a.length()==b.length())//string内有定义大于运算符，其定义为两个字符串自左向右逐个字符相比（按ASCII值大小相比较），直到出现不同的字符或遇'\0'为止。但是用在这里一定要先保证长度相等（同strcmp函数）
        {
            a=b;//基准数更新
            x=i;//记录编号
            /*cout<<"2error!"<<endl;*/
        }
    }
     cout<<x<<endl<<a;
}