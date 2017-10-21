#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int getTheNum(string str)
{
	
	int m = 1;
	for(int i = 0; i< str.size(); i++)
	{
		m *= (str[i] -'A' +1); 
	}
	return m%47;
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	int numa = getTheNum(a);
	int numb = getTheNum(b);
	
	if(numa == numb)
		cout << "GO";
	else
		cout << "STAY";
	

	

	return 0;
 }



