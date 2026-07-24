#include<stdio.h>
void main()
{
  double bs,ts,da,hra,ta;
  printf("enter basic salary: ");
  scanf("%lf",&bs);
  if(bs<=5000)
  {
  	da=bs*0.10;
  	ta=bs*0.20;
  	hra=bs*0.25;
  }
  else
  {
    da=bs*0.15;
  	ta=bs*0.25;
  	hra=bs*0.30;	
  }
  ts=bs+da+hra+ta;
  printf("total salary is%lf",ts);
}