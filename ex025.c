#include <stdio.h>
main()
{
	char moji;
	printf("���������:\n");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (moji >= '0' && moji <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}