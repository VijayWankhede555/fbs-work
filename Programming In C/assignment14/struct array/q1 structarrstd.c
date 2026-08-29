#include<stdio.h>
struct student
{
 int roll;
 char name[50];
 int marks;
 	
};
void main()
{
	struct student sarr[5];
	 printf("enter student detail: \n");
	 for(int i=0;i<5;i++)
	 {
	   printf("enter roll num: ");
	   scanf("%d", &sarr[i].roll);
	   printf("enter name: ");
	   scanf("%s", sarr[i].name);
	   printf(" sub marks: ");
	   scanf("%d",&sarr[i].marks);
     }
     printf("student details\n");
     for(int i=0;i<5;i++)
     {
	   printf("Id:%d\n",sarr[i].roll);
	   printf("name:%s\n",sarr[i].name);
	   printf("marks:%d \n",sarr[i].marks);
     }
	    
}