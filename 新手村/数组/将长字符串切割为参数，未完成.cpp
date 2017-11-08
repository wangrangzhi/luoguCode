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

string foundTheStringInTheLineEndWithBlankOrNot(string theLineString, int numCount) {
	
	int blankNum = 0;
	
	for(int i = 0; i< theLineString.size(); i++) {
		if(theLineString[i] == ' ')
		{
			blankNum++;
			if(blankNum == numCount)
			{
						int j = 0;
						while( theLineString[i] != ' ' )
						{
							i++;		
						}
	
						cout << "\ntheLineString.substr(start, i);" << theLineString.substr(numCount, i);;
					
						return theLineString.substr(numCount, i);
			}
		}
			
	}
	
	
	
	

}

int main() {
	string a;
	getline(cin,a);

//	cout << a;
//	cout << a[0]<< a.size()<< "\n";

//	cout << str2num(a);

//	cout <<"---" << a.substr(0, 2);
	
	int countNum = 1;
	for(int i = 0; i< a.size(); i++) {
		if(a[i] == ' ')
			countNum++;
	}
	
	cout << "countNum: " << countNum << "end\n";

	string str[countNum];
	
	for(int i = 0; i< countNum; i++) {
		str[i] = foundTheStringInTheLineEndWithBlankOrNot(a, i);		
	}
	
	for(int i = 0; i< countNum; i++)
		cout << "\n++++"<< str[i];
	
	return 0;
}



