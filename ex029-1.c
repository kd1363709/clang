#include <stdio.h>
main()
{
	int d ;
	printf("��������:");
	scanf("%d", &d);

	while (d > 0) {
		printf("*");
		d--;
	}
}