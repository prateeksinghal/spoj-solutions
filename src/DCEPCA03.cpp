#include<iostream>
using namespace std;
int eutot(int n)
{
    int i,res=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            res-=res/i;
        while(n%i == 0)
            n/=i;
    }
    if(n>1)
        res-=res/n;
    return res;
}

int main()
{
    int t,n,i;
    long long int sum,H;
    cin >> t;
    while(t--)
    {
        cin >> n;
        H=0;
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=eutot(i);
        }
        H=sum*sum;
        cout << H << endl;
    }
    return 0;
}
