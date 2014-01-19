#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,i,f,x,l,l1;
    string str,str1;
    cin >> t;
    while(t--)
    {
        cin >> str;
        str+='/';
        l=str.length();
        str1="";
        for(i=0;i<l-1;i++)
        {
            if(str[i]!=str[i+1])
                str1+=str[i];
        }
        l1=str1.length();
        x=(l1%2)?((l1/2)+1):(l1/2);
        //cout << x << endl;
        f=0;
        for(i=0;i<x;i++)
        {
            if(str1[i]!=str1[l1-i-1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
