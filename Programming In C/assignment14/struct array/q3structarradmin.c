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
	struct admin aarr[5];
	printf("...enter admin details...\n");
   for(int i=0;i<5;i++)
   {
	printf("id: ");
	scanf("%d",&aarr[i].id);
	printf("name: ");
	scanf("%s",aarr[i].name);
	printf("salary: ");
	scanf("%lf",&aarr[i].sal);
	printf("rental: ");
	scanf("%lf",&aarr[i].allo);
   }
	printf("...admin detail...\n");
	for(int i=0;i<5;i++)
   {
	printf("id:%d\n",aarr[i].id);
	printf("name:%s\n",aarr[i].name);
	printf("salary:%lf\n",aarr[i].sal);
	printf("allowance:%lf\n",aarr[i].allo);	
   }
}