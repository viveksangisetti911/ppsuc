#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],x[10][10],r,c,i,j;
	printf("enter row and column value\n");
	scanf("%d%d",&r,&c);
	printf("enter A matrix values\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	printf("matrix addition:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			x[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}
