#include<stdio.h>
struct student
{
 int roll;
 char name[50];
 int marks;
 	
};
void main()
{
	struct student s1;
	 printf("enter student detail: \n");
	 printf("enter roll num: ");
	 scanf("%d", &s1.roll);
	 printf("enter name: ");
	 scanf("%s", s1.name);
	 printf(" sub marks: ");
	 scanf("%d",&s1.marks);
	 printf("Id:%d\n",s1.roll);
	 printf("name:%s\n",s1.name);
	 printf("marks:%d \n",s1.marks);
	    
}