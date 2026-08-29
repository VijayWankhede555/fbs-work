#include<stdio.h>
typedef struct sales
{
	int id;
    char name[100];
    float sal;
    float insen;
    int targ;
}sales;
void storesales(sales*sarr,int size);
void displaysales(sales*sarr,int size);
void main()
{
	
   sales sarr[5];
   sales sbrr[10];
   sales scrr[15];
  printf("...enter manager information...\n");
  storesales(sarr,5);
   storesales(sbrr,10);
    storesales(scrr,15);
  printf("manager details..\n");
  displaysales(sarr,5);
  displaysales(sbrr,10);
  displaysales(scrr,15);
}
void storesales(sales*sarr,int size)
{
	for(int i=0;i<size;i++)
  {
  printf("id:");
  scanf("%d",&sarr[i].id);
  printf("name: ");
  scanf("%s",sarr[i].name);
  printf("sal: ");
  scanf("%f",&sarr[i].sal);
  printf("insentive: ");
  scanf("%f",&sarr[i].insen);
  printf("target: ");
  scanf("%d",&sarr[i].targ);
 }
}
void displaysales(sales*sarr,int size)
{
	for(int i=0;i<size;i++)
  {
  	printf("id:%d\n",sarr[i].id);
   printf("name:%s\n",sarr[i].name);
   printf("salary:%f\n",sarr[i].sal);
   printf("insentive:%f\n",sarr[i].insen);
   printf("target:%f\n",sarr[i].targ);
  } 
}











