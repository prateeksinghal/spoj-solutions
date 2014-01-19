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
int main()
{
    long long int t,n,i,sumi,sum_si,sumi_si,sumi2;
    double a,b;
    inp(t);
    while(t--)
    {
        inp(n);
        long long int arr[n];
        sumi=0;
        sum_si=0;
        sumi_si=0;
        sumi2=0;
        a=0.0;
        b=0.0;
        for(i=0;i<n;i++)
        {
            inp(arr[i]);
            sumi=sumi+(i+1);
            sum_si=sum_si+arr[i];
            sumi_si=sumi_si+((i+1)*arr[i]);
            sumi2=sumi2+((i+1)*(i+1));
        }
        a=(((sumi*sum_si)-(n*sumi_si))*1.0)/((sumi*sumi)-(n*sumi2));
        b=(sum_si-a*sumi)/n;
        if(a==-0.00)
            a=0.00;
        if(b==-0.00)
            b=0.00;
        printf("%.4lf %.4lf\n",a,b);
    }
    return 0;
}



