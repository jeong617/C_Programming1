#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	double kilo;

	printf("please enter kilometers: ");
	scanf("%lf", &kilo);
	// lf -> long float. scanf���� double�� ���� �� ���

	printf("%.1f km is equal to %.1f miles\n", kilo, kilo * 1 / 1.609);

	return 0;
}