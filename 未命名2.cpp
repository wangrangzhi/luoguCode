#include<iostream>
using namespace std;
int main()
{
    int k,i;
    long double sum;//sumΪ����ʽ��ֵ
    cin>>k;
    sum=0;i=0;
    while(sum<=k)
    {
        i=i+1;
        sum=sum+(1.0/i);
    }
    cout<<i<<endl;
    
    cout << sum;
    return 0;
}
