#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    	if(b>a)
        {
            long long int temp=a;
            a=b;
            b=temp;
        }
        while(b!=0)
        {
            long long int c= a%b;
            a=b;
            b=c;
        }
        return a;
}
int main()
{
    long long int t,a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if((c>a && c>b)||(c%gcd(a,b)!=0))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
