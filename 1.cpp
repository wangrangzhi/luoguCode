#include <cstdio>
#include <algorithm>

int a[100005];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; scanf("%d", a+(i++)));

    sort(a, a+n);

    printf("%d", a[0]);
}