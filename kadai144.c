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
	printf("商品名:%s\n", kudamono.name);
	printf("価格:%d\n", kudamono.price);
	printf("お薦め度:%dポイント\n",kudamono.point);
	printf("個数:%d個\n", kudamono.number);
	printf("金額:\\%d-\n", kudamono.total);
}