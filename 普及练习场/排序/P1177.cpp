#include <cstdio>
#include <algorithm>
using namespace std;

int a[100005];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; scanf("%d", a+(i++)));

    sort(a, a+n);

    printf("%d", a[0]);

    for(int i=1; i<n; printf(" %d", *(a+(i++))));

    puts("");

    return 0;
}
