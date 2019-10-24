#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float rate,i,total=5000;
	printf("您投資了5000元\n");
	printf("請輸入您的年利率(10,10.5,11,11.5,12 %):");
	scanf_s("%f",&rate);
	
	for (i = 1; i <= 15; i++)
	{
		total += total * (rate/100);
	}

	printf("\n經過15年後......\n.\n.\n.\n\n");

	printf("您的存款為%f\n", total);
	system("pause");
	return 0;
}