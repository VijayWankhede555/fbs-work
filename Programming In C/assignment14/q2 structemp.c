#include<stdio.h>
struct emp
{
	int id;
	char name[50];
	double sal;
};
void main()
{
	double total;
  struct emp e1;
  printf("enter employee information\n");
  printf("  id: ");
  scanf("%d",&e1.id);
  printf("name: ");
  scanf("%s",e1.name);
  printf("salary:");
  scanf("%lf",&e1.sal);

  printf("...employee incormation...\n");
  printf("emp id:%d\n",e1.id);
  printf("emp name:%s\n",e1.name);
  printf("emp salary:%lf\n",e1.sal);
  
}