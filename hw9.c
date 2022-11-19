#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[50];
	char diff = 'a' - 'A';
	int i;

	printf("input > ");
	fgets(str, sizeof(str), stdin);

	for (i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += diff;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= diff;
		}
	}

	fputs(str, stdout);

	return 0;
}