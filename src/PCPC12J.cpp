#include<stdio.h>
int main()
{
    int t,n,i,temp,c,temp1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        int b[101]={0};
        int fre[101];
        int d[101];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        c=0;
        for(i=0;i<101;i++)
        {
            if(b[i]!=0 && b[i]%i==0)
            {
                fre[c]=b[i];
                d[c++]=i;
            }
        }
        temp=-1;
        for(i=0;i<c;i++)
        {
            if(fre[i]>temp)
            {
                temp=fre[i];
            }
        }
        temp1=200;
        for(i=0;i<c;i++)
        {
            if(fre[i]==temp && d[i]<temp1)
                temp1=d[i];
        }
        if(temp1==200)
            printf("-1\n");
        else
            printf("%d\n",temp1);
    }
    return 0;
}


