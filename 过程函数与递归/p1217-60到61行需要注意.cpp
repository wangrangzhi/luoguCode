#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

bool checkpalindromes(int n) {
	if(n <10)
		return true;
	int a[11];

	int i = 0;
	for(; i< 10; i++) {
		a[i] = n%10;
		n /=10;
		if(n == 0)
			break;
	}

	int total = i;
	for(int j = 0; j<= (total+1)/2; j++) {
		if(a[j] != a[i])
			return false;

		i--;
	}

	return true;
}

bool checkprime(int n)
{
	int a = sqrt(n);
	
	for(int i = 2; i<=a; i++)
	{
	
		if(n%i == 0)
			return false;
	}
	
	return true;
}


int main() {

	int a, b;

	cin >> a >> b;


	for(int i =a; i<= b; i++) {
		
		if(a%2==0 && a%11 == 0)
		 continue;
		if (b>9989899)
 			b=9989899;
		if(checkpalindromes(i))
			if(checkprime(i))
			cout << i<< "\n";
	}

	return 0;
}




