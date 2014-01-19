#include<stdio.h>
int main()
{
    long long int t,n,x;
    scanf("%lld",&t);
    while(t--)
    {
            scanf("%lld",&n);
            x=(n*(n+2)*(2*n+1)+2*(n/2)-n)/8;
            printf("%lld\n",x);
    }
    return 0;
}
