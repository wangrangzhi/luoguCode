#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct aa{
    int bh;
    int sl;
};
bool cmp1(struct aa a,struct aa b){
    if(a.sl>=b.sl){
        return 1;
    }
    else{
        return 0;
    }
}
bool cmp2(struct aa a,struct aa b){
    if(a.bh<b.bh){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int m,n,k,l,d;
    cin>>m>>n>>k>>l>>d;
    struct aa a[m],b[n];
    int x1,y1,x2,y2;
    for(int i=1;i<m;i+=1){
        a[i].bh=i;
        a[i].sl=0;
    }
    for(int i=1;i<n;i+=1){
        b[i].bh=i;
        b[i].sl=0;
    }
    for(int i=1;i<=d;i+=1){
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2){
            if(y1<y2){
                b[y1].sl+=1;
            }
            else{
                b[y2].sl+=1;
            }
        }
        else{
            if(x1<x2){
                a[x1].sl+=1;
            }
            else{
                a[x2].sl+=1;
            }
        }
    }
    sort(a+1,a+m,cmp1);
    sort(b+1,b+n,cmp1);
    sort(a+1,a+k+1,cmp2);
    sort(b+1,b+l+1,cmp2);
    for(int i=1;i<=k;i+=1){
        cout<<a[i].bh<<" ";
    }
    cout<<endl;
    for(int j=1;j<=l;j+=1){
        cout<<b[j].bh<<" "; 
    }
    return 0;
}
