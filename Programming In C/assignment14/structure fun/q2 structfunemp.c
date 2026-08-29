#include<stdio.h>
struct employee
{
	int id;
	char name[50];
	float salary;
};
struct employee storeemployee();
void displayemployee(struct employee e1);
void main()
{
	struct employee e1,e2,e3;
	e1=storeemployee();
	displayemployee(e1);	
}
struct employee storeemployee()
{
	struct employee temp;
	printf("id:");
	scanf("%d",&temp.id);
	printf("name:");
	scanf("%s",temp.name);
	printf("salary:");
	scanf("%f",&temp.salary);
	return temp;
}
void displayemployee(struct employee e1)
{
	printf("id:%d\n",e1.id);
	printf("name:%s\n",e1.name);
	printf("salary:%f",e1.salary);
	
}