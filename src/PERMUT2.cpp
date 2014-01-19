#include<stdio.h>
    /*#define getcx getchar_unlocked
    inline void inp( int &n )//fast input function
    {
    n=0;
    int ch=getcx();
    int sign=1;
    while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

    while( ch >= '0' && ch <= '9' )
    n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
    } */
    int main()
    {
    int t,i,j,n,f;
    scanf("%d",&n);
    while(n!=0)
    {

    int a[n];
    int b[n];
    f=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    b[a[i]-1]=i+1;
    }

    for(i=0;i<n;i++)
    {
    if(a[i]!=b[i])
    {
    f=1;
    break;
    }
    }
    if(f==1)
    printf("not ambiguous\n");
    else
    printf("ambiguous\n");
    scanf("%d",&n);
    }
    return 0;
    }
