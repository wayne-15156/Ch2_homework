#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float rate,i,total=5000;
	printf("�z���F5000��\n");
	printf("�п�J�z���~�Q�v(10,10.5,11,11.5,12 %):");
	scanf_s("%f",&rate);
	
	for (i = 1; i <= 15; i++)
	{
		total += total * (rate/100);
	}

	printf("\n�g�L15�~��......\n.\n.\n.\n\n");

	printf("�z���s�ڬ�%f\n", total);
	system("pause");
	return 0;
}