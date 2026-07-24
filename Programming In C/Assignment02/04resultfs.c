#include<stdio.h>
 void main()
{ 
  int mrk;
  printf("enter mark");
  scanf("%d",&mrk);
  if(mrk>=75)
   {
   	 printf("result is Distinction");
    }
    else
     {
      if(mrk>=65)
	   {
	   	 printf("result is First Class");
		}	
		else
		 {
		   if(mrk>=55)
		  	{
		  		printf("result is Second Class");
			  }
			  else
			   { 
			     if(mrk>=40)
			      {
			      	printf("result is pass");
				   }
				  else
				   {
				   	 printf("result is fail");
				    }
			    }
		   }
	  }
}