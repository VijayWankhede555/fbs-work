package Patterns;

class Sort{
	public static void main(String[] args) {
		int arr[]={3,23,67,5,45,1};
		int i,j;
		for(i=0;i<4;i++)
		{
			for(j=0;j<4-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
				  int temp=arr[j];
				  arr[j]=arr[j+1];
				  arr[j+1]=temp;	
				}
			}
		}
		for(i=0;i<5;i++)
		{
			System.out.println(arr[i]);
		}

	}

}
