package Patterns;

class Sumarr {
	public static void main(String[] args) {
		int arr[]= {12,22,34,54,2};
		int arr1[]= {21,33,43,45,6}; 
		int  arr2[]= new int [5];
		
		for(int i=0;i<5;i++)
		{
			arr2[i]=arr[i]+arr1[i];
		}
		System.out.println("sum of two arry\n");
		for(int i=0;i<5;i++)
		{
			System.out.println(arr2[i]);
		}
	}

}
