#include<stdio.h>
int main()
{
	float fahrenheit,celcius;
	printf("enter the fahrenheit");
	scanf("%f",&fahrenheit);
	celcius=(fahrenheit-32)*5.0/9.0;
	printf("temperature in celcius%2f\n",celcius);
	return 0;
}
