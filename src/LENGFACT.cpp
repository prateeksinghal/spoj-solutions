#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,x;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==0||n==1)
            printf("1\n");
        else
        {

     x=floor((log(2.0*3.14159265358979323*n)/2.0+n*(log(n)-1))/log(10.0))+1   ;
     printf("%lld\n",x);
        }
    }
    return 0;
}

