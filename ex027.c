#include <stdio.h>
main()
{
	char c, m;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &c, &m);
	if (c >= 'a' && c <= 'z') {
		printf("•ÏŠ·‚·‚é‚Æ%c", c - 0x20);
	}
	else {
	   if (m >= 'A' && m <= 'Z') {
		   printf("•ÏŠ·‚·‚é‚Æ%c", m = 0x20);
	   }
	   else {
		   printf("ƒGƒ‰[\n");
	   }
	}
}