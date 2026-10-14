package Patterns;

class Search {

	public static void main(String[] args) {
		int arr[]= {12,34,65,77,59};
		int n=77;
		int fact=0;
		
		for(int i=0;i<5;i++)
		{
			if(n==arr[i])
			{
				fact++;
				break;
			}
		}
		if(fact!=0)
		{
		  System.out.println("element found:"+ n);
	    }
	    else
	    {
	      System.out.println("element not found:"+ n);	
		}

	}

}
