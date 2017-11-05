//第二组测试数据，3 4.专门针对start为0时进行的判断。 

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int main() {

	int s, x;
	cin >> s >> x;

	double first = 7;

	double start = s-x;
	double end = s+x;

	int i = 0;
	double distance = 0;
	do {
		distance +=first;
		i++;
		first *= 0.98;
	} while(distance <= start );

	if(start < 0) {
		start =0;
		if(end <=7)
			cout << 'y';
	} else {
		if((distance += first*0.98)  > end)
			cout <<'n';
		else
			cout << 'y';
	}










	return 0;
}




