#include <stdio.h>
#include <string.h>
#define NIN 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile data[NIN];
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++, p++) {
		printf("%d�l�ځi���O�j:", i + 1);
		scanf("%s", p->name);
		printf("%d�l�ځi���N�����j:", i + 1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�l�ځi���t�^�j:", i + 1);
		scanf("%s", p->blood);
	 }
	for (p = data, i = 0; i < NIN; i++, p++) {
		if (struct(p->blood, "A") == 0) {
			printf("%s--%d �N %02d �� %02d ���� ���t�^-%s�^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}
}