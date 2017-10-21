#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main() {

	int cnt = 0;
	int L, M;
	int vis[10000+10]; 
	memset(vis, 0, sizeof(vis));
	
	cin >> L >> M;
	
	for(int i = 0; i <= L; i++)
		vis[i] = 0;
		
	for(int i = 1; i<= M; i++)
	{
		int head, tail;
		cin >> head >> tail;
		for(int j = head; j<= tail; j++)
		{
			if(vis[j] == 0)
				vis[j] = 1;
		}
	}
	
	for(int i = 0; i<= L; i++)
		if(vis[i] == 0)
			cnt++; 

	cout << cnt;

	return 0;
}
