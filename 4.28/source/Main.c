#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d=0;
	printf("請輸入薪資代碼:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("請輸入週薪:");
		scanf_s("%f", &b);
		printf("你的週薪是:%f",b);
			break;
	case 2:
		printf("請輸入工作時長:");
		scanf_s("%f", &b);
		printf("請輸入時薪:");
		scanf_s("%f", &c);
		if (b > 40)
		{
			d = 40 * c + (b - 40) * c * 1.5;
			printf("你的週薪是:%1f", d);
		}
		if (b < 40)
		{
			d = b * c;
			printf("你的週薪是:%f", d);
		}
			break;
	case 3:
		printf("請輸入當週銷售金額:");
		scanf_s("%f", &b);
		c = 250 + b * 0.057;
		printf("你的週薪是:%f", c);
			break;
	case 4:
		printf("請輸入當週生產的件數:");
		scanf_s("%f", &b);
		printf("請輸入一件支付多少金額:");
		scanf_s("%f", &c);
		d = b * c;
		printf("你的週薪是:%f", d);
			break;
	default:
		break;
	}
}