#include <stdio.h>
main()
{
	int i, j, k;
	char flg;
	printf("���������:");
	scanf("%c", &flg);
	printf("���������:");
	scanf("%d%d%d", &i, &j, &k);

	switch (flg) {
	case'd':
	case'D':
		if (i > j) {
			if (i > k) {
				printf("�ő�l��%d�ł�\n", i);
			}
			else {
				printf("�ő�l��%d�ł�\n", k);
			}
		}
		else {
			if (j > k) {
				printf("�ő�l��%d�ł�\n", j);
			}
			else {
				printf("�ő�l��%d�ł�\n", k);
			}
		}
		break;
	case's':
	case'S':
		if (i < j) {
			if (i < k) {
				printf("�ŏ��l��%d�ł�\n", i);
			}
			else {
				printf("�ŏ��l��%d�ł�\n", k);
			}
		}
		else {
			if (j < k) {
				printf("�ŏ��l��%d�ł�\n", j);
			}
			else {
				printf("�ŏ��l��%d�ł�\n", k);
			}
		}
		break;
	case'g':
	case'G':
		printf("���v�l��%d�ł�\n", i + j + k);
		break;
	case'h':
	case'H':
		printf("���ϒl��%.2f�ł�\n", (float)(i + j + k) / 3);
		break;
	default:
		printf("�����G���[\n");
	}
}