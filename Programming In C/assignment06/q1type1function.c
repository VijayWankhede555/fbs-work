#include<stdio.h>
void ages();
void evn();
void palin();
void leap();
void vowel();
void upp();
void salary();//1st
void op();
void triangle();
void gretest();
void result();
void std();
void sum();
void comp();
void main()
{ 
 ages();
 evn();
 palin();
 leap();
 vowel();
 upp();
 salary();
 op();
 triangle();
 gretest();	
 result();
 std();
 sum();
 comp();
}
void ages()
{
	int age;
	printf("enter a age: ");
	scanf(" %d",&age);
	if(age>=18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
	printf("\n");
}
void evn()
{
	int num;
	printf("enter a number");
	scanf(" %d",&num);
	if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	printf("\n");
}
void palin()
{
	int num,middle,last;
	printf("enter three digits number");
	scanf(" %d",&num);
    middle=num/100;
	last=num%10;
	if(middle==last)
	{
		printf("%d is a palindrome number",num);
	}
	else
	{
		printf("%d is not palindrome number",num);
	}
	printf("\n");
}
void leap()
{
	int yr;
	printf("enter a year");
	scanf(" %d",&yr);
	if((yr%400==0) || (yr%4==0&&yr%100!=0))
	{
		printf(" %d year is leap year",yr);
	}
	else
	{
		printf("%d  year is not leap year",yr);
	}
	printf("\n");
}
void vowel()
{
	char ch;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is consonant",ch);
	}
	printf("\n");
}
void upp()
{
	char ch;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("this charector is uppercase");
	}
	else
	{
		printf("this charector is lowercase");
	}
	printf("\n");
}
void salary()
{
  double bs,ts,da,hra,ta;
  printf("enter basic salary: ");
  scanf(" %lf",&bs);
  if(bs<=5000)
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
}
void op()
{
	printf("\n");
    int num, num1;
    char op;

    printf("Enter first number: ");
    scanf(" %d", &num);

    printf("Enter second number: ");
    scanf("%d", &num1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d", num + num1);

    else if(op == '-')
        printf("Result = %d", num - num1);

    else if(op == '*')
        printf("Result = %d", num * num1);

    else if(op == '/')
    {
        if(num1 != 0)
            printf("Result = %d", num / num1);
        else
            printf("Division by zero is not possible.");
    }

    else if(op == '%')
    {
        if(num1 != 0)
            printf("Result = %d", num % num1);
        else
            printf("Modulo by zero is not possible.");
    }

    else
    {
        printf("Invalid operator.");
    }
  printf("\n");  
}
void triangle()
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
    printf("\n");
}
void gretest()
{
	int a,b,c;
	printf("enter frist num: ");
	scanf(" %d",&a);
	printf("enter second num: ");
	scanf("%d",&b);
	printf("enter thard num: ");
	scanf("%d",&c);
	if(a>b&&a>c)
	 {
	   printf("%d is gretest",a);	
	  }
	  else
	   {
	  	 if(a<b&&c<b)
	  	  {
	  	  printf("%d is gretest",b);
	       }
	    
	     else
	      {
	       printf("%d is gretest",c);	
		   }
	    }
	    printf("\n");
}
void result()
{ 
  int mrk;
  printf("enter mark");
  scanf(" %d",&mrk);
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
	  printf("\n");
}
void std()
{
  int dis,amt,t;
  char ch;
  printf("enter amount: ");
  scanf(" %d",&amt);
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
	   printf("\n"); 
}
void sum()
{
	int num;
	printf("enter number:");
	scanf(" %d",&num);
	if(num%3==0&&num%5==0)
	{
		printf("divisible by both 3 and 5");
	}
	else
	{
	 if(num%3==0)
	 {
	 	printf("Divisible by 3 but not by 5 ");
    	}
	   else
	    {
	   	  if(num%5==0)
	   	   {
	   	  	  printf("divisible by 5 but not by 3");
			}
			 else
			   {
			  	
				      printf("divisible by none");	
					
			    }
	    }
    }
    printf("\n");
}
void comp()
{
	int age;
	printf("enter age: ");
	scanf(" %d",&age);
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