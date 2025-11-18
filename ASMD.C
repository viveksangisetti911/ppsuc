#include<stdio.h>
int main()
{
	float a,b,sum,difference,product,quotient;
	printf("enter a");
	scanf("%f",&a);
	printf("enter b");
	scanf("%f",&b);
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	printf("sum=%2f\n",sum);
	printf("subtraction=%2f\n",difference);
	printf("multiplication=%2f\n",product);
	printf("division=%2f\n",quotient);
	return 0;
}
