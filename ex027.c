#include <stdio.h>
main()
{
	char c, m;
	printf("文字を入力:");
	scanf("%c", &c, &m);
	if (c >= 'a' && c <= 'z') {
		printf("変換すると%c", c - 0x20);
	}
	else {
	   if (m >= 'A' && m <= 'Z') {
		   printf("変換すると%c", m = 0x20);
	   }
	   else {
		   printf("エラー\n");
	   }
	}
}