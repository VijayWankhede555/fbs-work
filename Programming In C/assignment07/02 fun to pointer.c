#include<stdio.h>
void sum(int* r);
void table(int* tab);
void add(int* i,int* sum);
void prime(int* n,int* e,int* stat);
void arms(int* nn,int* num,int* summ);
void per(int* a,int* o,int* ssum);
void factt(int* g,int* fact);
void stro(int* ii,int* suum,int* temp);
void palin(int* ff,int* teemp,int* r1,int* rev);
void fir(int* jas,int* tempp,int* suumm,int* r11,int* r2);
void main()
{
	int r=1;
   sum(&r);
  
  int tab=5;
   table(&tab);
   
   int i=1,sum=0;
   add(&i,&sum);
   
   int n=31,e=2,stat=0;
    prime(&n,&e,&stat);
    
    int nn=153,num,summ=0;
    arms(&nn,&num,&sum);
	
	int a=28;
    int o=1,ssum=0;
  	per(&a,&o,&ssum); 
	  
	int g=5,fact=1;
  	factt(&g,&fact);
	  
	int ii=145,suum=0,temp;
    stro(&ii,&suum,&temp);
	
	int ff=121,teemp,r1,rev=0;
    palin(&ff,&teemp,&r1,&rev);
	
	int jas=12345,tempp,suumm,r11,r2;
	fir(&jas,&tempp,&suum,&r11,&r2);     
}
void sum(int* r)
{
	 while(*r<=10)
	{
		printf("%d\n",*r);
		*r++;
	}
	printf("\n");
}
void table(int* tab)
{
	while(*tab<=50)
	 {
	 	if(*tab%5==0)
	 	printf("%d\n",*tab);
	 	*tab++;
	 }printf("\n");
}
void add(int* i,int* sum)
{
	while(*i<=5)
	 {
	 	*sum=*sum+*i;	
	 	*i++;
	 
	 }
	 printf("sum=%d",*sum);
	 printf("\n");
}
void prime(int* n,int* e,int* stat)
{
	while(*e<*n)
	 {
	 	if(*n%*e==0)
	 	{
		 *stat=1;
		 break;	 	 
	     }
	    *e++;
	  }
	  if(*stat==0)
	  printf("prime");
	  else
	  printf("not prime");
	  printf("\n");
}
void arms(int* nn,int* num,int* summ)
{
    int* temp=nn;
    while(*temp>0)
    {
        *num=*temp % 10;
        *summ=*summ+(*num * *num * *num);
        *temp=*temp/10;
    }

    if(*summ==*nn)
    {
        printf("Armstrong");
     }
     else
      {
        printf("Not Armstrong");
       }printf("\n");
}
void per(int* a,int* o,int* ssum)
{

    while(*o<*a)
    {
        if(*a%*o==0)
        {
            *ssum=*ssum+*o;
        }
        *o++;
    }

    if(*ssum==*a)
    {
        printf("Perfect");
    }
    else
    {
        printf("Not Perfect");
    }printf("\n");
}
void factt(int* g,int* fact)
{
	while(*g>0)
	 {
	 	*fact=*fact * *g;
	 	*g--;
	 }
	 printf("factorial=%d",*fact);
	 printf("\n");
}
void stro(int* ii,int* suum,int* temp)
{
	 *temp=*ii;
	while(*ii>0)
	 {
	 	 int rem=*ii%10;
	 	 int facct=1;
	 	 while(rem>1)
	 	{
	 		facct=facct*rem;
	 		rem--;
		 }
	 	 *suum=*suum+facct;
	 	 *ii=*ii/10;
	    }
	  if(*suum==*temp)
	  {
	  	printf("strong");
	  }
	  else 
	   {
	  printf("not strong");
        }printf("\n");
}
void palin(int* ff,int* teemp,int* r1,int* rev)
{
	*teemp=*ff;
	while(*ff>0)
	{ 
	 *r1=*ff%10;
	 *rev=*rev*10+*r1;
	 *ff=*ff/10;
	}
	if(*teemp==*rev)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}printf("\n");
}
void fir(int* jas,int* tempp,int* suumm,int* r11,int* r2)
{  
	*tempp=*jas;
    	*r11=*jas%10;
    	while(*tempp>=10)
    	{
    	  *tempp=*tempp/10;
         }
         *suumm=*tempp+*r11;
         printf("sum=%d",*suumm);
}
