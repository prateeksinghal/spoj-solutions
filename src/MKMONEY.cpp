#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    double P,I,i,amt,temp;
    int C,t=0;
    cin >> P >> I >> C;
    while(C!= 0)
    {
        temp=P;
        for(i=1.0;i<=C;i=i+1.0)
        {
                amt=floor(I*temp/C)/100;
                temp+=amt;
        }
        printf("Case %d. $%.2lf at %.2lf%% APR compounded %d times yields $%.2lf\n",++t,P,I,C,temp);
        cin >> P >> I >> C;
        
    }
    return 0;
}


