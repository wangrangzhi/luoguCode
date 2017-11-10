#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[4] = {3,5,1,8};
	sort(a, a+4);
	for(int i = 0; i<sizeof(a)/sizeof(int); i++)
	{
		cout << a[i];
	}

	return 0;
}




