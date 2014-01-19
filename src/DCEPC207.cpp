#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int t,k,l,i,j,max,ch,temp,c,maxc,maxtemp,tempch;
    cin >> t;
    getchar();
    for(k=1;k<=t;k++)
    {


        char str1[100001];
        gets(str1);
        string str(str1);
        l=str.length();
        int freq[26]={0};
        for(i=0;i<l;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                freq[str[i]-'a']++;
        }
        max=-1;
        for(i=0;i<26;i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ch=i;
            }
        }
        str=str+" ";
        l=str.length();
        temp=0;
        string arr[10001];
        c=0;
        for(i=0;i<l;i++)
        {
            if(!(str[i]>='a'&&str[i]<='z'))
            {
                string st="";
                for(j=temp;j<i;j++)
                    st+=str[j];
                temp=i+1;
                arr[c++]=st;
            }
        }
        printf("Case #%d:\n",k);
        for(i=0;i<c;i++)
        {
            int f[26]={0};
            for(j=0;j<arr[i].length();j++)
            {
                f[arr[i][j]-'a']++;
            }
            maxc=0;
            maxtemp=-1;
            for(j=0;j<26;j++)
            {
                if(f[j]>maxtemp)
                {
                    maxtemp=f[j];
                    tempch=j;
                }
            }
            for(j=0;j<26;j++)
            {
                if(f[j]==maxtemp)
                {
                    maxc++;
                }
            }

            if(maxc==1&&tempch==ch)
            {
                cout << arr[i] << endl;
            }
        }
    }
    return 0;
}
