#include<stdio.h>
void main()
{      while(1)
{
    printf("\n");
	int n;
	printf("1.To check number is even or odd. \n");
	printf("2.To check number is prime or not. \n");
	printf("3.To check number is pallindrome or not.\n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number.\n");
	printf("6.To find sum of digits.\n");
	printf("enter number here: ");
	scanf("%d",&n);
	if(n==1)
	{
		int num,count=0;
		printf(".... even or odd ....\n");
		printf("enter number: ");
		scanf("%d",&num);
        for(int i=0;i<num;i++)
        {
        	if(num%2==0)
        	{
        	  count++;
			  	break;
			}
			
		}
		if(count!=0)
		{
			printf("number is even");
		}
		else
		{
			printf("number is odd");
		}
    }
    else
    {
    	if(n==2)
    	{   
    	    int no,fact=0;
    		printf(".... prime or not ....\n");
    		printf("enter number: ");
    		scanf("%d",&no);
    		if(no<=1)
    		{
    			printf("number is not prime");
			}
    		else
    		{
	         for(int i=2;i<no;i++)
	         {
	 	        if(no%i==0)
	 	        {
	 	        	fact++;
	 	        	break;
				}  
             }  
              if(fact==0)
	           {
	             printf("prime");
                }
                else
                 {
                	printf("not prime");
				  }
            }
		}
		else
		{
		  if(n==3)
		  { 
		    int nm,reverse=0;
			printf(".... pallindrome ....\n");
			printf("enter number: ");
			scanf("%d",&nm);
			    int ori=nm;
			for(;nm>0;nm=nm/10)
			{
				int digit=nm%10;
				reverse=reverse*10+digit;
			}
			if(ori==reverse)
			{
				printf("number is pallindrome");
			}
			else
			{
				printf("not pallindrome");
			}
		  }
		  else
		   {
		  	if(n==4)
		  	 {
		  	 	int numm;
		  	   printf(".... positive negitive zero ....\n");
			   printf("enter number: ");
			   scanf("%d",&numm);
			   if(numm>0)
			   {
			   	 printf("number is positive");
				}	
				else
				{
				 if(numm==0)
				 {
				 	printf("number is zero");
				 }
				 else
				 {
				 	printf("number is negative");
				 }
				}
			  }
			  else
			  {
			  	if(n==5)
			  	 { 
			  	   int nnum;
			  	   printf(".... reverse number ....\n");
				   printf("enter number: ");
				   scanf("%d",&nnum);
				   int rev=0,digits;
				   for(;nnum>0;nnum=nnum/10)
				   {
				   	 digits=nnum%10;
				   	 rev=rev*10+digits;
					}
					printf("reverse number=%d",rev);	 	
				 }
				 else
				  {
				  	if(n==6)
				  	{ 
				  	    int nuum,dig,su=0;
				  	  	printf(".... sum of digits ....\n");
				  	  	printf("enter number: ");
				  	  	scanf("%d",&nuum);
				  	  	for(int i=nuum;i>0;i=i/10)
				  	  	{
				  	  		dig=i%10;
				  	  		su=su+dig;
						}
						printf("sum of all digits=%d",su);
					}
					else
					{
						printf("invalid number");
					}
				  }
			  }
			}  
	    }
	}

}printf("\n");
}