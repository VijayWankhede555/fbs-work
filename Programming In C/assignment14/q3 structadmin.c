#include<stdio.h>
struct admin
{
	int id;
	char name[50];
	double sal;
	double allo;
};
void main()
{
	double total;
	struct admin a1;
	printf("...enter admin details...\n");
	printf("id: ");
	scanf("%d",&a1.id);
	printf("name: ");
	scanf("%s",a1.name);
	printf("salary: ");
	scanf("%lf",&a1.sal);
	printf("rental: ");
	scanf("%lf",&a1.allo);
	printf("...admin detail...\n");
	printf("id:%d\n",a1.id);
	printf("name:%s\n",a1.name);
	printf("salary:%lf\n",a1.sal);
	printf("allowance:%lf\n",a1.allo);	
}