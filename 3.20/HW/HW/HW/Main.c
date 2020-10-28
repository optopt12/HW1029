#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c,d;
	a = 0;
	while (a != -1)
	{
		printf("Enter # of hours worked (-1 to end) :");
		scanf_s("%f", &a);
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%f", &b);
		c=a*b;
		d = c + (a - 40)*b*0.5;
		if (a > 40)
		{
			printf("Salary is $%f\n", d);
		}
		if (a <= 40)
		{
			printf("Salary is $%f\n", c);
		}
	}
}