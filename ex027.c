#include <stdio.h>
main()
{
	char c, m;
	printf("���������:");
	scanf("%c", &c, &m);
	if (c >= 'a' && c <= 'z') {
		printf("�ϊ������%c", c - 0x20);
	}
	else {
	   if (m >= 'A' && m <= 'Z') {
		   printf("�ϊ������%c", m = 0x20);
	   }
	   else {
		   printf("�G���[\n");
	   }
	}
}