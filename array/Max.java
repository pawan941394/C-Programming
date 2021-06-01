import java.util.Scanner;
class Max 
{
	public static void main(String []args)
	{
		Scanner sc=new Scanner(System.in);
		int n;
		
		//to accept the size of array
		
		System.out.println("Enter the array length");
		n=sc.nextInt();
		int arr[]=new int[n];
		
		int k=n*(n-1);
		int arrd[]=new int[k];
		int p=0;
		//to accept aray elements
		
		for(int i=0;i<n;i++)
			arr[i]=sc.nextInt();
		
		//to find the difference
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i!=j)
				{
					arrd[p]=arr[i]-arr[j];
					if (arrd[p]<0)
					arrd[p]=(-1)*arrd[p];
					p++;	
				}
			}
		}
		int max=arrd[0];
		int min=arrd[0];
	    k=n*(n-1);
		
		//errror
		for(int i=0;i<k;i++)
		{
				if(arrd[i]>max)
					max=arrd[i];
			
				if(arrd[i]<min)
					min=arrd[i+1];
		}
		System.out.println(max);
		System.out.println(min);
		int s;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i!=j)
				{
					s=arr[i]-arr[j];
					if (s<0)
					s=(-1)*s;
					if(s==max)
					{
						System.out.println("The pair with maximum diffrence is :- "+arr[i] +"&"+arr[j]);
						break;
					}
					if(s==min)
					{	
						System.out.println("The pair with minimum diffrence is :- "+arr[i] +"&"+arr[j]);
						break;
					}
				}
			}
		}
	}
}