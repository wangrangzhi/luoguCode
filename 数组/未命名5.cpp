#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int main() {
	int a[10];
	for(int i = 0; i <10 ; i++)
		cin >> a[i];

	int H;
	cin >> H;
	int num = 0;
	for(int i = 0; i <10 ; i++) {
		if( (H+30) >= a[i] )
			num++;
	}

	cout << num;

	return 0;
}



