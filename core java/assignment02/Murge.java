package Patterns;

class Murge{

	public static void main(String[] args) {
		int arr[]= {12,3,45,65,1};
		int arr1[]= {23,33,53,43,63};
		int arr2[]=new int [10];
		
		for(int i=0;i<5;i++)
		{
			arr2[i]=arr[i];
		}
		for(int i=0;i<5;i++)
		{
			arr2[i+5]=arr1[i];
		}
		System.out.println("merge arry");
		for(int i=0;i<10;i++)
		{
			System.out.println(arr2[i]);
		}

	}

}
