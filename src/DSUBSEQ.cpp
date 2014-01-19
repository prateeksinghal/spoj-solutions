#include<stdio.h>
#include<string.h>
#define mod 1000000007
int main()
{
    int t,i,n,s,tmp;
    scanf("%d",&t);
    while(t--)
    {
        char str[100001];
        scanf("%s",str);
        n=strlen(str);
        s=2;
        int sum[26]={0};
        sum[str[0]-'A']=1;
        for(i=1;i<n;i++)
        {
            tmp=(s-sum[str[i]-'A']+mod)%mod;
            s=(s+tmp)%mod;
            sum[str[i]-'A']=(sum[str[i]-'A']+tmp)%mod;
        }
        printf("%d\n",s);
    }
    return 0;
}




