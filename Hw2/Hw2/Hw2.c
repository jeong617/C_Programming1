#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double kilo;

	printf("please enter kilometers: ");
	scanf("%lf", &kilo);

	printf("%.1f km is equal to %.1f miles\n", kilo, kilo/ 1.609);

	return 0;
}