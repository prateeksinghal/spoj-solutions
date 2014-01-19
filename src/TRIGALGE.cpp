#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        double arr[7];
        double fx,fxd;
        arr[0]=1.0*c/a;
        for(i=1;i<7;i++)
        {
            fx=1.0*a*arr[i-1]+1.0*b*sin(arr[i-1])-1.0*c;
            fxd=a*1.0+b*1.0*cos(arr[i-1]);
            arr[i]=arr[i-1]-(1.0*fx/fxd);
            //printf("%lf\n",arr[i]);
        }
        printf("%.6lf\n",arr[6]);
    }
    return 0;
}

