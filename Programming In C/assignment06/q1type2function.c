#include<stdio.h>
int ages();
int even();
int pal();
int leap();
char vowel();
char upp();
double salary(); 
int oper();
int tri();
int grete();
int result();
int std();
int sum();
int comp();
void main()
{
	int x=ages();
 if(x>=18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
	int num=even();
	if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
	int middle,last;
	int n= pal();
	middle=n/100;
	last=n%10;
	if(middle==last)
	{
		printf("%d is a palindrome number",n);
	}
	else
	{
		printf("%d is not palindrome number",n);
	}
	int yr=leap();
	if((yr%400==0) || (yr%4==0&&yr%100!=0))
	{
		printf(" %d year is leap year",yr);
	}
	else
	{
		printf("%d  year is not leap year",yr);
	}
	char ch=vowel();
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("%c is a vowel",ch);
	}
	else
	{
		printf("%c is consonant",ch);
	}
	char h=upp();
	if(h>='A'&&h<='Z')
	{
		printf("this charector is uppercase");
	}
	else
	{
		printf("this charector is lowercase");
	}
	double bs=salary();
	double ts,da,hra,ta;
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
  int num0=oper();
	int num1;
	char op; 
	 printf("Enter second number: ");
    scanf("%d", &num1);

    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);

    if(op == '+')
        printf("Result = %d", num0 + num1);

    else if(op == '-')
        printf("Result = %d", num0 - num1);

    else if(op == '*')
        printf("Result = %d", num0 * num1);

    else if(op == '/')
    {
        if(num1 != 0)
            printf("Result = %d", num0 / num1);
        else
            printf("Division by zero is not possible.");
    }

    else if(op == '%')
    {
        if(num1 != 0)
            printf("Result = %d", num0 % num1);
        else
            printf("Modulo by zero is not possible.");
    }

    else
    {
        printf("Invalid operator.");
    }
  printf("\n"); 
  int a=tri();
  int b,c; 
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
    }printf("\n");
	int d=grete();
	int e,f;
	printf("enter second num: ");
	scanf("%d",&e);
	printf("enter thard num: ");
	scanf("%d",&f);
	if(d>e&&d>f)
	 {
	   printf("%d is gretest",d);	
	  }
	  else
	   {
	  	 if(d<e&&f<e)
	  	  {
	  	  printf("%d is gretest",e);
	       }
	    
	     else
	      {
	       printf("%d is gretest",f);	
		   }
	    }
		printf("\n");
		int mrk=result();
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
	  }printf("\n");
	  int amt=std();
	  int dis,t;
	  char chr;
	  printf("you are student type y or n: ");
  scanf(" %c",&chr);
  if(chr=='y'||chr=='Y')
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
	   int nm=sum();
	   if(nm%3==0&&nm%5==0)
	{
		printf("divisible by both 3 and 5");
	}
	else
	{
	 if(nm%3==0)
	 {
	 	printf("Divisible by 3 but not by 5 ");
    	}
	   else
	    {
	   	  if(nm%5==0)
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
    int age=comp();
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
//main ends here
int ages()
{
	int age;
	printf("enter a age: ");
	scanf(" %d",&age);
	return age;
	
}
int even()
{
	printf("\n");
	int num;
	printf("enter a number");
	scanf(" %d",&num);
	return num;
}
int pal() 
{
	printf("\n");
	int n;
	printf("enter three digits number");
	scanf("%d",&n);
	return n;
}
int leap()
{
	printf("\n");
	int yr;
	printf("enter a year");
	scanf("%d",&yr);
	return yr;
}
char vowel()
{
	printf("\n");
	char ch;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	return ch;
}
char upp()
{
	printf("\n");
	char ch;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	return ch;
}
double salary()
{
	printf("\n");
  double bs;
  printf("enter basic salary: ");
  scanf(" %lf",&bs);
  return bs
}
int oper()
{
	printf("\n");
    int num;
    printf("Enter first number: ");
    scanf(" %d", &num);
     return num;
}
int tri()
{
  int a;
  printf("enter num: ");
  scanf("%d",&a);
  printf("\n");
  return a;
}
int grete()
{
	int d;
	printf("enter frist num: ");
	scanf(" %d",&d);
	printf("\n");
	return d;
}
int result()
{ 
  int mrk;
  printf("enter mark");
  scanf(" %d",&mrk);
  printf("\n");
  return mrk;
}
int std()
{
  int amt;
  printf("enter amount: ");
  scanf(" %d",&amt);
   return amt;
}
int sum()
{
	int n;
	printf("enter number:");
	scanf(" %d",&n);
	return n;
}
int comp()
{
	int age;
	printf("enter age: ");
	scanf(" %d",&age);
	return age;
}
