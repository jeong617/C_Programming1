#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double StandardDev(int arr[]);

int main(void)
{
	double num[5];

	printf("Enter 5 real number: ");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &num[i]);
	}
	printf("standard Deviation = %lf\n", StandardDev(num));

	return 0;
}

double StandardDev(double arr[])
{
	double sum = 0;
	double exp;
	double standardDevi = 0;

	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}

	exp = sum / 5;
	printf("exp: %lf\n", exp);

	for (int i = 0; i < 5; i++) {
		standardDevi = pow(arr[i] - exp, 2);
	}
	standardDevi = sqrt(standardDevi / 5);

	return standardDevi;
}
