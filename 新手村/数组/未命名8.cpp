#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int main()
{
	int L, M;
	
	cin >> L >> M;
	
	struct room
	{
		int left;
		int right;
	} a[101];
	
	for(int i = 0; i< M ;i++)
	{
		cin >> a[i].left >>a[i].right;
	}
	
	for(int i = 0; i< M ;i++)
	{
		cout << a[i].left << "--"<<a[i].right;
	}
	

	return 0;
 }



