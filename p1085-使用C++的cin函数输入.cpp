#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;   //��Ϊ���ֵ��һ�Ķ�д�� 
int main ()
{
    int a,b,s,max=0,i,day=0;  //a,b�����ǽ�����¼��JJ��ÿ���Ͽ�ʱ�䣬s��Ϊsum���Ͽ�ʱ��֮�� 
    for (i=1;i<8;i++)   // iΪѭ��������day��JJһ������˵�һ�� 
      {
        cin>>a>>b;    //����a,b 
        s=a+b;   //����һ����Ͽ�ʱ�� 
        if ((s>max)&&(s>8)) max=s,day=i;  //�ڳ���8Сʱ�ұ�֮ǰ���춼���sʱ����s�������ֵ������¼��JJ������ 
      }
    cout<<day; //����day��ֵ��0���������JJһ�ܶ����ľ����0 
    return 0;             
}
