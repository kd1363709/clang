#include <stdio.h>
main()
{
	int d, i;
	printf("��������:");
	scanf("%d", &d);

	i = 0;
	while (i < d) {
		printf("*");
		i++;
	}
}