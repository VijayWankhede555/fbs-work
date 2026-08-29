#include<stdio.h>
struct product
{
	int id;
	char name[50];
	int qua;
	float price;
};
void main()
{
   struct product parr[5];
   for(int i=0;i<5;i++)
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
   for(int i=0;i<5;i++)
   {
	printf("id:%d\n",parr[i].id);
	printf("name:%s\n",parr[i].name);
	printf("quantity:%d\n",parr[i].qua);
	printf("price:%f\n",parr[i].price);
   }
}