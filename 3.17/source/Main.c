#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int account = 0;
	float balance, charges, credits, limit,total;

	printf("Enter account number(-1 to end): ");
	scanf_s("%d", &account);

	while (account != -1)
	{		
		printf("Enter beginning balance: ");
		scanf_s("%f", &balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);
		
		total = balance + charges - credits;
		if (total > limit)
		{
			printf("Account:\t%d\n", account);
			printf("Credit limit:\t%.2f\n", limit);
			printf("Balance:\t%.2f\n", total);
			printf("Credit limit Exceeded.\n");
		}
		printf("\n");
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", &account);
	}
	system("pause");
}