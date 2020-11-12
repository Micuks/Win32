#include<stdio.h>
int main()
{
	double g[5];
	for (int i = 0; i < 4; i++)
		scanf_s("%lf", &g[i]);
	printf("%f\n", (g[0] + g[1]) * (g[0] - g[1]) + g[2] / g[3]);
	return 0;
}