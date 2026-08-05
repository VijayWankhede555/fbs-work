#include<stdio.h>
void main()
{
	int i,no,j,fact;
	printf("enter no");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	 {
	 	fact=0;
	 	for(j=2;j<i;j++)
	 	{
	 	if(i%j==0)
	 	 {
	 	 	fact=1;
	 	 	break;
		  }
     	}  
	 
	 if(fact==0)
	 {
	  printf("%d\n",i);
     }
    }
     
}
