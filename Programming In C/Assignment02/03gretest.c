#include<stdio.h>
 void main()
{
	int a,b,c;
	printf("enter frist num: ");
	scanf("%d",&a);
	printf("enter second num: ");
	scanf("%d",&b);
	printf("enter thard num: ");
	scanf("%d",&c);
	if(a>b&&a>c)
	 {
	   printf("%d is gretest",a);	
	  }
	  else
	   {
	  	 if(a<b&&c<b)
	  	  {
	  	  printf("%d is gretest",b);
	       }
	    
	     else
	      {
	       printf("%d is gretest",c);	
		   }
	    }
}