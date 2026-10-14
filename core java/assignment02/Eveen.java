package Patterns;

class Eveen {

	public static void main(String[] args) {
		int arr[]={23,45,67,98,34};
		int i;
		
		for(i=0;i<5;i++)
		{
			if(arr[i]%2==0)
			{
			  System.out.println("even number is:"+ arr[i]);	
			}
		}
		for(i=0;i<5;i++)
		{
			if(arr[i]%2!=0)
			{
				System.out.println("odd number is:"+ arr[i]);
			}
		}

	}

}
