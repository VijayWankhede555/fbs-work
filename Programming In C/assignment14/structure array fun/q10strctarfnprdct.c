#include<stdio.h>
typedef struct product
{
	int id;
	char name[50];
	int qua;
	float price;
}product;
void storeproduct(product*parr,int size);
void displayproduct(product*parr,int size);
void main()
{
   struct product parr[5];
         product pbrr[15];
   storeproduct(parr,5);
    storeproduct(pbrr,15);
   displayproduct(parr,5);
   displayproduct(pbrr,15);
   
}
void storeproduct(product*parr,int size)
{
	 for(int i=0;i<size;i++)
   {	
	printf("id: ");
	scanf("%d",&parr[i].id);
	printf("name: ");
	scanf("%s",parr[i].name);
	printf("quantity: ");
	scanf("%d",&parr[i].qua);
	printf("price: ");
	scanf("%f",&parr[i].price);
   }
}
void displayproduct(product*parr,int size)
{
  for(int i=0;i<size;i++)
   {
	printf("id:%d\n",parr[i].id);
	printf("name:%s\n",parr[i].name);
	printf("quantity:%d\n",parr[i].qua);
	printf("price:%f\n",parr[i].price);
   }
}





