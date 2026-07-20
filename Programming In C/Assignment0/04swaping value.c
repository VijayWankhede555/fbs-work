#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int temp;
	printf("before swaping number is\n");
	printf("a=%d\n",a);
    printf("b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
	printf("after swaping value is\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}