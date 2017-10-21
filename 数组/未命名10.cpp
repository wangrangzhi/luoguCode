#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

string num2str(double i)
{
        stringstream ss;
        ss<<i;
        return ss.str();
}

int str2num(string s)
 {   
        int num;
        stringstream ss(s);
        ss>>num;
        return num;
}

int main()
{
	string a; 
	getline(cin,a);
	
	cout << a;
	cout << a[0]<< a.size()<< "\n";
	
	cout << str2num(a); 
	
	cout <<"---" << a.substr(0, 2);
	
	for(int i = 0; i< a.size(); i++)
	{
		
	}
	return 0;
 }



