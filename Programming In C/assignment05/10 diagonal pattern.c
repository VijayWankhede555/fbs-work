#include<stdio.h>
void main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
	  for(col=1;col<=5;col++)
	  {
	  	if(col==1||row==1||col==5||row==5||row==col)
	  	{
	  		printf("*");
		 }
		 else
		 {
		 	printf(" ");
		 }
	  }
	  printf("\n");
	}
}