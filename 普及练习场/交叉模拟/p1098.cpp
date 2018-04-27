#include<bits/stdc++.h>
using namespace std;



string insertTheString(	start, end,create, repatetime, ifresv) {
	
	string returnResult;
	
	if(create == 3)
	{
		for(int i =0; i< repatetime; i++)
			returnResult.append('*');
		return returnResult
	}


	return ss.str();
}

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
			if( (ori[i-1] == ori[i+1] )|| (ori[i-1] - ori[i+1] > 0))
			{
				result.append(ori[i]);
			} else if(ori[i-1] - ori[i+1] == -1)
			{
				//É¶Ò²²»Ð´ 
			} else
			{
				result.append(insertTheString(
					ori[i-1], ori[i+1],create, repatetime, ifresv
				));
			} 
		}
	}

	return 0;
}





