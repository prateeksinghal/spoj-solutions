#include<iostream>
#include<limits.h>
#include<algorithm>
#define ll long long 
using namespace std;
/*

size of segment tree = 2*2^(ciel(log2(n)))-1

*/

ll T[3000000];

void update(ll node,ll s,ll e,ll id,ll value)
{

	if((id < s) || (id > e) || (s > e))
		return;
	
	if(s==e)
	{
		T[node]=value;
		return;	
	}
	update(node*2,s,(s+e)/2,id,value);
	update(node*2+1,(s+e)/2+1,e,id,value);

	T[node]=min(T[node*2],T[node*2+1]);
}


ll query(ll node,ll s,ll e,ll S,ll E)
{
	if((s > E) || (e < S) || (s > e))
		return LONG_MAX;

	if((s >= S) && (e <= E))
		return T[node];

	return min(query(node*2,s,(s+e)/2,S,E),query(node*2+1,(s+e)/2+1,e,S,E));
}

int main()
{
	ll n,q,i,f,val,x,y,k;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> val;
		val*=-1;
		update(1,0,n-1,i,val);
	}
	cin >> k;
	for(i=0;i<=n-k;i++)
		cout << -1*query(1,0,n-1,i,i+k-1) << " ";
	return 0;
}

