#include<stdio.h>
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
	int n,i,j,grp=0,c;
	//scanf("%d",&n);
	inp(n);
	bool a[30000];
	int b[n];
	for(i=0;i<n;i++)
	{
	//   scanf("%d",&b[i]);
		inp(b[i]);
	   a[b[i]]=true;
	   //printf("hi\n");
	   if(a[b[i]-1]==true&&a[b[i]+1]==true)
        {
            grp--;
        }
        else if(a[b[i]-1]==true||a[b[i]+1]==true)
        {
             grp=grp;
        }
        else
        {
            grp++;
        }
         printf("%d\n",grp);
	   //inp(a[i]);
    }
    printf("Justice\n");
    return 0;
}
