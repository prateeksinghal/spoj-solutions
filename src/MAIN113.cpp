#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,n,i;
	long long int x[40];
	cin >> t;
	x[1]=3;
	x[2]=9;
	for(i=3;i<=30;i++)
		x[i]=2*x[i-1]+x[i-2];
	while(t--)
	{
		cin >> n;
		cout << x[n] << endl;
	}
	return 0;
}
