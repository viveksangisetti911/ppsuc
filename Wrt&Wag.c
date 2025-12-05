#include<stdio.h>
int add(int a, int b)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int x;
	x=add(10,40);
	printf("%d", x);
	return 0;
}
