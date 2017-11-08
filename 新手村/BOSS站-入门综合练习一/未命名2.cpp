#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int a[5] = {1,2,3,4,5};
	
	while(next_permutation(a, a+4))
	{
		for(int i = 0; i< 5; i++)
			cout << a[i];
			
		cout << "\n";
	}
	
	return 0;
}




