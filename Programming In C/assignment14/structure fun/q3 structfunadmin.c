#include<stdio.h>
struct admin 
{
	int id;
	char ame[50];
	float sal;
	float allow;
};
struct admin heyadmin();
void displayadmin(struct admin a1);
void main()
{
  struct admin a1;
   a1=heyadmin();
   displayadmin(a1);	
}
struct admin heyadmin()
{
	struct admin s;
	printf("id:");
	scanf("%d",&s.id);
	printf("name:");
	scanf("%s",s.ame);
	printf("salary:");
	scanf("%f",&s.sal);
	printf("allowance:");
	scanf("%f",&s.allow);
	return s;
}
void displayadmin(struct admin a1)
{
	printf("id:%d\n",a1.id);
	printf("name:%s\n",a1.ame);
	printf("salary:%f\n",a1.sal);
	printf("allowance:%f\n",a1.allow);
}