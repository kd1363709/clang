#include <stdio.h>
main()
{
	int d, i;
	printf("数を入れて:");
	scanf("%d", &d);

	i = 0;
	while (i < d) {
		printf("*");
		i++;
	}
}