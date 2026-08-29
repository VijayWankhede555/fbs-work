#include<stdio.h>
struct hr
{
	int id;
	char name[50];
	float salary,commi;
};
struct hr storehr();
void displayhr(struct hr h1);
void main()
{
	struct hr h1;
	h1=storehr();
	displayhr(h1);
}
struct hr storehr()
{
	struct hr h;
	printf("id:");
	scanf("%d",&h.id);
	printf("name:");
	scanf("%s",h.name);
	printf("salary:");
	scanf("%f",&h.salary);
	printf("commission:");
	scanf("%f",&h.commi);
	return h;
}
void displayhr(struct hr h1)
{
	printf("id:%d\n",h1.id);
	printf("name:%s\n",h1.name);
	printf("salary:%f\n",h1.salary);
	printf("commision:%f",h1.commi);
}