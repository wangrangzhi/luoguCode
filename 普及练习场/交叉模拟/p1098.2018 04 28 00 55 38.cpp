#include<bits/stdc++.h>
using namespace std;

int main() {

	int create, repatetime, ifresv;
	cin >> create >> repatetime >> ifresv;
	
	
	string ori;
	cin >> ori;
	cout << ori[0] << "---" << ori.length() << ori;
	
	string result;
	
	for(int i = 0; i < ori.legnth() ; i++)
	{
		if(ori[i] != '-')
		{
			result.append(ori[i]);
		}else
		{
			
		}
	}

	return 0;
}





