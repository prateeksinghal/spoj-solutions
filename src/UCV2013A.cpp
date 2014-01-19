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
    long long int n,l,i,s;
    scanf("%lld %lld",&n,&l);
    while(n!=0&&l!=0)
    {
        s=0;
        for(i=1;i<=l;i++)
        {
            s=(s+mod_pow(n,i,1000000007))%1000000007;
        }
        printf("%lld\n",s);
        scanf("%lld %lld",&n,&l);
    }
    return 0;
}

