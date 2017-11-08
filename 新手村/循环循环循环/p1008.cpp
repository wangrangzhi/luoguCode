#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

bool norepate(int a, int b, int c);


int main()
{
	
	int a=0, b=0, c=0;
	
	for(int i = 100; i< 333; i++)
	{
		a=i;
		b=i*2;
		c=i*3;
		if(norepate(a, b,c))
			cout << a << " " << b << " " << c << endl;
		
//		cout << i<< "\n" ;
	}
	
	return 0;
}

bool norepate(int a, int b, int c)
{
	int n[9];
		
    n[0] = a/100;
    n[1]  = (a%100)/10;
    n[2]  = a%10;
   
    n[3]  = b/100;
    n[4]  = (b%100)/10;
    n[5]  = b%10;
   
    n[6]  = c/100;
    n[7]  = (c%100)/10;
    n[8]  = c%10;
   
   int sametime = 0;
   
   for(int i =0; i<9; i++)
   {
   	
   		if(n[i] == 0)
   			return false;
   		for(int j=0; j<9; j++)
   		{
   				if(n[i] == n[j])
   					sametime +=1;
		}
   }
   
   
   //	cout << "-----------"<<sametime<<"+++++";
   
   if(sametime >9 )
		return false;
	if(sametime == 9)
		return true;

}
