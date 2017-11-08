#include<bits/stdc++.h>
using namespace std;

int main() {

	int N;
	cin >> N;
	
	if(N == 1)
	{
		cout << "1/1";
		return 0;
	}
	
	
	int sum = 0;
	int i;
	for(i=1; sum<N; i++)
	{
		sum += i;
	}
	
	int left;
	if((i-1)%2 == 0)
	{
		left = sum - (i-1);
		int left1 = N-left;
		
		cout << left1 << "/" << i-1-left1+1;
	}
	else
	{
		left = N - (sum -i+1);
		cout << i-1-(left-1) << "/" << left;
	}
	

		

	return 0;
}




