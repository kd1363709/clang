#include <stdio.h>
main()
{
	int d;
	printf("０から１００までの整数？\n");
	scanf("%d", &d);
	if (90 <= d) {
		printf("その数値の判定結果は[５]です\n");
	}
	else {
		if (80 <= d) {
			printf("その数値の判定結果は[4]です\n");
		}
		else {
			if (50 <= d) {
				printf("その数値の判定結果は[3]です\n");
			}
			else {
				if (30 <= d) {
					printf("その数値の判定結果は[2]です\n");
				}
				else {
					printf("その数値の判定結果は[1]です\n");
				}
			}
		}
	}
}