#include <stdio.h>
main()
{
	int d1, d2,ans;
	printf("���Z�q�����:"); 
	scanf("%d", &ans);

	printf("�Q�̐��������:");
	scanf("%d%d", &d1, &d2);
	if (ans = 1) {
		printf("%d\n", d1 + d2);
	}
	else {
		if (ans = 2) {
			printf("%d\n", d1 - d2);
		}
		else {
			if (ans = 3) {
				printf("%d\n", d1 * d2);
			}
			else {
				if (ans = 4) {
					printf("%d\n", d1 / d2);
				}
			}
		}
    }
}