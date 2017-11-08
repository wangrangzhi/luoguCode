#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int main() {

	string a = "asdfgh";
	a = a.substr(1, 5);
	
	cout << a << "\n";
	
	cout << ('8' == '8');
	
	string aChange = "080";
	while(aChange[0] == '0') {
		aChange = aChange.substr(1, aChange.size() - 1);
		
		if(aChange[0] != '0')
			break;
	}
	
	cout << aChange;
	
	cout << "\n" << 9/2;
	
	string b = "";
	
	cout << "\n===="<< b.size() << "++++";
	cout << 1/2;
	
	cout << (char)71 << "\n";
	
	for(int k = 65; k<90; k++)
	{
		if(k != 89)
			cout << (char)k << ;		
		
	//	cout << (char)k << " ";
	}

	return 0;
}




