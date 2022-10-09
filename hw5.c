#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	DeToBi(num);

	return 0;
}

int DeToBi(int num)
{
	if (num == 1) printf("%d", 1);
	else {
		DeToBi(num / 2);
		printf("%d", num % 2);
	}
}