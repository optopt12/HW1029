#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d=0;
	printf("�п�J�~��N�X:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("�п�J�g�~:");
		scanf_s("%f", &b);
		printf("�A���g�~�O:%f",b);
			break;
	case 2:
		printf("�п�J�u�@�ɪ�:");
		scanf_s("%f", &b);
		printf("�п�J���~:");
		scanf_s("%f", &c);
		if (b > 40)
		{
			d = 40 * c + (b - 40) * c * 1.5;
			printf("�A���g�~�O:%1f", d);
		}
		if (b < 40)
		{
			d = b * c;
			printf("�A���g�~�O:%f", d);
		}
			break;
	case 3:
		printf("�п�J��g�P����B:");
		scanf_s("%f", &b);
		c = 250 + b * 0.057;
		printf("�A���g�~�O:%f", c);
			break;
	case 4:
		printf("�п�J��g�Ͳ������:");
		scanf_s("%f", &b);
		printf("�п�J�@���I�h�֪��B:");
		scanf_s("%f", &c);
		d = b * c;
		printf("�A���g�~�O:%f", d);
			break;
	default:
		break;
	}
}