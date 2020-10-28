#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e,f;
	a = 0;
	while(a!=-1)
	{ 
	printf("Enter account number (-1 to end) :");
	scanf_s("%f", &a);
	if (a == -1)
	{
		system("pause");
		return 0;
	}
	printf("Enter beginning balance :");
	scanf_s("%f", &b);
	printf("Enter total changes :");
	scanf_s("%f", &c);
	printf("Enter total credits :");
	scanf_s("%f", &d);
	printf("Enter Credits limit :");
	scanf_s("%f", &e);
	f = b + c - d;
	if (f > e)
	{
		printf("Balance :%f\n", f);
		printf("Account :%f\n", a);
		printf("Credits limit :%f\n", e);
		printf("Credits limit exceeded\n");
	}
	}
}