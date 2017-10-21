#include<bits/stdc++.h>
using namespace std;
float a,s,h=2;//h是每次游的长度，要用实型，因为会出现小数；
int step; //需要游的次数
int main(){
    cin>>a;//读入目标长度
    while (s<a){//判断游的距离是否小于目标距离
        s=s+h;//累加游的距离；
        h=h*0.98;//每次游的距离乘以98%；
        step++; //每游一次，计数器加1；
    }
    cout<<step;
    return 0;
}
