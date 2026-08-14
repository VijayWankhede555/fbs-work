#include<stdio.h>
int summ();
int prime();
int arm();
int per();
int fact();
int stro();
int pali();
int sam();
void main()
{
	int sa=summ();
 printf("sum=%d",sa);
 
 printf("\n");
 int stat=prime();
 if(stat==0)
	  printf("prime");
	  else
	  printf("not prime");
	  
	  printf("\n");
 int a=arm();
 if(a==0)
 {
 	printf("Armstrong");
 } 
 
    printf("\n");
	int p=per();
	if(p==0)
	{
	  printf("Perfect");	
	}
	else
	{
		printf("Not Perfect");
	}
	
	printf("\n");	
  int f=fact();
  printf("factorial=%d",f);
  
  printf("\n");
  int s=stro();
  if(s==0)
  {
  	printf("strong");
  }
  else
  {
  	printf("not strong");
  }
  
  printf("\n");
  int pa=pali();
  if(pa==0)
  {
  	printf("palindrome");
  }
  else
  {
  	printf("not palindrome");
  }
  
  printf("\n");
  int ss=sam();
  printf("sum=%d",ss);

}
//main ends here

int summ()
{
	int i=1,sum=0;
	while(i<=5)
	 {
	 	sum=sum+i;	
	 	i++;
	 
	 }
	 return sum;
}
int prime()
{
	int n=7,i=2,stat=0;
	while(i<n)
	 {
	 	if(n%i==0)
	 	{
		 stat=1;
		 break;	 	 
	     }
	    i++;
	  }
	  return stat;
}
int arm()
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
        return 0;
     }
     else
      {
        printf("Not Armstrong");
       }
}
int per()
{
    int n=28;
    int i=1,sum=0;

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int fact()
{
	int n=5,fact=1;
	while(n>0)
	 {
	 	fact=fact*n;
	 	n--;
	 }
	 return fact;
}
int stro()
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
	  	return 0;
	  }
	  else 
	   {
	     return 1;
        }
}
int pali()
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
		return 0;
	}
	else
	{
		return 1;
	}
}
int sam()
{
	int n=12345,temp,sum,r1,r2;
	temp=n;
    	r1=n%10;
    	while(temp>=10)
    	{
    	  temp=temp/10;
         }
         sum=temp+r1;
         return sum;
}

	
