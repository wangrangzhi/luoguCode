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
	int numFish;
	cin >> numFish;
	
	int a[numFish];
	
	for(int i = 0; i< numFish; i++)
		cin >> a[i];
	
	int b[numFish];
	
	for(int k = 0; k<numFish; k++)
		b[k] = 0;
	
	
	for(int i = numFish-1; i>=0; i--)
	{
		for(int j = i-1; j >=0  ; j--)
		{
		
				if(a[i] > a[j])
					b[i]++; 
			
		}
	}
	
	for(int i = 0; i<numFish; i++)
		cout << b[i] << " ";
	
	return 0;
 }



