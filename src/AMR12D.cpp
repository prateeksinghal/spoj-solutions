#include<stdio.h>
int main()
{
	int t,i;
	
	scanf("%d",&t);
	while(t--)
	{
		char str[11],str1[11];
		scanf("%s",str);
		for(i=strlen(str)-1;i>=0;i--)
		{
			str1[strlen(str)-i-1]=str[i];
		}
		str1[strlen(str)]='\0';
		if(strcmp(str,str1)==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}


