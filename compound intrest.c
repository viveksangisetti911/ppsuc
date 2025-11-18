#include<stdio.h>
#include<math.h>
int main ()
{
	int p,t,r;
	double si,ci;
	printf("enter p t r values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p*pow(1+r/100.0,t)-p;
	printf("simple intrest is:%lf\n",si);
	printf("compound intrest is:%lf",ci);
	return 0;
}
