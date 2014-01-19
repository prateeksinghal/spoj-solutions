#include<stdio.h>
#include<math.h>
const long long int MAX_N=1000005;
long long int c[MAX_N],P[MAX_N],g[MAX_N],s[MAX_N],mu[MAX_N];
long long int tot;
void init(){
	mu[1]=1;
	for (long long int i=2;i<MAX_N;i++){
		if (!c[i]){
			c[i]=i;
			P[++tot]=i;
		}
		long long int pt=(MAX_N-1)/i;
		for(long long int j=1;P[j]<=pt;j++){
			c[P[j]*i]=P[j];
			if (!(i%P[j])) break;
		}
		long long int now=i,mark=0,cnt=0;
		while (now>1){
			long long int ret=c[now];
			now/=ret;
			if (c[now]==ret){
				mark=1;
				mu[i]=0;
			}
			else g[i]+=mu[i/ret];
			cnt++;
		}
		if (!mark) mu[i]=(cnt%2)?(-1):(1);
		s[i]=s[i-1]+g[i];
	}
}

long long int mod_pow(long long int num, long long int pw)
{
	long long int test;
	for(test = 1; pw; pw >>= 1)
	{
		if (pw & 1)
			test = (test * num);
		num = (num * num);
	}
	return test;
}
int main()
{
    init();
    long long int t,n,i;
    long long int sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        sum=0;
        for(i=1;i<=n;i++)
            sum+=(mu[i]*((((n/i)+1)*((n/i)+1)*((n/i)+1))-1));
        printf("%lld\n",sum);
    }
    return 0;
}
