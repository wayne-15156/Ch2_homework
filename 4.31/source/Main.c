#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int i, j, k,count=0;
	
	for (i = 1; i <= 5; i++)
	{
		for (j = 5-i; j >= 0; j--)
		{
			printf(" ");
		}
		for (k = 1; k <= count * 2+1; k++)
		{
			printf("*");
		}
		count += 1;
			printf("\n");
	}
	/*'//////////////////////////////////////////////////*/
	count = 4;

	for (i = 1; i <= 4; i++)
	{
		for (j = i; j >= 0; j--)
		{
			printf(" ");
		}
		for (k = 1;k<=count*2-1  ; k++)
		{
			printf("*");
		}
		count -= 1;
			printf("\n");
	}




	system("pause");
	return 0;
}