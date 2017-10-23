//关键测试数据，来源于论坛：请输入测试数据：0.01 100% 100/200 试试，结果对吗？ 

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

string start;

string checkTheNum(string a) {
	
	if(a.size() == 0)
		return a;
	
	if(a.size() == 1)
		return a;
	int numZero = 0;
	for(int i = 0; i< a.size(); i++) {
		if(a[i] == '0')
			numZero++;
	}
	if(numZero == a.size())
		return "0";   	//以上代码已经剔除了全部为0的情况

	//cout << a.size()<<"\n";
	
	//以下代码剔除前后的0 
	string aChange = a;
	while(aChange[0] == '0') {
		aChange = aChange.substr(1, aChange.size() - 1);
		if(aChange[0] != '0')
			break;
	}

	int k = aChange.size() -1;
	while(aChange[k] == '0') {
		aChange = aChange.substr(0, aChange.size() - 1);
		k = aChange.size() -1;
		if(aChange[k] != '0')
			break;
	}
	
	int size = aChange.size();
	if(size == 1)
		return aChange;
	for(int i = 0; i<= (aChange.size()/2-1); i++)
	{
		char save = aChange[i];
		aChange[i] = aChange[size - 1 - i];
		aChange[size - 1 - i] = save;
		
	} 
	

	return aChange;


}
string checkTheDouble(string aDouble, int i) {
	
	
//	cout << aDouble << " " << i;
	
	string front =  aDouble.substr(0,i);
	string back = aDouble.substr(i+1, aDouble.size() -i) ;
	
//	cout << front << "==" << back;
	
	string afront = checkTheNum(front);
	string aback = checkTheNum(back);
	
	return afront + "." + aback;
	
}
string checkTheFen(string aDouble, int i) {
	
	string front =  aDouble.substr(0,i);
	string back = aDouble.substr(i+1, aDouble.size() -i) ;
	
	string afront = checkTheNum(front);
	string aback = checkTheNum(back);
	
	return afront + "/" + aback;

}
string checkTheHun(string a) {
	
	string b = a.substr(0, a.size()-1);
	
	b = checkTheNum(b);
	
	return b + "%";

}

int main() {


	string result;
	getline(cin, start);
	
	string a = start;

	int num = 0;
	for(int i =0; i<a.size(); i++) {
		if(a[i] == '.') {
			result = checkTheDouble(a, i);
			num++;
		}

		if(a[i] == '/') {
			result = checkTheFen(a, i);
			num++;
		}

		if(a[i] == '%') {
			result = checkTheHun(a);
			num++;
		}
	}

	//cout << "\n"<< num;
	if(num == 0) {
		result = checkTheNum(a);
	}


	cout << result;

	return 0;
}



