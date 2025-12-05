#include<stdio.h>
void test()
{
	static int a=10;
	a++;
	printf("%d\n", a);
}
int main()
{
	test ();
	test ();
	test ();
	return 0;
}
