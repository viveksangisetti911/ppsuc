#include<stdio.h>
int main()
{
	char op;
	int a,b,c;
	printf("enter operator(+,-,*,/,%):");
	scanf("%c",&op);
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	switch(op)
	{
	case '+':c=a+b;
	         printf("addition is:%d",c);
	         break;
	case '-':c=a-b;
	         printf("subtraction is:%d",c);
	         break;
	case '*':c=a*b;
	         printf("multiplication is:%d",c);
	         break;
	case '/':c=a/b;
	         printf("division is:%d",c);
	         break;
	case '%':c=a%b;
	         printf("remainder is:%d",c);
	         break;
	         
	defult:printf("invalid operation");
	break;
    }
    return 0;
}

