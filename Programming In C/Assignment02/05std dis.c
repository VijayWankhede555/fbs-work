#include<stdio.h>
 void main()
{
  int dis,amt,t;
  char ch;
  printf("enter amount: ");
  scanf("%d",&amt);
  printf("you are student type y or n: ");
  scanf(" %c",&ch);
  if(ch=='y'||ch=='Y')
   {
   	if(amt>500)
   	 {
   	   dis=(amt*20)/100;
   	   printf("discount amount=%d",dis);
   	   t=amt-dis;
   	   printf("\nfinal price=%d",t);
	  }
	  else
	   {
	   	 dis=(amt*10)/100;
	   	 printf("discount amount=%d",dis);
	   	 t=amt-dis;
	   	 printf("\nfinal price=%d",t);
	    }
	     
    }
     else
      {
     	if(amt>600)
     	{
     		dis=(amt*15)/100;
     		printf("discount amount=%d",dis);
     		t=amt-dis;
     		printf("\nfinal price=%d",t);
		 }
		 else
		  {
		  	printf("no discount");
		   }
       }  
}