#include<stdio.h>
void min(int* vijay,int s);
void search(int*arr,int ss,int n,int fact);
void summ(int*ar,int si,int sum );
void even(int*array,int siz,int k);
void alternate(int*arr1,int size);
void prime(int*array1,int sz,int ii,int jj,int flag);
void two(int*arri1,int se,int*arri2,int*arri3);
void merge(int*array2,int a,int*array3,int*array4,int b);
void sort(int*vijay1,int sii,int i,int j);
void revers(int*ar1,int ssi);
void main()
{
    int vijay[5];
	printf("enter number: ");
	min(vijay,5);
	
	int arr[5],n,fact=0;
	printf("enter elements: ");
	search(arr,5,n,fact);
	
	int ar[5],sum=0;

	printf("enter element: ");
	summ(ar,5,sum);
	
	int array[5],k;
	printf("enter numbers: ");
	even(array,5,k);
	
	int arr1[5];
	printf(".... enter number ....\n");
	alternate(arr1,5);
	
	int array1[5],ii,jj,flag;
	printf("enter numbers: ");
	prime(array1,5,ii,jj,flag);
	
	int arri1[5],
	   arri2[5], 
	   arri3[5];
	 printf("enter numbers 1st arry:\n ");
	 two(arri1,5,arri2,arri3);
	 
	int array2[5];
	int array3[5];
	int array4[10];
	printf("ente number 1st arry: ");
   merge(array2,5,array3,array4,10);
   
   int vijay1[5],i,j;
   printf("enter number: ");
   sort(vijay1,5,i,j);
   
   int ar1[5];
	printf("enter number: ");
	revers(ar1,5);
}
void min(int* vijay,int s)
{
	for(int i=0;i<s;i++)
	{
		scanf("%d",&vijay[i]);
	}
	int min=vijay[0];
	int max=vijay[0];
	for(int i=0;i<s;i++)
	{
		if(vijay[i]<min)
		{
			min=vijay[i];
		}
		
		if(vijay[i]>max)
		{
			max=vijay[i];
		}
	}
	printf("minimum arry element: %d\n",min);
	printf("maximum arry element: %d",max);
	printf("\n");
}
void search(int*arr,int ss,int n,int fact)
{
	
	for(int i=0;i<ss;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter searching element: ");
	scanf("%d",&n);
	for(int i=0;i<ss;i++)
	{
		if(n==arr[i])
		{
			fact++;
			break;
		}
	}
	if(fact!=0)
	{
	  printf("element found:%d",n);
    }
    else
    {
      printf("element not found:%d",n);	
	}printf("\n");
}
void summ(int*ar,int si,int sum )
{
	
	for(int i=0;i<si;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int i=0;i<si;i++)
	{
		sum=sum+ar[i];
	}
	printf("sum of all numbers: %d",sum);
	printf("\n");
}
void even(int*array,int siz,int k)
{

	for(k=0;k<siz;k++)
	{
		scanf("%d",&array[k]);
	}
	for(k=0;k<siz;k++)
	{
		if(array[k]%2==0)
		{
		  printf("even number is: %d\n",array[k]);	
		}
	}
	for(k=0;k<siz;k++)
	{
		if(array[k]%2!=0)
		{
			printf("odd number is :%d\n",array[k]);
		}
	}
}
void alternate(int*arr1,int size)
{

	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("alternate number:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr1[i]);
	}
}
void prime(int*array1,int sz,int ii,int jj,int flag)
{
	for(ii=0;ii<sz;ii++)
	{
		scanf("%d",&array1[ii]);
	}
	for(ii=0;ii<sz;ii++)
	{
		flag=0;
		if(array1[ii]<2)
		{
			continue;
		}
		for(jj=2;jj<array1[ii];jj++)
		{
			if(array1[ii]%jj==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		  printf("prime number:%d\n",array1[ii]);	
		}
		
	}
}
void two(int*arri1,int se,int*arri2,int*arri3)
{
	
	 for(int i=0;i<se;i++)
	{
		scanf("%d",&arri1[i]);
	}
	 printf("enter number 2nd arry:\n ");
	 for(int i=0;i<se;i++)
	 {
		scanf("%d",&arri2[i]);
	 }
	 for(int i=0;i<se;i++)
	 {
		arri3[i]=arri1[i]+arri2[i];
	 }
	 printf("sum of two arry\n");
	 for(int i=0;i<se;i++)
	 {
		printf("%d\n",arri3[i]);
	 }	
}
void merge(int*array2,int a,int*array3,int*array4,int b)
{
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&array2[i]);
	}
	printf("enter number 2nd arry: ");
	for(int i=0;i<a;i++)
	{
	    scanf("%d",&array3[i]);
	}
	for(int i=0;i<a;i++)
	{
		array4[i]=array2[i];
	}
	for(int i=0;i<a;i++)
	{
		array4[i+5]=array3[i];
	}
	printf("merge arry: ");
	for(int i=0;i<b;i++)
	{
		printf("%d",array4[i]);
	}printf("\n");
}
void sort(int*vijay1,int sii,int i,int j)
{
	
	for(i=0;i<sii;i++)
	{
		scanf("%d",&vijay1[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(vijay1[j]>vijay1[j+1])
			{
			  int temp;
			  temp=vijay1[j];
			  vijay1[j]=vijay1[j+1];
			  vijay1[j+1]=temp;	
			}
		}
	}
	for(i=0;i<sii;i++)
	{
		printf("%d\n",vijay1[i]);
	}printf("\n");	
}
void revers(int*ar1,int ssi)
{
	
	for(int i=0;i<ssi;i++)
	{
		scanf("%d",&ar1[i]);
	}
	printf("revers arry: ");
	for(int i=4;i>=0;i--)
	{
		printf("%d\n",ar1[i]);
	}
}