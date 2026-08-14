#include<stdio.h>
void no();
void table();
void add();
void prime();
void arms();
void per();
void fact();
void strong();
void palin();
void fl();
void main()
{
 no();
 table();
 add();
 prime();
 arms();
 per();
 fact();
 strong();
 palin();
 fl();
}
void no()
{
	int n=1;
	while(n<=10)
	{
		printf("%d",n);
		n++;
	}
	printf("\n");
}
void table()
{
	int i=5;
	while(i<=50)
	 {
	 	if(i%5==0)
	 	printf("%d\n",i);
	 	i++;
	 }
    printf("\n");
}
void add()
{
	int i=1,sum=0;
	while(i<=5)
	 {
	 	sum=sum+i;	
	 	i++;
	 
	 }
	 printf("sum=%d",sum);
	 printf("\n");
}
void prime()
{
	int n=27,i=2,stat=0;
	while(i<n)
	 {
	 	if(n%i==0)
	 	{
		 stat=1;
		 break;	 	 
	     }
	    i++;
	  }
	  printf("prime");
	  printf("\n");
	  
}
void arms()
{
    int n=153;
    int temp=n;
    int num,sum = 0;

    while(temp>0)
    {
        num=temp % 10;
        sum=sum+(num*num*num);
        temp=temp/10;
    }

    if(sum==n)
    {
        printf("Armstrong");
     }
     else
      {
        printf("Not Armstrong");
       }
       printf("\n");
}
void per()
{
	int n=28;
	int i=1,sum=0;
	while(i<=n/2)
	 {
	   if(n%i==0)
	    {
	    	sum=sum+i;
			}	
			i++;
	  }
	  if(sum==n)
	   {
	   	 printf("perfect");
	    }
	    else
	     {
	     	printf("not perfect");
		 }
		 printf("\n");
}
void fact()
{
	int n=5,fact=1;
	while(n>0)
	 {
	 	fact=fact*n;
	 	n--;
	 }
	 printf("factorial=%d",fact);
	 printf("\n");
}
void strong()
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
        printf("\n");
}
void palin()
{
	int n=121,temp,r1,rev=0;
	temp=n;
	while(n>0)
	{ 
	 r1=n%10;
	 rev=rev*10+r1;
	 n=n/10;
	}
	if(temp==rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	printf("\n");
}
void fl()
{
	int n=12345,temp,sum,r1,r2;
	temp=n;
    	r1=n%10;
    	while(temp>=10)
    	{
    	  temp=temp/10;
         }
         sum=temp+r1;
         printf("sum=%d",sum);
}