#include<stdio.h>
#include<math.h>
#include<string.h>
long long int mod_pow(long long int num, long long int pw)
{
    long long int test,s=1;
    for(test = 1; test<=pw; test++)
    {
        s=s*num;
    }

    return s;

}
int main()
{
long long int t,z,i,c,r;
char s[101];
long long int n;
scanf("%lld",&t);
while(t--)
{
char s[101];
z=0;
scanf("%lld",&n);
n=n-1;
while(1)
{
z++;
if((n-mod_pow(2,z))>=0)
n=n-mod_pow(2,z);
else
break;
}
c=0;
//printf("z=%d n=%lld\n",z,n);
while(n>0)
{
r=n%2;
if(r==0)
s[c]='5';
else if(r==1)
s[c]='6';
c++;
n=n/2;
}
for(i=1;i<=z-c;i++)
printf("5");
for(i=c-1;i>=0;i--)
printf("%c",s[i]);
printf("\n");
}
return(0);
}


