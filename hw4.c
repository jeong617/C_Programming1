#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i = 2;

	printf("Please enter a number : ");
	scanf("%d", &num);

	do {
		if (num%i == 0 && i != num) {
			printf("It is NOT prime number\n");
			break;
		}
		else if (i == num)
			printf("It is prime number!\n");
		i++;
	} while (i <= num);


	return 0;
}


// ������ �ڵ�

//int main(void)
//{
//	int num;
//	int result;
//	int i = 2;
//
//	printf("Please enter a number : ");
//	scanf("%d", &num);
//
//	for (i = 2; i <= num/2; i++) {  // (����) num/2 ��ŭ loop�� ���Ƶ� ����� �Ȱ��� ���´�. ���� ���� �Ҽ��� 2�ϱ�
//		printf("%d", i);
//		if (num % i == 0) {
//			printf("\nIt is not prime number. \n");
//			result = 0;
//		}
//	}
//	it(result == 1) printf("It is a prime number. \n");
// 
//	return 0;
//}