#include<stdio.h>
void main()
{
	int dbms=40,js=35,se=32,dsa=50,stat=49,total;
	float percentage,min=500;
	printf("dbms=%d\n",dbms);
	printf("js=%d\n",js);
	printf("se=%d\n",se);
	printf("dsa=%d\n",dsa);
	printf("stat=%d\n",stat);
	total=dbms+js+se+dsa+stat;
	printf("total =%d\n",total);
	percentage=(total/min)*100; 
	printf("percentage=%.2f",percentage);
	
}