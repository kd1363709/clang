#include <stdio.h>
main()
{
	int i;
	printf("���������:");
	scanf("%d", &i);

	if (i >= 10 && i <= 49);
	switch (i / 10) {
	case 1:
		printf("�P�O�_��ł�\n");
		break;
	case 2:
		printf("�Q�O�_��ł�\n");
		break;
	case 3:
		printf("�R�O�_��ł�\n");
		break;
	case 4:
		printf("�S�O�_��ł�\n");
		break;
	default:
		printf("�G���[\n");
	}
}