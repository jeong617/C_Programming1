#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <math.h>

int main(void)
{

	int num1, num2;

	printf("input two integer: ");
	scanf("%d %d", &num1, &num2);
	printf("\n %d & %d = %d", num1, num2, num1 & num2);  // AND
	printf("\n %d | %d = %d", num1, num2, num1 | num2);  // OR
	printf("\n %d ^ %d = %d", num1, num2, num1 ^ num2);  // XOR

	// printf("%d�� %d�� = %d\n", num1, num2, (int)pow(num1, num2));
	// a�� n���� #include <math.h> ���� pow(a,n)

	return 0;
}