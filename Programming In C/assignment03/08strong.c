#include<stdio.h>
void main()
{
	int i=145,r1,sum=0,temp;
	 temp=i;
	while(i>0)
	 {
	 	 int rem=i%10;
	 	 int fact=1;
	 	 while(rem>1)
	 	{
	 		fact=fact*rem;
	 		rem--;
		 }
	 	 sum=sum+fact;
	 	 i=i/10;
	    }
	  if(sum==temp)
	  {
	  	printf("strong");
	  }
	  else 
	   {
	  printf("not strong");
        }
}