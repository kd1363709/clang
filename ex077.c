#include <stdio.h>
void get_maxmin(int d1, int d2, int d3, int* max, int* min);
main()
{
	int d1, d2, d3, max, min;
	printf("®ð3ÂüÍ:");
	scanf("%d%d%d", &d1, &d2, &d3);
	get_maxmin(d1, d2, d3, &max, &min);
	printf("Åål = %d Å¬l = %d\n", max, min);
}
void get_maxmin(int d1, int d2, int d3, int* max, int* min)
{
	// ðZq(?:)ðgp
	// ðZqÍuâ¿:C¾ê11u§ä¶(EIðEJÔµ)v.pdfvðQÆ
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
}