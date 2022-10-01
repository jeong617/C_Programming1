#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 2;

	printf("Please enter a number : ");
	scanf("%d", &num);

	do {
		int r = num % i;
		if (r == 0 && i != num) {
			printf("It is NOT prime number\n");
			break;
		}
		else if (i == num)
			printf("It is prime number!\n");
		i++;
	} while (i <= num);


	return 0;
}