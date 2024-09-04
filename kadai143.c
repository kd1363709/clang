#include <stdio.h>
struct fruit {
	char name[30];
	int price, point, number, total;
};
main()
{
	int i;
	struct fruit kudamono = {"peach",300,5,3,0};
	kudamono.total = kudamono.price * kudamono.number;
	printf("è§ïiñº:%s\n", kudamono.name);
	printf("âøäi:%d\n", kudamono.price);
	printf("Ç®ëEÇﬂìx:");
	for (i = 0; i < kudamono.point; i++)
	{
		printf("Åö");
	}
	printf("\nå¬êî:%då¬\n", kudamono.number);
	printf("ã‡äz:\\%d-\n", kudamono.total);
}