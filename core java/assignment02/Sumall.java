package Patterns;

class Sumall {

	public static void main(String[] args) {
		int arr[]= {23,4,55,56,77};
		int sum=0;
		
		for(int i=0;i<5;i++)
		{
			sum=sum+arr[i];
		}
		System.out.println("sum of all numbers:"+ sum);

	}

}
