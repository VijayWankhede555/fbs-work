#include<stdio.h>
typedef struct admin
{
	int id;
	char name[50];
	double sal;
	double allo;
}admin;
void storeadmin(admin*aarr,int size);
void displayadmin(admin*aarr,int size);
void main()
{
	 admin aarr[5];
	 admin abrr[10];
	 admin acrr[15];
	printf("...enter admin details...\n");
    storeadmin(aarr,5);
    storeadmin(abrr,10);
    storeadmin(acrr,15);
	printf("...admin detail...\n");
	displayadmin(aarr,5);
	displayadmin(aarr,10);
	displayadmin(acrr,15);
	
}
void storeadmin(admin*aarr,int size)
{
	for(int i=0;i<size;i++)
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
}
void displayadmin(admin*aarr,int size)
{
	for(int i=0;i<size;i++)
   {
	printf("id:%d\n",aarr[i].id);
	printf("name:%s\n",aarr[i].name);
	printf("salary:%lf\n",aarr[i].sal);
	printf("allowance:%lf\n",aarr[i].allo);	
   }
}












