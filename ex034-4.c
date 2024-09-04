#include <stdio.h>
main()
{
	int d, i, num;
	printf("”‚Í?");
	scanf("%d", &num);
	i = 0;
	do {
		d = 0;
		do {
			printf(" ");
			d++;
		} while (d < num - i);
		d = 0;
		do {
			printf("*");
			d++;
		} while (d < i + 1);
		printf("\n");
		i++;
	} while (i < num);
}