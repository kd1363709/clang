#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data syohin[3] = { {"���M",30,5},{"�����S��",50,2},{"�M��",500,3}};
	int i;
	struct syohin_data* p = syohin;
	for (i = 0; i < 3; i++, p++) {
		printf("���i��:%s\t", syohin[i].name);
		printf("�P��:%4d\t", syohin[i].tanka);
		printf("��:%4d\n", syohin[i].kosuu);
		printf("���z:\\%4d\n", p->tanka * p->kosuu);
	}
}