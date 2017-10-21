#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
using namespace std;

int cifang(int num);
int main()
{
	cout << cifang(1);
//	cout << cifang(2);
//	cout << cifang(3);
//	cout << cifang(4);
//	cout << cifang(5);
//	
	
	return 0;
 } 

int cifang(int num)
{
	int returnNum = 1;
	
	for(int i = 0; i< num; i++)
	{
		returnNum *= 10;
	}
	return returnNum;
}
