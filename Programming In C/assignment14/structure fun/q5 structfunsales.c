#include<stdio.h>
struct sales
{
	int id;
	char name[50];
	float salary,ince;
	int target;
};
struct sales storesales();
void displaysales(struct sales s1);
void main()
{
	struct sales s1;
	s1=storesales();
	displaysales(s1);
}
struct sales storesales()
{
	struct sales s;
	printf("id:");
	scanf("%d",&s.id);
	printf("name:");
	scanf("%s",s.name);
	printf("salary:");
	scanf("%f",&s.salary);
	printf("incentive:");
	scanf("%f",&s.ince);
	printf("target:");
	scanf("%d",&s.target);
	return s;
}
void displaysales(struct sales s1)
{
	printf("id:%d\n",s1.id);
	printf("name:%s\n",s1.name);
	printf("salary:%f\n",s1.salary);
	printf("incentive:%f\n",s1.ince);
	printf("target:%d",s1.target);
}