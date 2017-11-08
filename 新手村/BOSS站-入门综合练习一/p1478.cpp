#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int n ,s, a, b;
	cin >> n >> s;
	cin >> a >> b;
	
	int xi, yi;
	int c = a+b;
	int numApple = 0;
	
//	cout << n << s << a << b ;

	struct apple
	{
		int H;
		int tili;
	};

	struct apple count[n];
	
	for(int i = 0; i<n; i++)
	{
		cin >> count[i].H >> count[i].tili;
	}
	
	int swap;
	for(int i = 0; i<n; i++)
	{
		for(int j  =i; j<n ;j++)
		{
			if(count[i].tili > count[j].tili)
			{
				swap = count[i].tili;
				count[i].tili = count[j].tili;
				count[j].tili = swap;
				
				swap = count[i].H;
				count[i].H = count[j].H;
				count[j].H = swap;
			}
		}
	}
	
	
//	for(int i = 0; i<n; i++)
//	{
//		cout <<  count[i].H  <<  count[i].tili << "\n";
//	}
	
	
	
	
	for(int i = 0; i<n; i++)
	{
		if(c < count[i].H)
		{
			continue;	
		}else
		{
			if((s - count[i].tili) >= 0)
			{
				s -= count[i].tili;
				numApple++;
			}
		}
	}	
	
	 
cout << numApple;
	return 0;
}




