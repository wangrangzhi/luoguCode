#include<iostream>
#include<cstdio>
#include<cstdlib>
#include <math.h>
#include<algorithm>
#include <sstream>
#include <string>
using namespace std;

int firstPos;

string word;
string pass;

//空格的数量
int numBlank;

int posOFTheBlank[10000];

bool equalWord(string a, string b) {

//    cout << "\n a and b" << a << "-" << b << ":";

    if(a.size() != b.size())
        return false;

    int room;
    for(int i = 0; i<a.size(); i++) {
        room = a[i]-b[i];
        
        int a1 = (room == 0);
        int a2 = (room==32);
        int a3 = (room==-32);
        if(a1 + a2+a3 ==0)
            return false;

    
    }


//    cout << "\ntrue";
    return true;
}

string foundTheWord(int i, int numBlank)

{
    string passageWord[numBlank];

    int posOFTheBlank[numBlank];
    int pos = 1;
    posOFTheBlank[0] = 0;
    for(int k = 0; k< pass.size(); k++) {
        if(pass[k] == ' ') {
            posOFTheBlank[pos++] = k;
        }

    }

    if(i == 0) {
        if(numBlank == 1)
            return pass;

        return pass.substr(0,  posOFTheBlank[i+1] - posOFTheBlank[i]);
    }


    if(i == numBlank-1)
        return pass.substr(posOFTheBlank[i]+1,  pass.size() - posOFTheBlank[i]);

    return pass.substr(posOFTheBlank[i]+1,
                       posOFTheBlank[i+1] - posOFTheBlank[i]-1);

}

int checkTheWord(string word, string pass, int numBlank) {

    string passageWord[numBlank];

//    int wordSize;

    int posOFTheBlank[numBlank];
    int pos = 1;
    posOFTheBlank[0] = 0;
    for(int i = 0; i< pass.size(); i++) {
        if(pass[i] == ' ') {
            posOFTheBlank[pos++] = i;
        }

    }


    //    遍历单词数组
//    cout << "\n单词数量为：" << numBlank<< "\n";

//    for(int i = 0; i < numBlank; i++)
//        cout << "\n遍历空格位置-" << posOFTheBlank[i]<< "++op\n";

    for(int i = 0; i< numBlank; i++) {
        passageWord[i] = foundTheWord(i, numBlank);

    }

//    for(int danci = 0; danci < numBlank; danci++)
//        cout << "\n遍历单词数组-" << passageWord[danci];


    int showTime = 0;
    for(int i = 0; i< numBlank; i++) {


        if(equalWord(passageWord[i], word))

        {
            showTime++;
            if(showTime == 1) {
                if(i==0)
                    firstPos = 0;
                else
                    firstPos = posOFTheBlank[i]+1;
            }
        }


    }







    if(showTime == 0) {
        return -1;
    }

    //    firstPos = posOFTheBlank
    return showTime;




}

int main() {

    getline(cin, word);
    getline(cin, pass);

    //统计单词总数量
    numBlank = 1;
    for(int j = 0; j< pass.size(); j++) {
        if(pass[j] == ' ')
            numBlank++;
    }





    int result = checkTheWord(word, pass, numBlank);

    if(result > 0)
        cout << ""<< result << " " << firstPos;
    else
        cout << "-1";

    return 0;
}

