#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    double s,x,len=0;//�������õ������ݽԡ�R��ʵ������������������double
    cin>>s>>x;//����s,x
    for(int i=1;i<=10000;i++)//��ʼѭ����������̽����ʱ��ʱ��
    {
//len���������ۼ���
        if(len>=s-x)//��С����뵽̽�����ķ�Χʱ
        {
            if(s+x<len+7*pow(0.98,i-1))//��������һ����Ƿ�����ӳ�
            {
                cout<<"n"<<endl;
                i=10000;//ֹͣѭ��
            }
            else
            {
                cout<<"y"<<endl;
                i=10000;//ͬ��
            }
        }
        len+=7*pow(0.98,i-1);
    }
    return 0;
}
