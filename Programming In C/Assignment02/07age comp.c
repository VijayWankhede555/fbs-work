#include<stdio.h>
void main()
{
	int age;
	printf("enter age: ");
	scanf("%d",&age);
	if(age<12)
	 {
	 	printf("child");
	  }
	  else
	   {
	   	if(age<=19&&age>=12)
	   	 {
	   	 	printf("teenager");
			}
			else
			 {
			   if(age<=59&&age>=20)
			    {
			    	printf("adult");
			     }
			     else
			      {
			      	printf("senior");
				   }
				
			  }
	    }
}