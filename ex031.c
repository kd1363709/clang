#include <stdio.h>
main()
{
	int d, sum;
	sum = 0;
	for (d = 1; d <= 10; d++ ) {
		sum += d;
		printf("�P����%d�܂ł̘a��%d\n", d, sum);
	}
}