#include<stdio.h>
#include<algorithm>
#define o 1000000007
using namespace std;
int main()
{
    long long int t,n,i,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        p=1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            //p=((p%o)*((a[i]-i)%o))%o;
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
         //   scanf("%lld",&a[i]);
            p=((p%o)*((a[i]-i)%o))%o;
            if(p<=0)
                break;
        }
        if(p<=0)
            printf("0\n");
        else
            printf("%lld\n",p);
    }
    printf("KILL BATMAN\n");
    return 0;
}
