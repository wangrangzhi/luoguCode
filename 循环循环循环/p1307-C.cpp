#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int cifang(int num);

int res(int a);
int main()
{
	
	
	int a;
	cin >> a;
	
	if(a == 0)
		cout << 0 ;
	if(a > 0)
	{
		cout << res(a);		
	}
	
	if(a < 0)
	{
		int b = 0 - a;
		cout << "-" << res(b);
	
	}
	
	
	return 0;
}

int res(int a)
{
	int save[10];
		int i = 0;
		while(a/10 > 0)
		{
			save[i] = a%10;
			a /= 10;
			
			
		//	cout << "save["<<i<<"] : " << save[i] << "\n";
			
			i++;
		}
		
	//	cout << "i:" << i << "\n";
		
		int change = 0;
		
		int cifangNum = i;
		
		for(int k = 0; k<i; k++)
		{
			change += save[k] * cifang(cifangNum);
			cifangNum--;
		
		}
		
		return change +a;	
}



int cifang(int num)
{
	int returnNum = 1;
	
	for(int i = 0; i< num; i++)
	{
		returnNum *= 10;
	}
	
//	cout << "\ncifang fun : " << returnNum << "\n" ; 
	
	return returnNum;	
}



