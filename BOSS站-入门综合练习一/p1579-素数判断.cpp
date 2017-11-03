#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

bool isPrime(int n) {
	bool flag = true;

	if(n== 2)
		return true;

	if(n == 11)
		return true;

	if((n%2)==0)
		return false;

	if((n%11)==0)
		return false;

	for(int i = 2; i<= sqrt(n); i++) {
		if((n%i) == 0)
			return false;
	}

	return flag;
}

int main() {

	int n;
	cin >> n;

	for(int i = 2; i<n-4; i++)
	{
		if(isPrime(i))
		{
			for(int j = i; i+j<=n-2;j++)
			{
				if(isPrime(j))
				{
					if(isPrime(n -i-j))
					{
						cout << i<< " " << j << " " << n-i-j;
						return 0;
					}
				}
			}
		}
	}

//	cout << isPrime(n) ;

	return 0;
}




