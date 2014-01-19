#include<stdio.h>

int main()
{
	int N,t,T;
	char A[27]={'J','S','B','K','T','C','L','D','M','V','N','W','F','X','G','P','Y','H','Q','Z','R'};
	scanf("%d",&t);
	T=t;
	while(t--)
	{
		int i,j,p=0,V=0,B[26]={0},s;
		char S[212],v[5]={'A','U','E','O','I'};
		scanf("%d",&N);
		for(j=1,i=0;i<N;i+=2,j++)
		{
			s=(v[p]-'A');
			B[s]++;
			if(!(j%21))
			p++;
		}
		for(p=0,j=1,i=1;i<N;i+=2,j++)
		{
			B[A[p]-'A']++;
			if(!(j%5))
			p++;
		}
		S[N]='\0';
		printf("Case %d: ",T-t);
		for(p=i=0,V=1;i<26;i++)
		{
			if(B[i])
			{
				if((i=='A'-'A')||(i=='E'-'A')||(i=='I'-'A')||(i=='O'-'A')||(i=='U'-'A'))
				{
					while(B[i]--)
					{
						S[p]='A'+i;
							p+=2;
					}
				}
				else
				{
					while(B[i]--)
					{
						S[V]='A'+i;
						V+=2;
					}
				}
			}
		}
		printf("%s\n",S);
	}
	return 0;
}
