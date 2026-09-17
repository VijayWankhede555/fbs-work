#include<stdio.h>
typedef struct student
{
	char name[50];
	int no;
	float mark,mark1,mark2,total;
	
}student;
void main()
{
  student arr[5];
  printf("enter student details:\n");
  for(int i=0;i<5;i++)
  {
  	printf("roll no:\n");
  	scanf("%d",&arr[i].no);
  	printf("name:\n");
  	fflush(stdin);
  	fgets(arr[i].name, 50, stdin);
  	printf("enter 3 sub marks:\n");
  	scanf("%f %f %f",&arr[i].mark,&arr[i].mark1,&arr[i].mark2);
  	arr[i].total=arr[i].mark+arr[i].mark1+arr[i].mark2;
  }
  float total1=arr[0].total;
  int ind;
  for(int i=0;i<5;i++)
  {
  	if(total1<arr[i].total)
  	{
  		ind=i;
	  }
  }
  printf("maximum student details:\n");
  printf("id:%d\n",arr[ind].no);
  printf("name:%s\n",arr[ind].name);
  printf("makrs:%f %f %f\n",arr[ind].mark,arr[ind].mark1,arr[ind].mark2);
  
}