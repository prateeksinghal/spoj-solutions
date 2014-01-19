#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,n,k,c,flag,c1,i;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        flag=0;
        c1=1;
        scanf("%d %d",&n,&k);
        char str[n+1];
        scanf("%s",str);
        for(i=1;i<n;i++)
        {
            if(str[i]==str[i-1])
                c1++;
            else
            {
                c+=ceil((float)c1/k);
                if(c1>=k)
                    flag=1;
                c1=1;
            }
        }
        if(c1>=k)
            flag=1;
        if(flag)
        {
            c+=ceil((float)c1/k);
            printf("%d\n",c);
        }
        else
            printf("-1\n");
    }
    return 0;
}
