#include<stdio.h>
struct hr
{
  int id;
  char name[50];
  float sal;
  float comi;	
};
void main()
{
	struct hr harr[5];
	printf("...hr information...\n");
	for(int i=0;i<5;i++)
  {
	printf("hr id: ");
	scanf("%d",&harr[i].id);
	printf("name: ");
	scanf("%s",harr[i].name);
	printf("salary: ");
	scanf("%f",&harr[i].sal);
	printf("comission: ");
	scanf("%f",&harr[i].comi);
  }
	printf("...hr information...\n");
   for(int i=0;i<5;i++)
   {
	printf("hr id:%d\n",harr[i].id);
	printf("name:%s\n",harr[i].name);
	printf("salary:%f\n",harr[i].sal);
	printf("commision:%f\n",harr[i].comi);
   }
}