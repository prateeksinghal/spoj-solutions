#include<iostream>

using namespace std;
long long mod = 314159 ;
long long d_pow(long long num, long long pw,long long mod)
{
    long long test;
    for(test = 1; pw; pw >>= 1)
    {
        if (pw & 1)
        test = (test * num) % mod;
        num = (num * num) % mod;
    }

    return test;

}
int main()
{
    long long t,n,ans;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ans = (((d_pow(10,n-1,mod)*5)%mod)+((d_pow(8,n-1,mod)*4)%mod))%mod ;
        cout << ans << endl;
    }
    return 0;
}
        
