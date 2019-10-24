#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float rate,total;
	int hour;
	
	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%d", &hour);

	while (hour != -1)
	{
		printf("Enter hourly rate of the worker($00.00): ");
		scanf_s("%f", &rate);

		if (hour > 40)
		{
			total = 40 * rate + (hour - 40) * rate * 1.5;
		}
		else
		{
			total = rate * hour;
		}
		printf("Salary is $%.2f\n\n", total);
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hour);
	}
	system("pause");
	return 0;

}