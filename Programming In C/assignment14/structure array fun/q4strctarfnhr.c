#include<stdio.h>
typedef struct hr
{
  int id;
  char name[50];
  float sal;
  float comi;	
}hr;
void storehr(hr*harr,int size);
void displayhr(hr*harr,int size);
void main()
{
	struct hr harr[5];
	       hr hbrr[10];
	       hr hcrr[15];
	printf("...hr information...\n");
     storehr(harr,5);
     storehr(hbrr,10);
     storehr(hcrr,15);
	printf("...hr information...\n");
     displayhr(harr,5);
      displayhr(hbrr,10);
       displayhr(hcrr,15);
}
void storehr(hr*harr,int size)
{
	for(int i=0;i<size;i++)
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
}
void displayhr(hr*harr,int size)
{
   for(int i=0;i<5;i++)
   {
	printf("hr id:%d\n",harr[i].id);
	printf("name:%s\n",harr[i].name);
	printf("salary:%f\n",harr[i].sal);
	printf("commision:%f\n",harr[i].comi);
   }	
}










