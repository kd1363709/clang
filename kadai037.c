#include <stdio.h>
main()
{
	int d;
	printf("�O����P�O�O�܂ł̐����H\n");
	scanf("%d", &d);
	if (90 <= d) {
		printf("���̐��l�̔��茋�ʂ�[�T]�ł�\n");
	}
	else {
		if (80 <= d) {
			printf("���̐��l�̔��茋�ʂ�[4]�ł�\n");
		}
		else {
			if (50 <= d) {
				printf("���̐��l�̔��茋�ʂ�[3]�ł�\n");
			}
			else {
				if (30 <= d) {
					printf("���̐��l�̔��茋�ʂ�[2]�ł�\n");
				}
				else {
					printf("���̐��l�̔��茋�ʂ�[1]�ł�\n");
				}
			}
		}
	}
}