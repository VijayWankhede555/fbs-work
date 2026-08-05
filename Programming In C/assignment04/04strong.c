#include<stdio.h>
void main()
{
	int i,n,r1,sum,temp;
	 printf("enter num");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	   temp=i;
	   sum=0;
	   while(temp>0)
	   {
	 	 int rem=temp%10;
	 	 int fact=1;
	 	 while(rem>1)
	 	  {
	 		fact=fact*rem;
	 		rem--;
		   }
	 	   sum=sum+fact;
	 	   temp=temp/10;
	    }
	    if(sum==i)
	    {
	  	printf("%d\n",i);
	    }
    }
}