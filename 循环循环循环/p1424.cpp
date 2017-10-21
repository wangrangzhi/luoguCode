#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int main()
{
	int start, day;
	
	cin >> start >> day;
	
	int weekTotal = 250*5 * (day/7);
	
	int left = day%7;
	
	if(start>5)
		if(left > 2)
			weekTotal += 250*(left-( 7-start+1));
			
	if(start <=5)
	{
		if(left != 0)
		{
			if( (start +left) =< 6	)
			{
				if(start > left)
					weekTotal += left*250;
				
				
			}	
			
		}
		
			
	}
		
	cout << weekTotal;
	
	return 0;
 }



