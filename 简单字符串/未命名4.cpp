#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
char a1[10010];
long long b[100],c[100];
int main()
{
    long long max=0,l,m;
    for(int i=1;i<=4;i++)
    {
        gets(a1);l=strlen(a1),m=l;
        for(long long i=0;i<=l;++i)
        {
            if(a1[i]==' ')    
            m--;
        }//�洢ÿ����ĸ���ֵĸ���
        for(long long i=0;i<l;++i)
        b[a1[i]-'A']++;
    }
    for(long long i=0;i<=26;++i)
        {
            max=b[i]>max?b[i]:max;
        }//�жϳ�����������һλ�������*�������ֵ
        for(long long j=max;j>=1;--j)//maxΪ���ֵ�����Ʊ�����Ϊmaxλ
        {
            for(long long x=0;x<=26;++x)
            {
                if(b[x]>=j) 
                    {
                        cout<<"*";
                        if(x!=26) cout<<" ";    
                    }
                else 
                    {
                        cout<<" ";
                        if(x!=26) cout<<" ";
                    }
            }
        cout<<endl;
        }//��ӡ�б�
    cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";//���һ��
    return 0;
}
