#include<stdio.h>
typedef struct student
{
 int roll;
 char name[50];
 int marks;
 	
}student;
void  storestudent(student*sarr,int size);
void  displaystudent(student*sarr,int size);
void main()
{
	struct student sarr[5];
	struct student sbrr[10];
	struct student scrr[15];
	 printf("enter student detail: \n");
	 storestudent(sarr,5);
	 storestudent(sbrr,10);
	 storestudent(scrr,15);
     printf("student details\n");
     displaystudent(sarr,5);
     displaystudent(sbrr,10);
     displaystudent(scrr,15);
	    
}
void  storestudent(student*sarr,int size)
{
	 for(int i=0;i<size;i++)
	 {
	   printf("enter roll num: ");
	   scanf("%d", &sarr[i].roll);
	   printf("enter name: ");
	   scanf("%s", sarr[i].name);
	   printf(" sub marks: ");
	   scanf("%d",&sarr[i].marks);
     }
	
}
void displaystudent(student*sarr,int size)
{
	for(int i=0;i<size;i++)
     {
	   printf("Id:%d\n",sarr[i].roll);
	   printf("name:%s\n",sarr[i].name);
	   printf("marks:%d \n",sarr[i].marks);
     }
}






