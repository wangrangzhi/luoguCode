#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int cifang(int num);

int res(int a, int x);

int main()
{
	int n, x;
	
	cin >> n >> x;
	
	int sametime = 0;
	
	for(int i = 1; i<= n; i++)
	{
		if(i <= 9)
		{
			if(i == x)
				sametime++;
		}
		
		if(i>9)
			sametime += res(i, x);
				
	} 
	
	cout << sametime;

	return 0;
 }
 
 int res(int a, int x)
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
		
		int sametimeInBig = 0;
		
		for(int k = 0; k<i; k++)
		{
		
			
			if(save[k] == x )
				sametimeInBig++;
		
		}
		
		if(a == x)
			sametimeInBig++;
		
		return sametimeInBig;	
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




