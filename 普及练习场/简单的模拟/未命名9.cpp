#include<bits/stdc++.h>
using namespace std;

struct a
{
	int b;
	int c;
};

int main() {

	a A[10];
	memset(A, -1, sizeof(A));
	
	cout << sizeof(A)<< "++++++++++++++\n";
	
	for(int i = 0; i<10; i++)
	{
		cout << "B"<< A[i].b <<"C"<< A[i].c << "\n";
	}

	return 0;
}




