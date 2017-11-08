#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int b;
	string a;
	
	cin >> b;
	
	cin >> a;
	
	b %= 26;
	
	for(int i = 0; i<a.size(); i++)
	{
		if(b == 0)
			break;
			
		if(a[i] + b > 122)
		{
			a[i] = a[i] + b - 26;
		}else
		{
			a[i] += b;
		}
	} 
	 
	cout << a;
	 
	
	return 0;
}




