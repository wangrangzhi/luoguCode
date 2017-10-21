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
	int b, a[15], n=0;
	while(cin >> b)
	{
		if(b == 0)
			break;
			
		a[n++] = b;	
	} 
	
	for(int i = n-1; i>=0; i--)
		cout << a[i] << " ";
	
	return 0;
 }



