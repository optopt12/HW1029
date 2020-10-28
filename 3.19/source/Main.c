#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d;
	a = 0;
	while (a != -1)
	{
		printf("Enter loan principal (-1 to end) :");
		scanf_s("%f", &a);
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter interest rate :");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &c);
		d = a * b * c / 365;
		printf("The interest change is $%f\n",d);
	}
}