#include<iostream>
#include<string>
using namespace std;
	long long func(string bin)
	{
		if(bin.compare("063")==0)
		    return 0;
		else if(bin.compare("010")==0)
			return 1;
		else if(bin.compare("093")==0)
			return 2;
		else if(bin.compare("079")==0)
			return 3;
		else if(bin.compare("106")==0)
			return 4;
		else if(bin.compare("103")==0)
			return 5;
		else if(bin.compare("119")==0)
			return 6;
		else if(bin.compare("011")==0)
			return 7;
		else if(bin.compare("127")==0)
			return 8;
		else
			return 9;

	}

	string decode(long long n)
	{
	   if(n==0)
	       return "063";
		else if(n==1)
			return "010";
		else if(n==2)
			return "093";
		else if(n==3)
			return "079";
		else if(n==4)
			return "106";
		else if(n==5)
			return "103";
		else if(n==6)
			return "119";
		else if(n==7)
			return "011";
		else if(n==8)
			return "127";
		else
			return "107";
			
	}

	int main()
	{
		
		string str,num1,num2,temp,ans;
		long long s1,s2,sum,x;
		int i,l1,l2,in;
		cin >> str;
		while(!(str.compare("BYE")==0))
		{
		      num1="";
		      num2="";
			for(i=0;i<str.length();i++)
			{
			 if(str[i]!='+')
			 num1+=str[i];
			 else
			 {
			     in=i;
			 break;
			          }
		          }
		          
			for(i=in+1;i<str.length();i++)
			{
			 if(str[i]!='=')
			 num2+=str[i];
			 else
			 break;
		          }
		          
			l1=num1.length();
			l2=num2.length();
			//cout << num1 << endl;
			//cout << num2 << endl;
			s1=0;
			s2=0;
			temp="";
			for(i=0;i<l1;i=i+3)
			{
				temp=num1[i];
				temp+=num1[i+1];
				temp+=num1[i+2];
				//cout << temp << endl;
				s1=s1*10+func(temp);
			}
		//	cout << s1 << endl;
			for(i=0;i<l2;i=i+3)
			{
			     temp=num2[i];
				temp+=num2[i+1];
				temp+=num2[i+2];
				s2=s2*10+func(temp);
			}
		//	cout << s2 << endl;
			sum=s1+s2;
		//	cout << sum << endl;
			ans="";
			while(sum>0)
			{
				x=sum%10;
				ans=decode(x)+ans;
				sum=sum/10;
			}
			cout << (str+ans) << endl;
			cin >> str;
		}
		return 0;
	}

