#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;



int main()
{
	int k = 0;
	cin >> k ;
	
	double sn = 0;
	int n = 0;
	
	while( sn <= k)
	{
		++n;
		sn += (double)1.0/n;
		
	}
	
	cout << n << endl;
	
//	cout << sn;
	return 0;
}



