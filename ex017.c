#include <stdio.h>
main()
{
	float no1, no2, no3;
	printf("�P�ڂ̎���:");
	scanf("%f", &no1);
	printf("�Q�ڂ̎���:");
	scanf("%f", &no2);
	printf("�Q�ڂ̎���:");
	scanf("%f", &no3);
	printf("���v=%.2f ����=%.2f\n", no1 + no2 + no3, (no1 + no2 + no3) / 3);
}