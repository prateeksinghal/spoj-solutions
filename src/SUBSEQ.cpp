#include<stdio.h>
#include<map>
#include<string.h>
using namespace std;
int main()
{

int t;
scanf("%d",&t);

while(t--)
{
map<int,int>list;
int n;
scanf("%d",&n);
int tmp;
long long int sum[n+1];
memset(sum,0,n+1);
list[0]++;
long long int ans=0,val;
int i;
for(i=1;i<=n;i++)
{
scanf("%d",&tmp);
sum[i]=tmp+sum[i-1];
            val=list[sum[i]-47];
ans+=val;
list[sum[i]]++;
}
printf("%lld\n",ans);
}
}

