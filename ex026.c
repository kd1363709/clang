#include <stdio.h>
main()
{
	int d;
	printf("�������:\n");
	scanf("%d", &d);
	if (d == 2) {
		printf("�ŏI���͂Q�W���ł�\n");
	}
	else {
		if (4 == d || 6 == d || 9 == d || 11 == d) {
			printf("�ŏI���͂R�O���ł�\n");
		}
		else {
			printf("�ŏI���͂R�P���ł�\n");
		}
	}
}