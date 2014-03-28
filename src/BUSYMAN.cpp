#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct com
{
	int s,f;
}tim;


bool func(const tim &a,const tim &b)
{
	return (a.f < b.f);
}

int main()
{
	int t,n,i,count,temp,s1,s2;
	cin >> t;
	while(t--)
	{
		cin >> n;
		tim arr[n];
		for(i=0;i<n;i++)
		{
			cin >> s1;
			arr[i].s=s1;
			cin >> s2;
			arr[i].f=s2;
		}
		sort(arr,arr+n,func);
		count = 1;
		temp = arr[0].f;
		for(i=1;i<n;i++)
		{
			if(arr[i].s >= temp)
			{
				count++;
				temp = arr[i].f;
			}
		}
		cout << count << endl;
	}
	return 0;
}	
