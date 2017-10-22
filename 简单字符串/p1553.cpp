#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

string a;

string checkTheNum(string a) {
	if(a.size() == 1)
		return a;
	int numZero = 0;
	for(int i = 0; i< a.size(); i++) {
		if(a[i] == '0')
			numZero++;
	}
	if(numZero == a.size()-1)
		return "0";
		
	
	//以上代码已经剔除了0的情况
	
	
	
	 
}
string checkTheDouble(string a) {

}
string checkTheFen(string a) {

}
string checkTheHun(string a) {

}

int main() {


	string result;
	getline(cin, a);

	int num = 0;
	for(int i =0; i<a.size(); i++) {
		if(a[i] == '.') {
			result = checkTheDouble(a);
			num++;
		}

		if(a[i] == '/') {
			result = checkTheFen(a);
			num++;
		}

		if(a[i] == '%') {
			result = checkTheHun(a);
			num++;
		}
	}
	if(num == 0)
	{
		result = checkTheNum(a);
	} 
		

	cout << result;

	return 0;
}



