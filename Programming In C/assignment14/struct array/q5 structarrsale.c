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
	
  struct sales sarr[5];
  printf("...enter manager information...\n");
  for(int i=0;i<5;i++)
  {
  printf("id: ");
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
  printf("manager details..\n");
  for(int i=0;i<5;i++)
  {
  	printf("id:%d\n",sarr[i].id);
   printf("name:%s\n",sarr[i].name);
   printf("salary:%f\n",sarr[i].sal);
   printf("insentive:%f\n",sarr[i].insen);
   printf("target:%f\n",sarr[i].targ);
  } 
  
}