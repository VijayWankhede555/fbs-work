#include<stdio.h>
typedef struct book
{
	int id;
	char bname[50];
	char author[50];
	int price;
}book;
void main()
{
   book b1;
  printf("enter info..\n");
  printf("id:");
  scanf("%d",&b1.id);
  printf("book name:");
  scanf("%s",b1.bname);
  printf("author name:");
  scanf("%s",b1.author);
  printf("price:");
  scanf("%d",&b1.id);
  printf("display information..\n");
  printf("id:%d\n",b1.id);
  printf("book name:%s\n",b1.bname);
  printf("author name:%s\n",b1.author);
  printf("price:%d\n",b1.price);
}