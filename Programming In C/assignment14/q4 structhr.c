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
	struct hr h1;
	printf("...hr information...\n");
	printf("hr id: ");
	scanf("%d",&h1.id);
	printf("name: ");
	scanf("%s",h1.name);
	printf("salary: ");
	scanf("%f",&h1.sal);
	printf("comission: ");
	scanf("%f",&h1.comi);
	
	printf("...hr information...\n");
	printf("hr id:%d\n",h1.id);
	printf("name:%s\n",h1.name);
	printf("salary:%f\n",h1.sal);
	printf("commision:%f",h1.comi);
	
}