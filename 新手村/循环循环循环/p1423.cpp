#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int main() {
	double dis;

	cin >> dis;

	double a = 2;
	
	double suma = 2;

	if(dis<= a )
	{
		cout << 1;
	}
	else 
	{
		int i = 1;
		while(suma < dis) {
			a *= 0.98;
			suma += a;
			
			i++;
		}
		cout << i;
	}




	return 0;
}



