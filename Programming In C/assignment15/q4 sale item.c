#include<stdio.h>
typedef struct sale
{
	char name[50];
	float price;
	int quantity;
}sale;
void main()
{
	sale s1[3];
	float total=0;
	printf("enter items\n");
	for(int i=0;i<3;i++)
	{
		printf("items name:");
		scanf("%s",s1[i].name);
		printf("price:");
		scanf("%f",&s1[i].price);
		printf("quantity:");
		scanf("%d",&s1[i].quantity);
		total=total+(s1[i].price*s1[i].quantity);
	}
	printf("total bill\n");
	for(int i=0;i<3;i++)
	{
		printf("item name:%s\nprice:%f\n",s1[i].name,s1[i].price);
		printf("quantity:%d\n",s1[i].quantity);
	}
	printf("total:%f",total);
	
	
}