#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("enter the temperature of celcius");
	scanf("%f",&celcius);
	fahrenheit=(celcius*9/5)+32;
	printf("faahrenheit temperature:%2f\n");
	return 0;
}
