##include<iostream>
#include<cstdio>
#include<cstdlib>

int main()
{
	int a[12];
	int save = 0, left;
	
	for( int i = 0; i < 12; i++)
		cin >> a[i];
		
	for(int i = 0; i<12; i++)
	{
		left = 300 - a[i];
		if( (i == 0) && (left >= 100))
		{
			save += (left/100) * 100;
			left = left%100;
		}
		
		if(i != 0)
		{
				
		}	
	}
	
	return 0;
}
