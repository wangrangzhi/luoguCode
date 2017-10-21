#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

//Êý×Ö×ª×Ö·û´®
string num2str(double i) {
	stringstream ss;
	ss<<i;
	return ss.str();
}
//×Ö·û´®×ªÊý×Ö
int str2num(string s) {
	int num;
	stringstream ss(s);
	ss>>num;
	return num;
}

int main()
{
	string a;
	getline(cin, a);
	
	int sum = 0;
	sum = (a[0] - 48) * 1 
		+  (a[2] - 48) * 2 
		+  (a[3] - 48) * 3 
		+  (a[4] - 48) * 4	 
		+  (a[6] - 48) * 5 
		+  (a[7] - 48) * 6 
		+  (a[8] - 48) * 7 
		+  (a[9] - 48) * 8 
		+  (a[10] - 48) * 9;
		
		
	int left = sum%11;	
	
	if(left == 10)
	{
		if(a[12] == 'X')
			cout << "Right";
			
		if(a[12] != 'X')
		{
			a[12] = 'X';
			cout << a;
		}
	} else if(left == (a[12] - 48))
	{
		cout << "Right";
	}else if(sum%11 != (a[12] - 48))
	{
		a[12] = sum%11 + 48;
		cout << a;
	}
	
	 

	return 0;
 }



