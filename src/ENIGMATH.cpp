#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    long long int t,a,b,lcm;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
            cout << "1 1\n";
        else
        {
            lcm=(a*b)/gcd(a,b);
            cout <<lcm/a <<" " << lcm/b<<endl;
        }
    }
    return 0;
}


