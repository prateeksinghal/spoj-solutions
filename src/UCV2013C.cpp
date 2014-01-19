#include<stdio.h>
int main()
{
    long long int d,f,b,m,temp,diff,p;
    scanf("%lld %lld %lld %lld",&d,&f,&b,&m);
    while(!(d==0 && f==0 && b==0 && m==0))
    {
        temp=(f*(f+1))/2+1;
        p=b*temp;
        diff=p+m-d;
        if(diff>0)
            printf("The firm is trying to bankrupt Farmer Cream by %lld Bsf.\n",diff);
        else
            printf("Farmer Cream will have %lld Bsf to spend.\n",d-p);
        scanf("%lld %lld %lld %lld",&d,&f,&b,&m);
    }
    return 0;
}
