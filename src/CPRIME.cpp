#include<stdio.h>
#include<cmath>
#include<vector>
#define prime(i) ((Prime[i>>5])&(1<<(i&(31))))
#define set(j) (Prime[j>>5]|=(1<<(j&(31))))
#define LIM 100000000
#define SLIM 12000
using namespace std;
int j,i=3,l;
int Prime[10000000];
int count=3;
vector<int> a(5761456+10);
void sieve()
{
	int i, j, m, n, t,x,k,h;
	set(1);
	for(k=2,l=3,i=5; i<=SLIM; k++,i=3*k-(k&1)-1)
		if(prime(k)==0)
		{

			a[count++]=i;
			l++;

			for(j=i*i,h=((j+2)/3); j<=LIM; h+=(k&1)?(h&1?((k<<2)-3):((k<<1)-1)):(h&1?((k<<1)-1):((k<<2)-1)),j=3*h-(h&1)-1)
				set(h);
		}
	i=3*k-(k&1)-1;
	for(;(l<=10000000)&&(i<=LIM) ; k++,i=3*k-(k&1)-1)
		if(prime(k)==0)
		{

			a[count++]=i;
			l++;
		}
}

int BinarySearch(int l, int u, int key)
{
    int m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(key<a[l])
            return l-1;
        if(key>a[u])
            return u;
        if(key==a[m])
            return m;
        else if(key<a[m])
            u=m-1;
        else
            l=m+1;
    }
    return count-1;
}



int main()
{
    a[0]=-1;
    a[1]=2;
    a[2]=3;

	sieve();
//	for(int k=0;k<100;k++)
//	   printf("%ld\n",a[k]);
	int x,i;
	double ans,t;
	scanf("%d",&x);
    while(x!=0)
    {
	    i=BinarySearch(0,count-1,x);
        ans=abs((i*1.0)-((x*1.0)/log(x)))/i;
        printf("%.1lf\n",ans*100.0);
	    scanf("%d",&x);
    }
	return 0;
}
