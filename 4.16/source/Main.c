#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	printf("(A)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i >= j)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i <= j)
			{
				printf("%s", "*");
			}
		}
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", " ");
		}
		for (k = 0; k <= 9 - i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9 - i; j++)
		{
			printf("%s", " ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}