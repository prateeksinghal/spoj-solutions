#include<stdio.h>
#include<string.h>
#define getcx getchar_unlocked
inline void inp( int &n )//fast input function
{
n=0;
 int ch=getcx();
 int sign=1;
while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

while( ch >= '0' && ch <= '9' )
n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
n=n*sign;
}
int main()
{
    int t,i,f,c;
    char ch;
    inp(t);
    while(t--)
    {
        char a[99];
        f=0;
        for(i=0;i<99;i++)
        {
            inp(c);
            scanf("%c",&a[i]);
            getchar();
        }
        if(a[8]==a[17]&&a[17]==a[26]&&a[26]==a[35]&&a[35]==a[44]&&a[44]==a[53]&&a[53]==a[62]&&a[62]==a[71]&&a[71]==a[80])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

