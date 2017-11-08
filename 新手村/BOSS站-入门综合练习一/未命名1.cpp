#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>
using namespace std;
#define ll long long
inline int read(){
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
//int gcd(int a,int b){return !b?a:gcd(b,a%b);}
inline bool check(int a,int b,int c)
{
    if(a>999||b>999||c>999) return 0;
    int num[10]={0};
        num[a/100]=1;num[b/100]=1;num[c/100]=1;
        a%=100;b%=100;c%=100;
        num[a/10]=1;num[b/10]=1;num[c/10]=1;
        a%=10;b%=10;c%=10;
        num[a]=1;num[b]=1;num[c]=1;
    for(int i=1;i<=9;i++) //cout<<num[i];cout<<endl;
        if(num[i]!=1) return 0;
    return 1;
}
int main()
{
    int a=read(),b=read(),c=read();bool f=0;
    for(int i=1;i<=999;i++)
        if(check(a*i,b*i,c*i))
        {
            printf("%d %d %d\n",a*i,b*i,c*i);f=1;
        }
    if(!f) puts("No!!!");
    //printf("%d",check(192,384,576));
}
