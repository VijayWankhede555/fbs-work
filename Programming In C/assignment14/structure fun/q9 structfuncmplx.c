#include<stdio.h>
struct complex
{
	int real;
	int imag;
};
struct complex storecomplex();
void displaycomplex(struct complex c1);
void main()
{
	struct complex c1;
	c1=storecomplex();
	displaycomplex(c1);
}
struct complex storecomplex()
{
	struct complex c;
	printf("real:");
	scanf("%d",&c.real);
	printf("imaginary:");
	scanf("%d",&c.imag);
	return c;
}
void displaycomplex(struct complex c1)
{
	printf("real:%d,imaginary:%d",c1.real,c1.imag);
}
