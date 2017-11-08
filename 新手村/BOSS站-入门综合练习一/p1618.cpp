#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

bool useAllTHeNumber(int a, int b, int c) {
	int save[9];

	save[0] = a/100;
	save[1] = (a/10)%10;
	save[2] = a%10;
	save[3] = b/100;
	save[4] = (b/10)%10;
	save[5] = b%10;
	save[6] = c/100;
	save[7] = (c/10)%10;
	save[8] = c%10;

	int add = 1, cheng = 1;
	for(int i=0; i<9; i++) {
		add += save[i];
		cheng *= save[i];
	}

	if(add==46 && cheng==362880)
		return true;

	return false;


}


bool rightNumber(int A, int B, int C, int i, int j, int k) {
	int total = A*B*C;
	int BA = total/C;
	int CA = total/B;

	if( ( i*BA ) == j && (i*CA) == k )
		return true;

	return false;
}
int main() {

	int A,B,C;

	cin >> A >> B >> C;
	
	if(B %A == 0 && C%A == 0)
	{
		B = B/A;
		C = C/A;
		A = 1;
	}


	int total = A*B*C;
	int BA = total/C;
	int CA = total/B;


	int flag = 0;
	
	if(A > 100)
	{
		if(useAllTHeNumber(A, B, C))
		{
			cout << A << " " << B << " " << C ;
		}else
		{
			cout << "No!!!";
		}
		
	}else
	{
		for(int i = 1 ; i<= 987 ; i++) {
		for(int j = (i*BA) ; j<= i*CA ; j++) {
			for(int k = (i*CA) ; k<= 987 ; k++) {
				if(useAllTHeNumber(i,j,k)) {
					if(rightNumber(A,B,C,i,j,k))
					{
						cout << i << " " << j << " " << k << "\n";
						flag = 1;
					}
						
				}
			}
		}
	}
	
	if(flag == 0)
		cout << "No!!!";
	}
	
	


	return 0;
}




