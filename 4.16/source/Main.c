#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j,k,count;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n");


	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 2; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 10; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10-i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}

}