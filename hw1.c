#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main_hw1(void)
{

	int num1, num2;

	printf("input two integer: ");
	scanf("%d %d", &num1, &num2);
	printf("\n %d & %d = %d", num1, num2, num1 & num2);  // AND
	printf("\n %d | %d = %d", num1, num2, num1 | num2);  // OR
	printf("\n %d ^ %d = %d", num1, num2, num1 ^ num2);  // XOR


	return 0;
}