#include<stdio.h>
#include<string.h>
long long int day(long long int mm,long long int yy);
long long int leap(long long int yy);

 long long int day(long long int mm,long long int yy)
	{
		switch(mm)
		{
			case 1:	
				return 31;
			case 2:	
				return leap(yy);
			case 3:	;
				return 31;
			case 4:
				return 30;
			case 5:
				return 31;
			case 6:	
				return 30;
			case 7:	
				return 31;
			case 8:	
				return 31;
			case 9:	
				return 30;
			case 10:	
				return 31;
			case 11:	
				return 30;
			case 12:
				return 31;	
			default: return 0;
		}
	}
long long int leap(long long int yy)
	{
		if(yy%100==0)
		{
			if(yy%400==0)
			{
				return 29;
			}
			else
			{
				return 28;
			}
		}
		else
		{
			if(yy%4==0)
			{
				return 29;
			}
			else
			{
				return 28;
			}
		}
	}
	
int main()
{
    long long int t,n,m,i,j,count,c=0,in,x;
    char str[5000][15]={" "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," ","Friday"," "," "," "," "," "," "," "," ","Friday"," "," "," "," "," ","Friday"," "," ","Friday"," "," "," "," "," "," "," "," "," "," "," "," "," ","Friday"," "," ","Friday"};

    scanf("%lld",&t);

    while(t--)
    {
        count=0;
	c=0;
        scanf("%lld %lld",&n,&m);
	for(i=(n-1901)*12;i<(m+1-1901)*12;i++)
	{
		if(strcmp(str[i],"Friday")==0)
			count++;
	}
	for(i=n;i<=m;i++)
	{
		for(j=1;j<=12;j++)
		{
			c=c+day(j,i);
		}
	}
       	count=c-count;
	c=0;
		in=0;
	
		long long int a[100000]={0};
		while(count>0)
		{
		  c++;
		  if(c!=2)
            {
            x=count%20;
            a[in++]=x;
            count/=20;
            }
            else
            {
                x=count%18;
                a[in++]=x;
            count/=18;
            }
        }
        for(i=4;i>=0;i--)
        {
            if(a[i]==0)
            {
                if(i!=0)
                printf("0.");
                else
                printf("0");
            }
            else
            {
            if(i!=0)
            printf("%lld.",a[i]);
            else
            printf("%lld",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
