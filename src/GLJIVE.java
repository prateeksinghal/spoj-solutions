import java.io.*;
class mario
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int i,n,j,temp,sum,max;
		String s="";
		int a[]=new int[10];
		for(i=0;i<10;i++)
			a[i]=Integer.parseInt(br.readLine());
		n=1<<10;
		temp=2000;
		int arr[]=new int[n-1];
		for(i=1;i<n;i++)
		{
			s=Integer.toBinaryString(i);
			sum=0;
			for(j=s.length();j<10;j++)
				s="0"+s;
			for(j=0;j<s.length();j++)
			{
				if(s.charAt(j)=='0')
					break;
				if(s.charAt(j)=='1')
				{
					sum=sum+a[j];
				}
			}
			if(Math.abs(sum-100)<temp)
				temp=Math.abs(sum-100);
			arr[i-1]=sum;
		}
		max=-1;
		for(i=0;i<n-1;i++)
		{
			if(Math.abs(arr[i]-100)==temp && arr[i]>max)
				max=arr[i];
		}
		System.out.print(max);
	}
}
