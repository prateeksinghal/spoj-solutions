#include<stdio.h>
#include<math.h>
#include<string.h>
void getPrimeFactor (int n);
int prime[100005];
int ct=0;
int mod_pow(int num, int pw)
{
	int test;
	for(test = 1; pw; pw >>= 1)
	{
		if (pw & 1)
			test = (test * num);
		num = (num * num);
	}
	return test;
}
void sieve(int L,int U) {
	int i,j,d;
	d=U-L+1;
	bool *flag=new bool[d];
	for (i=0;i<d;i++) flag[i]=true;
	for (i=(L%2!=0);i<d;i+=2) flag[i]=false;
	for (i=3;i<=sqrt(U);i+=2) {
		if (i>L && !flag[i-L]) continue;
		j=L/i*i; if (j<L) j+=i;
		if (j==i) j+=i;
		j-=L;
		for (;j<d;j+=i) flag[j]=false;
	}
	if (L<=1) flag[1-L]=false;
	if (L<=2) flag[2-L]=true;
	for (i=0;i<d;i++)
		if (flag[i])
			prime[ct++]=(L+i);
}
int a[100005];
int c;
int main()
{
	int t,n,i,j,mo,num,x,sum1,sum,pro,count,m,ans;
	scanf("%d",&t);
	sieve(2,100000);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		getPrimeFactor(n);
		x=mod_pow(2,c);
		sum=m;
		count=0;
		for(i=1;i<x;i++)
		{
			num=i;
			int arr[c];
			count=0;
			for(j=0;j<c;j++)
				arr[j]=0;
			while(num>0)
			{
				mo=num%2;
				num=num/2;
				arr[count++]=mo;
			}
			pro=1;
			int uo=0;
			for(j=0;j<c;j++)
			{
				if(arr[j]==1)
					pro=pro*a[j],uo++;
				//sum=sum+(m/pro);
			}
			if ( uo%2== 1 )
			{
				sum -= m/pro;
			}
			else
				sum += m/pro;
		}
		//sum1=0;
		//for(i=0;i<c;i++)
		// sum1=sum1+(m/a[i]);
		//ans=m-(2*sum1-sum);
		printf("%d\n",sum);
	}
	return 0;
}
void getPrimeFactor (int n)
{
	int i=0;
	int g = sqrt(n);
	c=0;
	while (i < ct && n > 1 && prime[i]<= g )
	{
		if ( n%prime[i]==0)
		{
			a[c++]=prime[i];
			while ( n%prime[i]==0)
				n/=prime[i];
		}
		i++;
	}
	if ( n > 1 )
		a[c++]=n;
}


