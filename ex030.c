#include <stdio.h>
main()
{
	int d, i;
	printf("��������:");
	scanf("%d", &d);

	i = 0;
	while (i <= 10) {
		printf("%d + %d = %d\n", d, i, d + i);
		i++;
	}
}