#include<stdio.h>
#define MOD 10000007
int main()
{
    int ncr[101][101]={0,0};
    int i,j,n,r;
    ncr[0][0]=ncr[1][0]=ncr[1][1]=1;
    for(i=2;i<=100;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                ncr[i][j]=1;
            }
            else
            {
                ncr[i][j]=(ncr[i-1][j]+ncr[i-1][j-1])%MOD;
            }
        }
    }
    scanf("%d %d",&n,&r);
    if(n<r)
        printf("-1");
    else if(n==r)
        printf("1");
    else
        printf("%d\n",ncr[n-1][r-1]);
    return 0;
}
