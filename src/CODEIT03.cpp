#include<stdio.h>
int day(int mm,int yy);
int leap(int yy);
int main()
 	{
 		//Scanner br=new Scanner(System.in);
		int yy,dd,mm,i,j=0,k,f,x,t,dayn,y,m,d;
		scanf("%d",&t);
		
		char a[8][20]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
		//System.out.println("Enter the year :");
		while(t-->0){
		scanf("%d",&dd);
		scanf("%d",&mm);
		scanf("%d",&yy);
		y=2012;
		dayn=0;
		for(i=2012;i<=yy;i++)
		{
			if(i==yy)
				m=mm;
			else
				m=12;
			for(j=1;j<=m;j++)
			{
				if(i==yy && j==mm)
				{
					x=dd;
				}
				else
				{
					x=day(j,i);
				}
				for(k=1;k<=x;k++)
					dayn=(dayn+1)%7;
			}
		}
		//System.out.println(dayn);
		printf("%s\n",a[dayn]);
		}
		return 0;
		
	}
 int day(int mm,int yy)
	{
		switch(mm)
		{
			case 1:	//System.out.println("-------JANUARY------");
			         //   	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;
			case 2:	//System.out.println("------FEBRUARY------");
				//System.out.println("Su Mo Tu We Th Fr Sa");
				return leap(yy);
			case 3:	//System.out.println("--------MARCH--------");
			           // 	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;
			case 4://System.out.println("---------APRIL-------");
			         //   	System.out.println("Su Mo Tu We Th Fr Sa");
				return 30;
			case 5://	System.out.println("---------MAY--------");
			          //  	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;
			case 6:	//System.out.println("--------JUNE--------");
			          //  	System.out.println("Su Mo Tu We Th Fr Sa");
				return 30;
			case 7:	//System.out.println("--------JULY--------");
			          //  	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;
			case 8:	//System.out.println("-------AUGUST-------");
			         //   	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;
			case 9:	//System.out.println("-----SEPTEMBER-----");
			         //   	System.out.println("Su Mo Tu We Th Fr Sa");
				return 30;
			case 10:	//System.out.println("------OCTOBER------");
			            //	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;
			case 11:	//System.out.println("-----NOVEMBER-----");
			            //	System.out.println("Su Mo Tu We Th Fr Sa");
				return 30;
			case 12:	//System.out.println("-----DECEMBER------");
			            //	System.out.println("Su Mo Tu We Th Fr Sa");
				return 31;	
			default: return 0;
		}
	}
int leap(int yy)
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
	
	
