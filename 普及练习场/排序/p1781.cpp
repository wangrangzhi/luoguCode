#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	string a, b;

	int n;
	int x= 1;
	cin >> n;
	cin >> a;
	for(int i = 2; i<=n; i++)
	{
		cin >> b;
		if(a.length() < b.length())
		{
			a = b;
			x = i;
		}else if(a<b && a.length()==b.length())
		{
			a = b;
			x=i;
		}
	}

	cout <<  x << endl << a;

	return 0;
}
