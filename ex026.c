#include <stdio.h>
main()
{
	int d;
	printf("月を入力:\n");
	scanf("%d", &d);
	if (d == 2) {
		printf("最終日は２８日です\n");
	}
	else {
		if (4 == d || 6 == d || 9 == d || 11 == d) {
			printf("最終日は３０日です\n");
		}
		else {
			printf("最終日は３１日です\n");
		}
	}
}