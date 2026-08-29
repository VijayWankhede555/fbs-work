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
	struct product p1;
	printf("id: ");
	scanf("%d",&p1.id);
	printf("name: ");
	scanf("%s",p1.name);
	printf("quantity: ");
	scanf("%d",&p1.qua);
	printf("price: ");
	scanf("%f",&p1.price);
	
	printf("id:%d\n",p1.id);
	printf("name:%s\n",p1.name);
	printf("quantity:%d\n",p1.qua);
	printf("price:%f\n",p1.price);
}