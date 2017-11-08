#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>

#include<algorithm>
using namespace std;

	struct room
	{
		int left;
		int right;
	} a[101];


 int comp(room a, room b);
 
 
int main()
{
	int L, M;
	
//	cin >> L >> M;
	



//手工输入并输出值。	
//	for(int i = 0; i< M ;i++)
//	{
//		cin >> a[i].left >>a[i].right;
//	}
//	
//	for(int i = 0; i< M ;i++)
//	{
//		cout << a[i].left << "--"<<a[i].right;
//	}
//	


	for(int i = 0; i<101; i++) 
	{
		a[i].left = 200-i;
		a[i].right = 300-i;
		
		
	}
	
		for(int i = 0; i< 101 ;i++)
	{
		cout << a[i].left << "--"<<a[i].right<<"\n";
		
		
	}
	
	sort(a+1, a+101, comp);
	
			for(int i = 0; i< 101 ;i++)
	{
		cout << a[i].left << "--"<<a[i].right<<"\n";
		
		
	}

	

	return 0;
 }
 
 int comp(room a, room b)
 {
 	return a.left < b.left;
 	
 }



