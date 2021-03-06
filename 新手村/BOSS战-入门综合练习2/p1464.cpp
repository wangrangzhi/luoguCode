#include<bits/stdc++.h>
using namespace std;

int save[25][25][25];

bool endTheWhile(int a, int b, int c)
{
	if(a <= 0)
		return 1;
	if(b <= 0)
		return 1;
	if(c <= 0)
		return 1;
		
	return false;
}

bool biggerThanTwenty( int a, int b, int c)
{
	if(a > 20)
		return true;
	if(b > 20)
		return true;
	if(c > 20)
		return true;
		
	return false;
}

int w(int a, int b, int c)
{
	if(a <= 0)
		return 1;
	if(b <= 0)
		return 1;
	if(c <= 0)
		return 1;		
		
	if(biggerThanTwenty(a, b, c))
	{
		return w(20, 20, 20);
	}
	
	if((a<b) && (b<c))
		if(save[a][b][c] == -1)
			save[a][b][c] = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
	
	if(save[a][b][c] == -1)	
		save[a][b][c] = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
		
	return save[a][b][c];
}

int main() {

	memset(save, -1, sizeof(save));

	int a=1, b=1 ,c=1; 
	
	while(!((a == -1) && (b ==-1) && (c==-1)) )
	{
		cin >> a >> b >> c;
		
		int sum = w(a, b, c);
	
		if(!((a == -1) && (b ==-1) && (c==-1)))
		{
			cout << "w(" << a << ", " << b << ", " << c << ") = " << sum << "\n";
		}
		
	}
	
	

	return 0;
}




