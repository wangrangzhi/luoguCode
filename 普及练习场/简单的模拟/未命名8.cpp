#include<iostream>
#include<algorithm>
using namespace std;
int m,n,k,l,d,x,y,p,q;
int hang[1005],lie[1005],numhang[1005],numlie[1005]; //����num�����¼˵����һ���˵ı��
void work1()
{
    for(int i=1; i<=m-1; i++) numhang[i]=i; //��ʼ��
}
void work2()
{
    for(int i=1; i<=n-1; i++) numlie[i]=i; //��ʼ��
}
void swap(int &a,int &b) //��������
{
    int t=a; a=b; b=t; 
}
void maopao1() //ð�����򣨽���̰���������Ž�
{
    for(int i=1; i<=m-2; i++)
     for(int j=i+1; j<=m-1; j++)
       if(hang[i]<hang[j])
       {
         swap(hang[i],hang[j]);
         swap(numhang[i],numhang[j]);
       }
}
void maopao2()  ////ð�����򣨽���̰���������Ž�
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
      if(x>p) hang[p]++; //��������С���±��ڣ��������
        else hang[x]++;
      else if(y>q) lie[q]++;
             else lie[y]++; 
     }
     work1();
     work2();
     maopao1();
     maopao2();
     sort(numhang+1,numhang+k+1); //��һ���ǳ���Ҫ�����ǲ��ò��²�һ�£�����ĿҲ̫���ˣ�����û˵���ҲҪ������Ҫ�ŵ��������񲻺Ǻ��ˡ�����������֮��һ�¾ͺá�
    sort(numlie+1,numlie+l+1);
     for(int i=1; i<=k; i++) cout<<numhang[i]<<" "; //��������Ž�
     cout<<endl;
     for(int i=1; i<=l; i++) cout<<numlie[i]<<" "; //��������Ž�
     return 0;
}
