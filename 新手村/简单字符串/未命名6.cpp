#include<cstdio>
#define Max(x,y) ((x)>(y)?(x):(y))
using namespace std;
char s[72], mp[300][26];
int book[26], mx;
int main() {
    for(int i=1; i<=4; ++i){
        gets(s);
        for(int j=0; s[j]!='\0';++j)
            book[s[j]-'A']++;
    }
    for(int i=0; i<26; ++i) mx = Max(book[i],mx),mp[0][i] = 'A' + i;
    for(int i=0; i<26; ++i)
        for(int j=1; j<=book[i]; ++j)
            mp[j][i] = '*';
    for(int i=mx; i>=0; --i) 
        for(int j=0; j<26; ++j)
         printf("%c%c",mp[i][j],j==25?'\n':' ');
    //for(int i=0; i<26;++i) printf("%d ",book[i]);
    return 0;
}
