#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i <= 4; i++)
	{
		for (int j = 0; j <= 4 - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i * 2; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int m = 0; m <= 4; m++)
	{
		for (int n = 0; n <= m+1; n++)
		{
			printf(" ");
		}
		for (int a = 0; a < 7 - m * 2; a++)
		{
			printf("*");
		}
		printf("\n");
	}
}