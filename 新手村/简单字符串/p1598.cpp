#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

void printTheResult(string passage[4]) {

	int alphabet[30];
	for(int i = 0; i <26; i++) {
		alphabet[i] = 0      ;
	}

	for(int i = 0; i <4; i++) {
		for(int j = 0; j<passage[i].size(); j++) {
		//	cout <<	passage[i][j] << "\n";
			int theLeft = passage[i][j] - 'A';
			if(theLeft>=0 && theLeft <= 25)
				alphabet[theLeft]++;

		}
	}

	int big = alphabet[0];
	for(int i = 0; i <26; i++) {

		if(big < alphabet[i]) {
			big = alphabet[i];
		}
		if(i == 25)
			break;

		
	}


//	cout << "\nbig=" << big << "\n";
//	for(int i = 0; i <26; i++) {
//	//	alphabet[i] = 0      ;
//			cout << alphabet[i];
//	}
//	cout << "\n";

	int des = big;
	for(int i = 0; i<big; i++) {
		for(int j = 0; j<26; j++) {
			if(alphabet[j] >= des)
				cout << "*";
			else
				cout << " ";
			if(j != 25)
				cout << " ";
		}
		des--;
		cout<<endl;
	}


	for(int k = 65; k<=90; k++) {
		if(k == 90) {
			cout << (char)k;

		} else {
			cout << (char)k << " ";

		}

	}


}

int main() {

	string passage[4];

	for(int i = 0; i <4; i++) {
		getline(cin, passage[i] );
	}

	printTheResult(passage);

	return 0;
}




