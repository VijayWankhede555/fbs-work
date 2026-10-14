package Patterns;

class Minmax {

	public static void main(String[] args) {
		int arr[]= {23,44,56,76,7};
		
		int min=arr[0];
		int max=arr[0];
		for(int i=0;i<5;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
			
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		System.out.println("minimum arry element:"+min);
		System.out.println("maximum arry element: "+max);
	}

}
