#include<bits/stdc++.h>
using namespace std;
float a,s,h=2;//h��ÿ���εĳ��ȣ�Ҫ��ʵ�ͣ���Ϊ�����С����
int step; //��Ҫ�εĴ���
int main(){
    cin>>a;//����Ŀ�곤��
    while (s<a){//�ж��εľ����Ƿ�С��Ŀ�����
        s=s+h;//�ۼ��εľ��룻
        h=h*0.98;//ÿ���εľ������98%��
        step++; //ÿ��һ�Σ���������1��
    }
    cout<<step;
    return 0;
}
