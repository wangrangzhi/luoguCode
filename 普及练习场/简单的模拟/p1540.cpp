#include<bits/stdc++.h>
using namespace std;

bool checkTheSaveisFull(int a[])
{
	for(int i=0; i<sizeof(a)/sizeof(int); i++)
	{
		if(a[i] == -1)
			return false;
	}
	
	return true;
}



int main() {

	int M, N;
	cin >> M >> N;
	
	int passage[N];
	
	for(int i = 0; i<N; i++)
	{
		cin >> passage[i];
	}
	
	int save[M];
	memset(save, -1, sizeof(save));
	
	int checkD = 0;
	int startTheSave = 0;
	bool ifExist = false;
	bool saveTheWordFull = false;
	
	for(int i = 0; i<N; i++)
	{
		for(int j = 0; j<M; j++)
		{
			if(save[j] == passage[i])
			{
				ifExist = true;
			}
		}
		
		
		if(ifExist)
		{
			
		}else
		{
			checkD++;
			
			for(int j = 0; j<M; j++)
			{
				if(save[j] == -1)
				{
					save[j] = passage[i];
					
					
				}
			}
		
		}
		
		
		
		
		
			
			if(checkTheSaveisFull(save))
			{
				if(ifExist)
				{
					
				}else
				{
						
					if(startTheSave == M)
					{
						startTheSave = 0;
						save[startTheSave] = passage[i];
						startTheSave++;
						
						
						
					}else
					{
						save[startTheSave] = passage[i];
						startTheSave++;
					}
				}
				
			
				
			}
		
		
		
		
		
		ifExist = false;
		
	}
	
	cout << checkD;
	
	for(int k = 0; k<M; k++)
//		cout << "\n" << save[k] << startTheSave;

	return 0;
}




