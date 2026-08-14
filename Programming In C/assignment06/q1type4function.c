#include<stdio.h>
int number(int n);
int comp(int middle,int last);
int leap(int yr);
int vowel(char hh);
int vote(int age);
int upp(char ch);
int salary(double bs);
int calculator(int num, int num1, char op);
int tri(int p,int q,int r);
int gret(int g,int z,int x);
int res(int mrk);
int ds(char c,int amtt);
int div(int nu);
int compare(int ae);
void main()
{
    int n;
	printf("enter a number");
	scanf("%d",&n);
	int a=number(n);
	if(a==1)
	{
		printf("number is even=%d",n);
	}
	else
	{
		printf("number is odd=%d",n);
	} printf("\n");
	
		int num,middle,last;
	printf("enter three digits number");
	scanf("%d",&num);
    middle=num/100;
	last=num%10;
	int b=comp(middle,last);
	if(b==0)
	{
		printf("%d is a palindrome number",num);
	}
	else
	{
		printf("%d is not palindrome number",num);	
	}
	
	printf("\n");
	int yr;
	printf("enter a year");
	scanf("%d",&yr);
	int c=leap(yr);
	if(c==0)
	{
		printf(" %d year is leap year",yr);
	}
	else
	{
		printf("%d  year is not leap year",yr);
	}
	
	printf("\n");
	char hh;
	printf("enter a charector: ");
	scanf(" %c",&hh);
	int v=vowel(hh);
	if(v!=0)
	{
		printf("%c is a vowel",hh);
	}
	else
	{
		printf("%c is consonant",hh);
	}
	
	printf("\n");
    int age;
	printf("enter a age: ");
	scanf("%d",&age);
	int k=vote(age);
	if(k!=0)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
	
	printf("\n");
	char ch;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	int u=upp(ch);
	if(u==0)
	{
		printf(" %c this charector is uppercase",ch);
	}
	else
	{
	   printf(" %c this charector is lowercase",ch);	
	}
	
	 printf("\n");
  double bs,ts,da,hra,ta;
  printf("enter basic salary: ");
  scanf(" %lf",&bs);
  int s=salary(bs);
  if(s==0)
  {
  	da=bs*0.10;
  	ta=bs*0.20;
  	hra=bs*0.25;
  }
  else
  {
  	da=bs*0.15;
  	ta=bs*0.25;
  	hra=bs*0.30;
  }
  ts=bs+da+hra+ta;
  printf("total salary is%lf",ts);

  printf("\n");
    int num, num1, result;
    char op;
    printf("Enter first number: ");
    scanf("%d", &num);
    printf("Enter second number: ");
    scanf("%d", &num1);
    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);
    result = calculator(num, num1, op);
    if(result == -999)
    {
        printf("Invalid operator.");
    }
    else if(result == -888)
    {
        printf("Division by zero is not possible.");
    }
    else
    {
        printf("Result = %d", result);
    }
    
    	printf("\n");
  int p,q,r;
  printf("enter num: ");
  scanf("%d",&p);
  printf("enter num: ");
  scanf("%d",&q);
  printf("enter num: ");
  scanf("%d",&r);
  int tr=tri(p,q,r);
  if(tr==0)
  {
  	printf("this is equilateral triangle");
  }
  else
  {
  	if(tr==1)
  	{
  		printf("this is isosceles triangle");	
	  }
	  else
	  {
	  		printf("this is scalene triangle");
	  }
  }
  
  printf("\n");
    int g,z,x;
	printf("enter frist num: ");
	scanf("%d",&g);
	printf("enter second num: ");
	scanf("%d",&z);
	printf("enter thard num: ");
	scanf("%d",&x);
	int v=gret(g,z,x);
	if(v==0)
	{
		printf("%d is gretest",g);
	}
	else
	{
		if(v==1)
		{
			printf("%d is gretest",z);
		}
		else
		{
			printf("%d is gretest",x);
		}
	}
	
		printf("\n");
	int mrk;
  printf("enter mark");
  scanf("%d",&mrk);
  int l=res(mrk);
  if(l==0)
  {
  	printf("result is Distinction");
  }
  else
  {
  	if(l==1)
  	{
  		printf("result is First Class");
	  }
	  else
	  {
	  	if(l==2)
	  	{
	  		printf("result is Second Class");
		  }
		  else
		  {
		  	if(l==3)
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
   
   	printf("\n");
	int dis,amtt;
	int t;
  char c;
  printf("enter amount: ");
  scanf("%d",&amtt);
  printf("you are student type y or n: ");
  scanf(" %c",&c);
  int dup=ds(c,amtt);
  if(dup==0)
  {
  	   dis=(amtt*20)/100;
   	   printf("discount amount=%d",dis);
   	   t=amtt-dis;
   	   printf("\nfinal price=%d",t);
  }
  else
  {
  	if(dup==1)
  	{
	  
	dis=(amtt*10)/100;
	printf("discount amount=%d",dis);
	t=amtt-dis;
	printf("\nfinal price=%d",t);
    } 
	else
	{
		if(dup==2)
		{
		   dis=(amtt*15)/100;
     		printf("discount amount=%d",dis);
     		t=amtt-dis;
     		printf("\nfinal price=%d",t);	
		}
		
	 } 
	
  }
  
    printf("\n");
    int nu;
	printf("enter number:");
	scanf("%d",&nu);
	int jr=div(nu);
	if(jr==0)
	{
		printf("divisible by both 3 and 5");
	}
	else
	{
		if(jr==1)
		{
			printf("Divisible by 3 but not by 5 ");
		}
		else
		{
			printf("divisible by 5 but not by 3");
		}
	}
	
	printf("\n");
	int ae;
	printf("enter age: ");
	scanf("%d",&ae);
	int aer=compare(ae);
	if(aer==0)
	{
		printf("child");
	}
	else
	{
		if(aer==1)
		{
		 printf("teenager");	
		}
		else
		{
			if(aer==2)
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


int number(int n)
{

	if(n%2==0)
	{
		return 1;
	}
	else
	{
	  return 2;
	} 
}
int comp(int middle,int last)
{

	if(middle==last)
	{
		return 0;
	}
	else
	{
	   return 1;
	}
}
int leap(int yr)
{
    
	if((yr%400==0) || (yr%4==0&&yr%100!=0))
	{
		return 0;
	}
	else
	{
	  return 1;
	}	
}
int vowel(char hh)
{  
	
	if(hh=='A'||hh=='E'||hh=='I'||hh=='O'||hh=='U'
	 ||hh=='a'||hh=='e'||hh=='i'||hh=='o'||hh=='u')
	{
	   return 1;
	}
	else
	{
		return 0;
	}
}
int vote(int age)
{  
	
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int upp(char ch)
{
	if(ch>='A'&&ch<='Z')
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int salary(double bs)
{
  
  if(bs<=5000)
  {
  	return 0;
  }
  else
  {
    return 1;	
  }
  
}
int calculator(int num, int num1, char op)
{
    if(op == '+')
    {
        return num + num1;
    }
    else if(op == '-')
    {
        return num - num1;
    }
    else if(op == '*')
    {
        return num * num1;
    }
    else if(op == '/')
    {
        if(num1 != 0)
            return num / num1;
        else
            return -888;
    }
    else if(op == '%')
    {
        if(num1 != 0)
            return num % num1;
        else
            return -888;
    }
    else
    {
        return -999;
    }
}
int tri(int p,int q,int r)
{
  if(p==q&&q==r)
   {
   	 return 0;
    }
  else
   { 
     if(p==q&&q==r||r==p)
      {
        return 1;
	   }
	   else
	   {
	   	 if(p!=q&&q!=r||r!=p)
	   	   {
	   	  	 return 2;
		    }
		    else
		     {
		      printf("invalid no");	
			  }
	    }
    }
}
int gret(int g,int z,int x)
{
	
	if(g>z&&g>x)
	 {
	   return 0;	
	  }
	  else
	   {
	  	 if(g<z&&x<z)
	  	  {
	  	    return 1;
	       }
	     else
	      {
	        return 2;	
		   }
	    }
}
int res(int mrk)
{ 
 
  if(mrk>=75)
   {
   	 return 0;
    }
    else
     {
      if(mrk>=65)
	   {
	   	 return 1;
		}	
		else
		 {
		   if(mrk>=55)
		  	{
		  		return 2;
			  }
			  else
			   { 
			     if(mrk>=40)
			      {
			      	return 3;
				   }
				  else
				   {
				   	 return 4;
				    }
			    }
		   }
	  }
}
int ds(char c,int amtt)
{
  
  if(c=='y'||c=='Y')
   {
   	if(amtt>500)
   	 {
   	   return 0;
	  }
	  else
	   {
	   	 return 1;
	    }
	     
    }
     else
      {
     	if(amtt>600)
     	{
     		return 2;
		 }
		 else
		  {
		  	printf("no discount");
		   }
       }  
}
int div(int nu)
{
	
	if(nu%3==0&&nu%5==0)
	{
		return 0;
	}
	else
	{
	 if(nu%3==0)
	 {
	 	return 1;
    	}
	   else
	    {
	   	  if(nu%5==0)
	   	   {
	   	  	  return 2;
			}
			 else
			   {
			  	
				      printf("divisible by none");	
					
			    }
	    }
    }
}
int compare(int ae)
{  
	if(ae<12)
	 {
	 	return 0;
	  }
	  else
	   {
	   	if(ae<=19&&ae>=12)
	   	 {
	   	 	return 1;
			}
			else
			 {
			   if(ae<=59&&ae>=20)
			    {
			    	return 2;
			     }
			     else
			      {
			      	return 3;
				   }
				
			  }
	    }
}
	