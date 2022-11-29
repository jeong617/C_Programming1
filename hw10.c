#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city {
	char name[50];
	char country[50];
	int population;
} City;

void ClearLineFromReadBuffer()
{
	while (getchar() != '\n');
}

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main(void)
{
	int i;
	City city[3];

	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		fputs("Name> ", stdout);
		fgets(city[i].name, sizeof(city[i].name), stdin);
		RemoveBSN(city[i].name);

		fputs("Country> ", stdout);
		fgets(city[i].country, sizeof(city[i].country), stdin);
		RemoveBSN(city[i].country);

		fputs("Population> ", stdout);
		fgets(&city[i].population, sizeof(int), stdin);
		ClearLineFromReadBuffer();
	}

	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("%s in %s With a population of %d people\n", city[i].name, city[i].country, city[i].population);
	}
	return 0;
}