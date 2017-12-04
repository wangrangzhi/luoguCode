#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

char ch;
int a[1000000] = {0};
int main()
{
	int n, i = 0, j, m;

	cin >> ch;

	while(ch != 'E')
	{
		i++;
		a[i] = ch;
		cin >> ch;
	}

	m = n = 0;

	for(j = 1; j<=i; j++)
	{
		if(a[j] == 'W')
			n++;
		else if(a[j] == 'L')
			m++;

		if((m>= 11 || n>=11)  && (abs(m-n)>=2))
		{
			cout << n << ':' << m << endl;
			m=n=0;
		}
	}
	cout << n << ':' << m << endl;
	cout << endl;
	m=n=0;



	for(j = 1; j<=i; j++)
	{
		if(a[j] == 'W')
			n++;
		else if(a[j] == 'L')
			m++;

		if((m>= 21 || n>=21)  && (abs(m-n)>=2))
		{
			cout << n << ':' << m << endl;
			m=n=0;
		}
	}
	cout << n << ':' << m << endl;



	return 0;
}

