#include<stdio.h>
int add()
{
	int a,b,c;
	scanf("%d %d", &a, &b);
	c=a+b;
	return c;
}
int main()
{
	int x;
	x=add();
	printf("%d", x);
	return 0;
}
