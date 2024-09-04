#include <stdio.h>
main()
{
	int i, j, k;
	char flg;
	printf("処理を入力:");
	scanf("%c", &flg);
	printf("整数を入力:");
	scanf("%d%d%d", &i, &j, &k);

	switch (flg) {
	case'd':
	case'D':
		if (i > j) {
			if (i > k) {
				printf("最大値は%dです\n", i);
			}
			else {
				printf("最大値は%dです\n", k);
			}
		}
		else {
			if (j > k) {
				printf("最大値は%dです\n", j);
			}
			else {
				printf("最大値は%dです\n", k);
			}
		}
		break;
	case's':
	case'S':
		if (i < j) {
			if (i < k) {
				printf("最小値は%dです\n", i);
			}
			else {
				printf("最小値は%dです\n", k);
			}
		}
		else {
			if (j < k) {
				printf("最小値は%dです\n", j);
			}
			else {
				printf("最小値は%dです\n", k);
			}
		}
		break;
	case'g':
	case'G':
		printf("合計値は%dです\n", i + j + k);
		break;
	case'h':
	case'H':
		printf("平均値は%.2fです\n", (float)(i + j + k) / 3);
		break;
	default:
		printf("処理エラー\n");
	}
}