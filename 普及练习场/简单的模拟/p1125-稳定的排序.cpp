#include<bits/stdc++.h>
using namespace std;

bool checkZhiShu(int a)
{
	if(a<=1)
		return false;
		
	if(a == 2)
		return true;
	if(a%2 == 0)
		return false;
		
	for(int i = 2; i<= sqrt(a); i++)
	{
		if((a%i) == 0)
			return false;
	}
	
	return true;
}


struct showCheck
{
	int charNum;
	int showTime;
};

bool moreCheck(const showCheck &lhs, const showCheck &rhs) {
	return lhs.showTime > rhs.showTime;//½µÐò 
}

int main() {

	string a;
	cin >> a;
	//cout << a;
	
	showCheck save[26];
	
	for(int i = 0; i<26; i++)
	{
		save[i].charNum = i;
		save[i].showTime = 0;
	}
	
	for(int i = 0; i<a.size(); i++)
	{
		for(int j = 0; j<26; j++)
		{
			if((a[i] -'a') == save[j].charNum)
			{
				save[j].showTime++;
			}
		}
	}
	




	stable_sort(save, save+ sizeof(save)/sizeof(showCheck), moreCheck);
	
//		for(int i = 0; i<26; i++)
//	{
//		cout << save[i].charNum << save[i].showTime << "-";
//	}
	
	int MAX = save[0].showTime;
	
	int MIN;
	
		for(int i = 0; i<26; i++)
	{
		if(save[i].showTime == 0)
		{
			MIN = save[i-1].showTime;
			break;
		}
	}
	
	int number = MAX- MIN;
	
	if(checkZhiShu(number))
	{
		cout << "Lucky Word\n" << number;
	}else
	{
		cout << "No Answer\n" << 0;
	}
	
	


	return 0;
}




