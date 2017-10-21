#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int firstPos = 0;

int checkTheWord(string word, string pass)
{
	//统计单词总数量 
	int numBlank = 1;
	for(int i = 0; i< pass.size(); i++)
	{
		if(pass[i] == ' ')
			numBlank++;
	}
	
	string passageWord[numBlank];
	int cursor = 0;
	int wordSize = 0;
	
	for(int i = 0; i <numBlank; i++)
	{
		for(int j = 0; j< pass.size(); j++)
		{
			if(pass[j] != ' ')
			{
				cursor++;
				wordSize++;
			}else
			{
				cursor++;
				j += wordSize;
				wordSize = 0;
				break;	
			}
		}
		
		
		
		cout << "\n cursor : "<< cursor << " wordSize:" << wordSize;
		passageWord[i] = pass.substr(cursor, wordSize);		
		
		 
	}
	
	//遍历单词数组
	cout << "\n单词数量为：" << numBlank<< "\n";
	for(int danci = 0; danci < numBlank; danci++)
		cout << "\n遍历单词数组-" << passageWord[danci]; 
	
	
	
	return -1;
}

int main()
{
	string word;
	string pass;
	getline(cin, word);
	getline(cin, pass);
	
	int result = checkTheWord(word, pass);
	
	if(result > 0)
		cout << result << " " << firstPos;
	else
		cout << "-1";
		
	return 0;
 }



