#include<stdio.h>
long long int mod_pow(long long int num, long long int pw)
{
    long long int test;
    for(test = 1; pw; pw >>= 1)
    {
        if (pw & 1)
        test = (test * num) ;
        num = (num * num) ;
    }

    return test;

}
int main()
{
    long long int t,n,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        x=mod_pow(3,n)-1;
        printf("%lld\n",x);
    }
    return 0;
}
