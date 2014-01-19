#include<stdio.h>
long long int mod_pow(long long int num, long long int pw,long long int mod)
{
    long long int test;
    for(test = 1; pw; pw >>= 1)
    {
        if (pw & 1)
        test = (test * num) % mod;
        num = (num * num) % mod;
    }

    return test;

}
int main()
{
    long long int t,n,m;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        m=n;
        n=(n/2)+1;
        printf("%lld\n",(n*n)%m);
    }
    return 0;
}

