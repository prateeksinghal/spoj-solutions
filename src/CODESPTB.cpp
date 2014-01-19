/*########################################################################
##########################################################################
###############  To perform Merge Sort Algorithm to sort an Array. #######
###############  Created by: Prateek Singhal                    ##########
###############             2nd year, CSE, LNMIIT               ##########
##########################################################################
########################################################################## */

#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void mergeSort(int*,int);
void merge(int*,int*,int,int*,int);
int c=0;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        c=0;
	int a[200001];
	int i,n;
	cin >> n;
	for(i=0;i<n;i++)
	   cin >> a[i];
	mergeSort(a,n);
    printf("%d\n",c);
	   }
	return 0;
}

void mergeSort(int* a,int n)
{
	int i;
	if(n==1)
		return ;
	else
	{
		int n1,n2;
		if(n%2==0)
		{
			n1=n/2;
			n2=n/2;
		}
		else
		{
			n1=(n-1)/2;
			n2=n-n1;
		}
		int L[n1];
		int R[n2];
		for(i=0;i<n1;i++)
			L[i]=a[i];
		for(i=0;i<n2;i++)
			R[i]=a[n1+i];
		mergeSort(L,n1);
		mergeSort(R,n2);
		merge(a,L,n1,R,n2);
	}
}

void merge(int* a,int* L,int n1,int* R,int n2)
{
	int i,j,k;
	i=j=k=0;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i=i+1;
			k=k+1;
			
		}
		else
		{
			a[k]=R[j];
			j=j+1;
			k=k+1;
			c+=(n1-i);
		}
	}
	if(i>=n1)
	{
		while(j<n2)
		{
			a[k]=R[j];
			k=k+1;
			j=j+1;
		}
	}
	else
	{
		while(i<n1)
		{
			a[k]=L[i];
			k=k+1;
			i=i+1;
		}
	}
}
