#include <stdio.h>
main()
{
	float no1, no2, no3;
	printf("１つ目の実数:");
	scanf("%f", &no1);
	printf("２つ目の実数:");
	scanf("%f", &no2);
	printf("２つ目の実数:");
	scanf("%f", &no3);
	printf("合計=%.2f 平均=%.2f\n", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}