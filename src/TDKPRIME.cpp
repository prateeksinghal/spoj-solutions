#include<stdio.h>

#define prime(i) ((Prime[i>>5])&(1<<(i&(31))))
#define set(j) (Prime[j>>5]|=(1<<(j&(31))))
#define LIM 100000000
#define SLIM 12000

long int j,i=3,l,pos[5000005];
int Prime[10000000];

void sieve()
{
long int i, j, m, n, t,x,k,h;
set(1);
pos[1]=2;
pos[2]=3;
for(k=2,l=3,i=5; i<=SLIM; k++,i=3*k-(k&1)-1)
if(prime(k)==0)
{
pos[l++]=i;
for(j=i*i,h=((j+2)/3); j<=LIM; h+=(k&1)?(h&1?((k<<2)-3):((k<<1)-1)):(h&1?((k<<1)-1):((k<<2)-1)),j=3*h-(h&1)-1)
set(h);
}
i=3*k-(k&1)-1;
for(;(l<=5000000)&&(i<=LIM) ; k++,i=3*k-(k&1)-1)
if(prime(k)==0)
pos[l++] = i;
}
int main()
{
int t;
sieve();
scanf("%d",&t);
while(t--)
{
scanf("%ld",&j);
printf("%ld\n",pos[j]);
}
return 0;
}
