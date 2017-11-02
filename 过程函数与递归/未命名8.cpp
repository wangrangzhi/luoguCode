#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;
const int n=200000;
long prime[n]={0},num_prime=0;//num_pirme��¼��������

bool checkpalindromes(int n) {
	if(n <10)
		return true;
	int a[11];

	int i = 0;
	for(; i< 10; i++) {
		a[i] = n%10;
		n /=10;
		if(n == 0)
			break;
	}

	int total = i;
	for(int j = 0; j<= (total+1)/2; j++) {
		if(a[j] != a[i])
			return false;

		i--;
	}

	return true;
}

int main()
{
	int m, mm;
	cin>>mm >> m;
    int a[n]={1,1},i,j;
    for(i=mm;i<m;i++)
    {
        if(!a[i])
            prime[num_prime++]=i;
        for(j=0;j<num_prime && i*prime[j]<m;j++)
        {
            a[i*prime[j]]=1;//������Ϊ1��ͬʱ��prime[j]�Ǻ���i*prime[j]����С������
            if(!(i%prime[j]))//����һ��������������͸ú����ĳ˻�����һ������ĺ����ͱ���С��������˵õ�
                break;
        }
    }
	for(i=0;i<num_prime;i++)//���
	{
		if(checkpalindromes(prime[i]))
		{
				cout << prime[i];
			cout << "\n";
		}
		
	}
		
    return 0;

}

