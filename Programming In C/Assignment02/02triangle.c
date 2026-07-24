#include<stdio.h>
 void main()
{
  int a,b,c;
  printf("enter num: ");
  scanf("%d",&a);
  printf("enter num: ");
  scanf("%d",&b);
  printf("enter num: ");
  scanf("%d",&c);
  if(a==b&&b==c)
   {
   	 printf("this is equilateral triangle");
    }
  else
   { 
     if(a==b&&b==c||c==a)
      {
        printf("this is isosceles triangle");	
	   }
	   else
	   {
	   	 if(a!=b&&b!=c||c!=a)
	   	   {
	   	  	printf("this is scalene triangle");
		    }
		    else
		     {
		      printf("invalid no");	
			  }
	    }
    }
}