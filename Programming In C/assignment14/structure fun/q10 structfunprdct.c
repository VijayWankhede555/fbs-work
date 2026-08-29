#include<stdio.h>
struct product
{
	int id,qua;
	char name[50];
	float price;
	
};
struct product sproduct();
void displayproduct(struct product p1);
void main()
{
	struct product p1;
	p1=sproduct();
	displayproduct(p1);
}
struct product sproduct()
{
	struct product p;
	printf("id:");
	scanf("%d",&p.id);
	printf("name:");
	scanf("%s",p.name);
	printf("quantity:");
	scanf("%d",&p.qua);
	printf("price:");
	scanf("%f",&p.price);
	return p;
}
void displayproduct(struct product p1)
{
  printf("id:%d\n",p1.id);	
  printf("name:%s\n",p1.name);
  printf("quantity:%d\n",p1.qua);
  printf("price:%f",p1.price);

}