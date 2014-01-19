#include<stdio.h>
int arr[1000005]={0},t,prime[1000001];
int arr1[1000005]={0},t1,prime1[1000001];
void sieve()
{
	arr[0]=arr[1]=1;
	int i=2,j;
	t=0;
	while(i<=1000000)
	{
		/*if(arr[i]>0)
		{
			i++;
			continue;
		}*/
		for(j=2*i;j<=1000000;j+=i)
			arr[j]++;
		//prime[t++]=i;
		i++;
	}
	/*printf("all factors:\n");
	for(i=2;i<=100;i++)
		printf("%d--> %d\n",i,arr[i]);*/
}
void sieve1()
{
	arr1[0]=arr1[1]=1;
	int i=2,j;
	t1=0;
	while(i<=1000000)
	{
		if(arr1[i]>0)
		{
			i++;
			continue;
		}
		for(j=2*i;j<=1000000;j+=i)
			arr1[j]++;
		prime1[t1++]=i;
		i++;
	}
	/*printf("prime factors:\n");
	for(i=2;i<=100;i++)
		printf("%d--> %d\n",i,arr1[i]);*/
}
int main()
{
	
	int i,dn,c,count=0;
	int ans[1000000];
	sieve();
	sieve1();
	for(i=2;i<=1000000;i++)
	{
		dn=arr[i]+2;
		c=arr1[dn];
		if(c==2&&arr[dn]==2)
			ans[count++]=i;
	}
	for(i=8;i<count;i+=9)
		printf("%d\n",ans[i]);
	return 0;
}


