#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    int a[1000];
    a[1]=1;
    a[2]=5;
    a[3]=11;
    a[4]=36;
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        for(i=5;i<=n;i++)
        {
            a[i]=a[i-1]+5*a[i-2]+a[i-3]-a[i-4];
        }
        printf("%d %d\n",j,a[n]);
    }
    return 0;
}
