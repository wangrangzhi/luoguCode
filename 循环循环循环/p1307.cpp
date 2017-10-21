#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int cifang(int num);
int main()
{
	int a;
	cin >> a;
	
	if(a == 0)
		cout << 0 ;
	if(a > 0)
	{
		int save[10];
		int i = 0;
		while(a/10 > 0)
		{
			save[i] = a%10;
			a /= 10;
			
			
			cout << "save["<<i<<"] : " << save[i] << "\n";
			
			i++;
		}
		
			int change = 0;
		
		for(int k = 0; k<i; k++)
		{
			change += save[k] * cifang(i);
		
		}
		
		cout << change +a;	
		
	
	}
	
	
	return 0;
}

int cifang(int num)
{
	int returnNum = 1;
	
	for(int i = 0; i< num; i++)
	{
		returnNum *= 10;
	}
	return returnNum;
}



