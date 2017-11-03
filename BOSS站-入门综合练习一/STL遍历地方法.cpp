#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int main() {

	char a[5] = {'a','b','c','d','e'};
	

	do{
		for(int i = 0; i< 5; i++)
			cout << a[i];
			
		cout << "\n";
	}	while(next_permutation(a, a+4));
	
	return 0;
}




