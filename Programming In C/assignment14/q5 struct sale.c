#include<stdio.h>
struct sales
{
	int id;
    char name[100];
    float sal;
    float insen;
    int targ;
};
void main()
{
	float total;
  struct sales s1;
  printf("...enter magager information...\n");
  printf("id: ");
  scanf("%d",&s1.id);
  printf("name: ");
  scanf("%s",s1.name);
  printf("sal: ");
  scanf("%f",&s1.sal);
  printf("insentive: ");
  scanf("%f",&s1.insen);
  printf("target: ");
  scanf("%d",&s1.targ);
  
  total=s1.sal+s1.insen;
  printf("id:%d\n",s1.id);
  printf("name:%s\n",s1.name);
  printf("salary:%f\n",s1.sal);
  printf("insentive:%f\n",s1.insen);
  printf("target:%f\n",s1.targ);
  printf("total salary:%f\n",total);
  
}