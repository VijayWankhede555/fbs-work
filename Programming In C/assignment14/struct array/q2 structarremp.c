#include<stdio.h>
struct emp
{
	int id;
	char name[50];
	double sal;
};
void main()
{
  struct emp earr[5];
  printf("enter employee information\n");
  for(int i=0;i<5;i++)
  {
   printf("  id: ");
   scanf("%d",&earr[i].id);
   printf("name: ");
   scanf("%s",earr[i].name);
   printf("salary:");
   scanf("%lf",&earr[i].sal);
  }
  printf("...employee incormation...\n");
  for(int i=0;i<5;i++)
  {
   printf("emp id:%d\n",earr[i].id);
   printf("emp name:%s\n",earr[i].name);
   printf("emp salary:%lf\n",earr[i].sal);
  }
}