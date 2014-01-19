import java.io.*;
class icpc
{
	public static int cmp(String a,String b)
	{
		int la,lb,i;
		char ch;
		la=a.length();
		lb=b.length();
		int arr[]=new int[26];
		int brr[]=new int[26];
		for(i=0;i<la;i++)
		{
			ch=a.charAt(i);
			if(ch>='a' && ch<='z')
				arr[ch-'a']++;
			else if(ch>='A' && ch<='Z')
				arr[ch-'A']++;
		}
		for(i=0;i<lb;i++)
		{
			ch=b.charAt(i);
			if(ch>='a' && ch<='z')
				brr[ch-'a']++;
			else if(ch>='A' && ch<='Z')
				brr[ch-'A']++;
		}
		for(i=0;i<26;i++)
		{
			if(arr[i]!=brr[i])
			{
				return (arr[i]-brr[i]);
			}
		}
		return 0;
	}
		
		
			

public static String[] mergeSort(String a[],int n)
{
	int i;
	if(n==1)
		return a;
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
		String L[]=new String[n1];
		String R[]=new String[n2];
		for(i=0;i<n1;i++)
			L[i]=a[i];
		for(i=0;i<n2;i++)
			R[i]=a[n1+i];
		L=mergeSort(L,n1);
		R=mergeSort(R,n2);
		a=merge(a,L,n1,R,n2);
		return a;
	}
}

public static String[] merge(String a[],String L[],int n1,String R[],int n2)
{
	int i,j,k;
	i=j=k=0;
	while(i<n1 && j<n2)
	{
		if(cmp(L[i],R[j])>0)
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
	return a;
}
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t,n,i,k;
		t=Integer.parseInt(br.readLine());
		for(k=1;k<=t;k++)
		{
			n=Integer.parseInt(br.readLine());
			String a[]=new String[n];		
			for(i=0;i<n;i++)
			{
				a[i]=br.readLine();
			}
			System.out.println("case: "+k);
			a=mergeSort(a,n);
			for(i=0;i<n;i++)
			{
				System.out.println(a[i]);
			}
		}
	}
}
