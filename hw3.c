#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int height;
	int i, j;

	printf("�Ƕ�̵� �� ��?: ");
	scanf("%d", &height);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf(" \n");
	}
	return 0;
}