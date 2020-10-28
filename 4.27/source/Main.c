#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d = 0;
	printf("500以內的勾股數有：\n");
	printf("  a     b    c       a     b    c       a     b    c       a     b    c\n");
	for (a = 1; a <= 500; a++)
		for (b = a + 1; b <= 500; b++)
		{
			c = (int)sqrt(a*a + b * b);
			if (c*c == a * a + b * b && c <= 500)
			{
				printf("%4d %4d %4d     ", a, b, c);
				d++;
				if (d % 4 == 0)
					printf("\n");
			}
		}

	printf("\n");
	return 0;
}