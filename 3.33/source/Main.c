#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int breadth, length,i,j;

	printf("�п�J��: ");
	scanf_s("%d", &breadth);
	printf("�п�J�e ");
	scanf_s("%d", &length);

	printf("\n\n");

	for(i = 1; i <= length; i++)
	{
		for(j = 1; j <= breadth;j++)
		{
			if (i == 1 || i == length) 
			{
				printf("*");
			}
			else
			{
				if (j == 1 || j == breadth)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}

		}
		printf("\n");
	}
	system("pause");
	return 0;
}