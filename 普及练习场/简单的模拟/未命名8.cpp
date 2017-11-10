#include<iostream>
#include<algorithm>
using namespace std;
int m,n,k,l,d,x,y,p,q;
int hang[1005],lie[1005],numhang[1005],numlie[1005]; //两个num数组记录说话的一组人的编号
void work1()
{
    for(int i=1; i<=m-1; i++) numhang[i]=i; //初始化
}
void work2()
{
    for(int i=1; i<=n-1; i++) numlie[i]=i; //初始化
}
void swap(int &a,int &b) //交换操作
{
    int t=a; a=b; b=t; 
}
void maopao1() //冒泡排序（降序）贪心求行最优解
{
    for(int i=1; i<=m-2; i++)
     for(int j=i+1; j<=m-1; j++)
       if(hang[i]<hang[j])
       {
         swap(hang[i],hang[j]);
         swap(numhang[i],numhang[j]);
       }
}
void maopao2()  ////冒泡排序（降序）贪心求列最优解
{
     for(int i=1; i<=n-2; i++)
     for(int j=i+1; j<=n-1; j++)
       if(lie[i]<lie[j])
       {
         swap(lie[i],lie[j]);
         swap(numlie[i],numlie[j]);
       }
}
int main()
{
     cin>>m>>n>>k>>l>>d;
     for(int i=1; i<=d; i++)
     {
        cin>>x>>y>>p>>q;
        if(x!=p)
      if(x>p) hang[p]++; //记在坐标小的下标内，方便计算
        else hang[x]++;
      else if(y>q) lie[q]++;
             else lie[y]++; 
     }
     work1();
     work2();
     maopao1();
     maopao2();
     sort(numhang+1,numhang+k+1); //这一步非常重要，但是不得不吐槽一下，这题目也太坑了；根本没说输出也要排序，这要放到考试中岂不呵呵了。。。不过总之排一下就好。
    sort(numlie+1,numlie+l+1);
     for(int i=1; i<=k; i++) cout<<numhang[i]<<" "; //输出行最优解
     cout<<endl;
     for(int i=1; i<=l; i++) cout<<numlie[i]<<" "; //输出列最优解
     return 0;
}
