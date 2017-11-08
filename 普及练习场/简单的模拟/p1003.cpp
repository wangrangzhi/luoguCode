#include<bits/stdc++.h>
using namespace std;

struct carpet
{
	int xPoint;
	int yPoint;
	int xLength;
	int yLength;
};

bool checkIfCover(int x, int y, struct carpet C)
{
//	cout << "++++++"<< x << C.xLength;
	if(x >= (C.xPoint)  && x <= (C.xPoint + C.xLength))
		if(y >= (C.yPoint)  && y <= (C.yPoint + C.yLength))
			return true;
			
	return false;
	
}

int main() {

	int n;
	cin >> n;
	
	struct carpet theAllCarpet[n];
	
	for(int i=0; i< n; i++)
	{
		cin >> theAllCarpet[i].xPoint >> theAllCarpet[i].yPoint 
			>> theAllCarpet[i].xLength >> theAllCarpet[i].yLength;	
	}	
	
	int x, y;
	
	cin >> x >> y;
	
	int theCarpetNum = -1;
	
//	cout << "\n" << theAllCarpet[0].xLength;
	
	for(int i=n-1; i>=0; i--)
	{
		if(checkIfCover(x, y, theAllCarpet[i]))
		{
			theCarpetNum = i;
			break;
		}
	}
	cout << theCarpetNum+1;

	return 0;
}




