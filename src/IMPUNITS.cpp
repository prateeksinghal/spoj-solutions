#include<stdio.h>
#define getcx getchar_unlocked
inline void inp(long long int &n )//fast input function
{
n=0;
long long int ch=getcx();
long long int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
n=n*sign;
}
long long int GCD(long long int a,long long int b)
{
    if( b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main()
{
    long long int n,a,b,num,den,i,x;
    while(1)
    {
        inp(n);
        if(n==-1)
            break;
        num=1;
        den=1;
        for(i=1;i<n;i++)
        {
            inp(a);
            inp(b);
            num=num*a;
            den=den*b;
        }
        x=GCD(num,den);
        printf("%lld %lld\n",num/x,den/x);
    }
    return 0;
}


