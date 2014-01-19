#include<stdio.h>
#include<math.h>
int main()
{
	int t,n;
	double x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		x=ceil(log(n)/log(2));
		printf("%.0lf\n",x+1);
	}
	return 0;
}


