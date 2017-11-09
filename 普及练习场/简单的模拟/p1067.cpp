#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	
	int xishu[n+1];
	
	for(int i = 0; i<=n; i++)
		cin >> xishu[i];
		
	for(int i = 0 ; i<=n ;i++)
	{
		if(xishu[i] == 0)
			continue;
			
			
		if(i == n)
		{
			if(xishu[i] > 0)
			{
				cout << "+" << xishu[i];
			}else
			{
				cout << xishu[i];
			}
			continue;
		}
		
		if(i == n-1)
		{
			if(xishu[i] > 0)
			{
				if(xishu[i] != 1)
				{
				cout << "+" << xishu[i] << "x";
					
				}else
				{
					
				cout << "+x";
				}
			}else
			{
				if(xishu[i] != -1)
				{
					
				cout << xishu[i] << "x";
				}else
				{
					cout << "-x";
				}
			}
			continue;
		}
		
		if(i == 0)
		{
			if(xishu[i] > 0)
			{
					if(xishu[i] != 1)
					{
						cout << xishu[i] <<"x^" << n-i;
						
					}else
					{
						cout << "x^" << n-i;
					}
			}else
			{
				
					if(xishu[i] != -1)
					{
						cout << xishu[i] <<"x^" << n-i;
						
					}else
					{
						cout << "-x^" << n-i;
					}
			}
		}
		
		if(i>0 && xishu[i]>0)
		{
			if(xishu[i] != 1)
			{
				
			cout << "+" <<  xishu[i] <<"x^" << n-i;
			}else
			{
				cout << "+"  <<"x^" << n-i;
			}
		}
		
		if(i>0 && xishu[i]<0)
		{
				if(xishu[i] != -1)
				{
					
					cout << xishu[i] <<"x^" << n-i;
				}else
				{
					cout << "-x^" << n-i;
				}
		}
		
	}

	return 0;
}




