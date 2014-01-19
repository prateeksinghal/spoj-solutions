#include<stdio.h>
int main()
{
    int t,n,m,i,j,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        int a[n][m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<m;j++)
            {
                if(j==0)
                {
                    if(a[i][j]+a[i+1][j] >= a[i][j]+a[i+1][j+1])
                    {
                        a[i][j]=a[i][j]+a[i+1][j];
                    }
                    else
                    {
                         a[i][j]=a[i][j]+a[i+1][j+1];
                    }
                }
                else if(j==m-1)
                {
                    if(a[i][j]+a[i+1][j] >= a[i][j]+a[i+1][j-1])
                    {
                        a[i][j]=a[i][j]+a[i+1][j];
                    }
                    else
                    {
                         a[i][j]=a[i][j]+a[i+1][j-1];
                    }
                }
                else
                {
                    if((a[i][j]+a[i+1][j] >= a[i][j]+a[i+1][j-1]) && (a[i][j]+a[i+1][j] >= a[i][j]+a[i+1][j+1]))
                    {
                        a[i][j]=a[i][j]+a[i+1][j];
                    }
                    else if((a[i][j]+a[i+1][j+1] >= a[i][j]+a[i+1][j]) && (a[i][j]+a[i+1][j+1] >= a[i][j]+a[i+1][j-1]))
                    {
                        a[i][j]=a[i][j]+a[i+1][j+1];
                    }
                    else if((a[i][j]+a[i+1][j-1] >= a[i][j]+a[i+1][j]) && (a[i][j]+a[i+1][j-1] >= a[i][j]+a[i+1][j+1]))
                    {
                        a[i][j]=a[i][j]+a[i+1][j-1];
                    }

                }
            }
        }

        temp=a[0][0];
        for(i=1;i<m;i++)
        {
            if(a[0][i] > temp)
                temp=a[0][i];
        }
        printf("%d\n",temp);
    }
    return 0;
}
