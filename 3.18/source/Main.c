#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b;
	a = 0;
	while (a != -1)
	{
		printf("Enter sales in dollars	(-1 to end) :");
		scanf_s("%f", &a);
		if (a == -1)
		{
			system("pause");
			return 0;
		}
		b = 200 + a * 0.09;
		printf("Salary is %f\n:",b);
		
	}
}