#include<iostream>
using namespace std;
int nu[10]= {6,2,5,5,4,5,6,3,7,6}; //��������������¼ÿ����������Ļ����
int matches(int num) {   //һ����������һ��������ٸ������ĺ���
	int i,k=0;       //K�ǻ���������
	for(i=num; i!=0; i/=10)k+=nu[i%10];  //���������ÿһλ�Ļ������������������
	if(num==0)k+=nu[0];      //��һ���������������Ϊ0��ʱ����ִ�������������Լ�һ��
	return k;
}
int main() {
	int i,j,all=0,n;    //all�Ƿ�����������ʽ����
	cin>>n;
	for(i=0; i<=1000; i++)
		for(j=0; j<=1000; j++) {
			if(matches(i)+matches(j)+matches(i+j)+4==n)
			{
				all++; 
		
			cout << "\n" << i << "+" << j << " = "<< i+j;
		
			}
		
		}   //��������ʽ�������Ļ��������պ��������л����Ͱ��������ϼ�
	cout<<all;
	return 0;
}
