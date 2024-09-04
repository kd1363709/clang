#include <stdio.h>
main()
{
	int tbl[][3] = { { 10, 20, 30 },
		{ 40, 50, 60 },
		{ 70, 80, 90 } };
	int* p_tbl, i;

	p_tbl = &tbl[0][1];
	printf("‚QŽŸŒ³”z—ñtbl‚Ì“à—e(‚P—ñ–Ú‚Ì‚Ý‰¡‚É•\Ž¦)\n");
	for (i = 0; i < 3; i++) {
		printf(" %d", *p_tbl);
		p_tbl += 3;
	}
}