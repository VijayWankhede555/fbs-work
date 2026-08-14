#include<stdio.h>
/*void even(int num);
void pal(int num,int middle,int last);
void yer(int yr);
void vowel(char ch);
void ag(int age);
void upp(char h);
void sal(double bs,double ts,double da,double hra,double ta);//frist ass end*/
void opp(int nu,int num1,char op);
void tria(int a,int b,int c);
void gret(int e,int f,int g);
void rest(int mrk);
void stdnt(int dis,int amt,int t,char r);
void div (int nm);
void com(int ages);
void main()
{
/*	int num;
	printf("enter a number");
	scanf("%d",&num);
	even(num);

    int n,middle,last;
	printf("enter three digits number");
	scanf("%d",&n);
    middle=n/100;
	last=n%10;
	pal(n,middle,last);
	 
	int yr;
	printf("enter a year");
	scanf("%d",&yr);
	yer(yr);
	
	char ch;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	vowel(ch);
	
	int age;
	printf("enter a age: ");
	scanf("%d",&age);
	ag(age);
	 
	char h;
	printf("enter a charector: ");
	scanf(" %c",&ch);
	upp(h);
	
    double bs,ts,da,hra,ta;
    printf("enter basic salary: ");
    scanf("%lf",&bs);
    sal(bs,ts,da,hra,ta);*/
    
    int nu, num1;
    char op;
    printf("Enter first number: ");
    scanf("%d", &nu);
    printf("Enter second number: ");
    scanf("%d", &num1);
    printf("Enter operator (+,-,*,/,%%): ");
    scanf(" %c", &op);
    opp(nu,num1,op);
    
    int a,b,c;
   printf("enter num: ");
   scanf("%d",&a);
   printf("enter num: ");
   scanf("%d",&b);
   printf("enter num: ");
   scanf("%d",&c);
   tria(a,b,c);
  
   int d,e,f;
   printf("enter frist num: ");
   scanf("%d",&d);
   printf("enter second num: ");
   scanf("%d",&e);
   printf("enter thard num: ");
   scanf("%d",&f);
   gret(d,e,f);
   
   int mrk;
  printf("enter mark");
  scanf("%d",&mrk);
  rest(mrk);
  
  int dis,amt,t;
  char r;
  printf("enter amount: ");
  scanf("%d",&amt);
  printf("you are student type y or n: ");
  scanf(" %c",&r);
  stdnt(dis,amt,t,r);
  
  	int nm;
	printf("enter number:");
	scanf("%d",&nm);
	div(nm);
	
	int ages;
	printf("enter age: ");
	scanf("%d",&ages);
	com(ages);

}
//main ends here....
/*void even(int num)
{
	if(num%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}printf("\n");
}
void pal(int n,int middle,int last)
{
	if(middle==last)
	{
		printf("%d is a palindrome number",n);
	}
	else
	{
		printf("%d is not palindrome number",n);
	}printf("\n");
}
void yer(int yr)
{
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
void vowel(char ch)
{
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
void ag(int age)
{
	
	if(age>=18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}printf("\n");
}
void upp(char h)
{
	if(h>='A'&&h<='Z')
	{
		printf("this charector is uppercase");
	}
	else
	{
		printf("this charector is lowercase");
	}
	printf("\n");
}
void sal(double bs,double ts,double da,double hra,double ta)
{
 
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
  printf("\n");
}*/
void opp(int nu,int num1,char op)
{
    
    if(op == '+')
        printf("Result = %d", nu + num1);

    else if(op == '-')
        printf("Result = %d", nu - num1);

    else if(op == '*')
        printf("Result = %d", nu * num1);

    else if(op == '/')
    {
        if(num1 != 0)
            printf("Result = %d", nu / num1);
        else
            printf("Division by zero is not possible.");
    }

    else if(op == '%')
    {
        if(num1 != 0)
            printf("Result = %d", nu % num1);
        else
            printf("Modulo by zero is not possible.");
    }

    else
    {
        printf("Invalid operator.");
    }
printf("\n");
    
}
void tria(int a,int b,int c)
{
  
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
    } printf("\n");
}
void gret(int d,int e,int f)
{
	
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
	    }printf("\n");
}
void rest(int mrk)
{ 
  
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
}
void stdnt(int dis,int amt,int t,char r)
{
  
  if(r=='y'||r=='Y')
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
       }  printf("\n");
}
void div(int nm)
{

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
    }printf("\n");
}
void com(int ages)
{
	
	if(ages<12)
	 {
	 	printf("child");
	  }
	  else
	   {
	   	if(ages<=19&&ages>=12)
	   	 {
	   	 	printf("teenager");
			}
			else
			 {
			   if(ages<=59&&ages>=20)
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