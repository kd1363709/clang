#include <stdio.h>
main()
{
	char moji1[50], moji2[50], w[50];
	int i;
	printf("文字１を入力:");
	scanf("%s", &moji1[0]);

	printf("文字２を入力:");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
	printf("入れ替えると\n");
	for (i = 0; w[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = w[i]; i++);
	printf("moji1 = %s \t moji2 = %s\n", &moji1[0], &moji2[0]);
}