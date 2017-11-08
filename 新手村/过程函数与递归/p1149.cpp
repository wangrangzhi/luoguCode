#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;


int num[10]= {6,2,5,5,4,5,6,3,7,6};

int match(int n) {


	if(n < 10)
		return num[n];
	int sum = 0;
	do {
		int a = n%10;

		sum += num[a];
		n /= 10;
		
//		if(n > 10)
//			sum += num[n%10];
		
		if(n <10)
			sum += num[n];
		if(n == 10)
			sum += 8;

		
	} while( n >10);

	return sum;
}

int main() {

	int theTotal;
	cin >> theTotal;

	int theNumOfMarch = theTotal - 4;

	if(theTotal <= 10)
		cout << 0;
	else {

		int all = 0;
		for(int i = 0; i<=1000; i++)
			for(int j = 0; j<=1000; j++) {
				if( match(i) + match(j) + match(i+j) == theNumOfMarch )
				
				{
					all++;
					
				//	cout << "\n" << i << "+" << j << " = "<< i+j;
				}
					
			}



		cout << all;
	}


//	cout << "+++"<<  match(711);



	return 0;
}




