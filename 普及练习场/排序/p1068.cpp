#include <cstdio>
#include <algorithm>

#define N 100000

using namespace std;

struct node{
    int id;
    int fenshu;
};

node a[N];

bool cmp(node x, node y){
    if(x.fenshu != y.fenshu)
        return x.fenshu > y.fenshu;
    else
       return x.id < y.id;
}

int main()
{
    int n, m;
    scanf("%d%d",&n,&m);

    for(int i=1; i<= n; i++)
        scanf("%d%d", &a[i].id, &a[i].fenshu);

    sort(a+1, a+n+1, cmp);
    m=m*1.5;
    int line, sum=0;
    line = a[m].fenshu;

    for(int i = 1; a[i].fenshu >= line; i++)
    {
        sum++;
    }

    printf("%d %d\n", line, sum);

    for(int i=1; i<=sum; i++)
    {
        printf("%d %d\n", a[i].id, a[i].fenshu);
    }

    return 0;
}
