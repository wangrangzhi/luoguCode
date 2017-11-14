#include<bits/stdc++.h>
using namespace std;

int main() {

	int N;
	
	cin >> N;
	
	int a[N];
	int sum = 0;
	
	
	for(int i = 0; i<N; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	
	int avg = sum/N;
	int cnt = 0;
	
//	cout  << avg << "\n";
	
	for(int i = 0; i< N; i++)
	{
		if(a[i] != avg)
		{
			cnt ++;
			
			int move = a[i] - avg;
			
			a[i+1] += move; 
		
		}
	
	}
	
	cout << cnt;

	return 0;
}




