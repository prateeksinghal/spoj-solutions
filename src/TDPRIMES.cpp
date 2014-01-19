#include<stdio.h>

#define prime(i) ((Prime[i>>5])&(1<<(i&(31))))
#define set(j) (Prime[j>>5]|=(1<<(j&(31))))
#define LIM 99999999
#define SLIM 12000

long int j,i=3,l;
int Prime[10000000];

void sieve()
{
long int i, j, m, n, t,x,k,h;
set(1);

for(k=2,l=3,i=5; i<=SLIM; k++,i=3*k-(k&1)-1)
if(prime(k)==0)
{
    if((l-1)%100==0)
        printf("%ld\n",i);
    l++;

for(j=i*i,h=((j+2)/3); j<=LIM; h+=(k&1)?(h&1?((k<<2)-3):((k<<1)-1)):(h&1?((k<<1)-1):((k<<2)-1)),j=3*h-(h&1)-1)
set(h);
}
i=3*k-(k&1)-1;
for(;(l<=10000000)&&(i<=LIM) ; k++,i=3*k-(k&1)-1)
if(prime(k)==0)
{
    if((l-1)%100==0)
        printf("%ld\n",i);
    l++;
}
}
int main()
{
 printf("2\n");
sieve();

return 0;
}

