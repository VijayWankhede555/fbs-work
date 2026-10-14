package Patterns;

class Prime {

	public static void main(String[] args) {
		int arr[]= {21,23,45,76,8};
		int i;
		int j;
		int flag;
		
		for(i=0;i<5;i++)
		{
			
			if(arr[i]<2)
			{
				continue;
			}
			flag=0;
			for(j=2;j<arr[i];j++)
			{
				if(arr[i]%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
			  System.out.println("prime number:" + arr[i]);	
			}
			
		}

	}

}
