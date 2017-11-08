#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int a[12];
	int save = 0, left = 0, monthLess = 0;
	
	for( int i = 0; i < 12; i++)
		cin >> a[i];
		
	for(int i = 0; i<12; i++)
	{
		
		if(i == 0) 
		{
			left = 300 - a[i];
			if(left < 0)
			{
				monthLess = 1;
				break;
			}
			if(left >= 0)
			{
				save += (left/100) * 100;
				left = left%100;
			}
		}
		
		if(i != 0)
		{
			left = 300 + left - a[i];
			if(left < 0)
			{
				monthLess = i+1;
				break;	
			}
			
			if(left >= 0)
			{
					save += (left/100) * 100;
					left = left%100;	
			}	
		}
		
//		cout << "month : " << i <<" ---left"<< left << "\n";	
//		cout << "save"<< save << "\n";	
	}
	
	if(monthLess != 0)
		cout << "-"<< monthLess;
	if(monthLess == 0) 
		cout << save*1.2 + left ;
		
//	cout << "m" << monthLess <<"save"<<save ;
	return 0;
}
