#include<stdio.h>
typedef struct emp
{
	int id;
	char name[50];
	double sal;
}emp;
void storeemp(emp*earr,int size);
void displayemp(emp*earr,int size);
void main()
{
         emp earr[5];
         emp ebrr[10];
         emp ecrr[15];
  printf("enter employee information\n");
  storeemp(earr,5);
  storeemp(earr,10);
  storeemp(earr,15);
  printf("...employee incormation...\n");
  displayemp(earr,5);
  displayemp(earr,10);
  displayemp(earr,15);
}
void storeemp(emp*earr,int size)
{
	for(int i=0;i<size;i++)
  {
   printf("  id: ");
   scanf("%d",&earr[i].id);
   printf("name: ");
   scanf("%s",earr[i].name);
   printf("salary:");
   scanf("%lf",&earr[i].sal);
  }
}
void displayemp(emp*earr,int size)
{
	 for(int i=0;i<size;i++)
  {
   printf("emp id:%d\n",earr[i].id);
   printf("emp name:%s\n",earr[i].name);
   printf("emp salary:%lf\n",earr[i].sal);
  }
}












