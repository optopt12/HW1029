#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float a,b,c,d,e,money;
	scanf_s("%f", &money);
	a = money * (pow(1.10, 15));
	b = money * (pow(1.105, 15));
	c = money * (pow(1.11, 15));
	d = money * (pow(1.115, 15));
	e = money * (pow(1.12, 15));
	printf("interest rates 10 is %f\n",a);
	printf("interest rates 10.5 is %f\n",b);
	printf("interest rates 11 is %f\n",c);
	printf("interest rates 11.5 is %f\n",d);
	printf("interest rates 12 is %f\n",e);
	system("pause");
}