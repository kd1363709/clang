#include <stdio.h>
main()
{
	int d ;
	printf("数を入れて:");
	scanf("%d", &d);

	while (d > 0) {
		printf("*");
		d--;
	}
}