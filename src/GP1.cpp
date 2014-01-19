#include<stdio.h>
#include<math.h>
long long int mod_pow(long long int num, long long int pw)
{
    long long int test;
    for(test = 1; pw; pw >>= 1)
    {
        if (pw & 1)
        test = (test * num);
        num = (num * num);
    }

    return test;

}
int main()
{
    long long int t,x,y,z,r,n,a,i,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&x,&y,&z);
        if(x==y)
        {
            r=1;
            n=z/x;
        }
        else{
            r=2;
        while(1)
        {
            if((r*r*r*r*r*y-x)==(z*r*r*(r-1)))
                break;
            r++;
        }
        p=x;
        for(i=5;p!=y;p*=r,i++);
        n = i;
        }
        printf("%lld\n",n);
        a=x/(r*r);

        for(i=0;i<n;i++)
            printf("%lld ",a*mod_pow(r,i));
        printf("\n");
    }
    return 0;
}


