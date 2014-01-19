#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
	int t,m,n,k,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&m,&k);
		char a[n+1][m+1];
		int b[52]={0};
		int count=0,min=INT_MAX,index;
		for(i=0;i<n;i++)
		{
			scanf("%s",a[i]);
			for(j=0;j<m;j++)
			{
				if(a[i][j]=='*')
					b[i]++;
			}
		}
		for(i=0;i<k;i++)
		{
			min=b[0];
			index=0;
			for(j=1;j<n;j++)
			{
				if(b[j]<min)
				{
					min=b[j];
					index=j;
				}
			}
			b[index]=m-b[index];
		}
		for(i=0;i<n;i++)
			count+=b[i];
		printf("%d\n",count);
	}
	return 0;
}


