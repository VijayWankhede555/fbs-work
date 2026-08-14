#include <stdio.h>
void arms(int i,int* n,int temp,int sum,int* num,int count,int* power,int j);
void prime(int ii,int* no,int jj,int fact);
void perf(int* a,int s,int v,int ssum);
void strong(int b,int* n1,int* r12,int suum,int teemp);
void main()
{
	int i,n,temp,sum,num,count,power,j;
    printf("Enter num: ");
    scanf("%d",&n);
    arms(i,&n,temp,sum,&num,count,&power,j);
    
    int ii,no,jj,fact;
	printf("enter no");
	scanf("%d",&no);
	prime(ii,&no,jj,fact);
	
	int a;
	int s,v,ssum=0;
	printf("enter no");
	scanf("%d",&a);
	perf(&a,s,v,ssum);
	
	int b,n1,r12,suum,teemp;
	printf("enter num");
	scanf("%d",&n1);
	strong(b,&n1,&r12,suum,teemp);
	
}
void arms(int i,int* n,int temp,int sum,int* num,int count,int* power,int j)
{
   
    for(i=1;i<=*n;i++)
    {
        temp = i;
        count = 0;
        while(temp > 0)
        {
            count=count+1;
            temp=temp/10;
        }

         temp=i;
         sum=0;
        while(temp>0)
        {
            *num=temp%10;
            *power=1;

            for(j=1;j<=count;j++)
            {
                *power=*power * *num;
            }

            sum=sum+*power;
            temp=temp/10;
        }

        if(sum==i)
        {
            printf("%d\n",i);
        }
    }

}
void prime(int ii,int* no,int jj,int fact)
{
	for(ii=2;ii<=*no;ii++)
	 {
	 	fact=0;
	 	for(jj=2;jj<ii;jj++)
	 	{
	 	if(ii%jj==0)
	 	 {
	 	 	fact=1;
	 	 	break;
		  }
     	}  
	 
	 if(fact==0)
	 {
	  printf("%d\n",ii);
     }
    }   
}
void perf(int* a,int s,int v,int ssum)
{

	for(s=1;s<=*a;s++)
	 {
	 	ssum=0;
	 	for(v=1;v<s;v++)
	 	 {
	 	 	if(s%v==0)
	 	 	 {
	 	 	 	ssum=ssum+v;
			   }
		  }
		  if(ssum==s)
		   {
		   	printf("%d\n",s);
		   }
	 }
	 
}
void strong(int b,int* n1,int* r12,int suum,int teemp)
{
	
	 for(b=1;b<=*n1;b++)
	 {
	   teemp=b;
	   suum=0;
	   while(teemp>0)
	   {
	 	 int rem=teemp%10;
	 	 int fact=1;
	 	 while(rem>1)
	 	  {
	 		fact=fact*rem;
	 		rem--;
		   }
	 	   suum=suum+fact;
	 	   teemp=teemp/10;
	    }
	    if(suum==b)
	    {
	  	printf("%d\n",b);
	    }
    }
}
