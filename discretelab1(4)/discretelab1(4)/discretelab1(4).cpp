#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ope_num;
	printf("1 - об'єднання множин\n");
	printf("2 - перетин множин\n");
	printf("3 - рiзниця множин\n");
	printf("4 - диз'юнктивна сума множин\n");
	printf("5 - доповнення множини\n");
	printf("\nВиберiть зi списку операцiю над множинами: ");
	scanf_s("%d", &ope_num);
	switch (ope_num) {
	case 1:
	{
		// оголошення масиву А
		unsigned int A;
		printf("\nВведiть розмiр множини А: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// оголошення масиву B
		unsigned int B;
		printf("\nВведiть розмiр множини B: ");
		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {

			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// вивід об'єднання множин А і B
		printf("\nОб'єднання множин А i В: ");
		for (int i = 0; i < A; i++) {
			printf("%d, ", arA[i]);
		}
		for (int j = 0; j < B; j++) {
			printf("%d ", arB[j]);
		}
		printf("\n");
	}
	case 2:
	{
		// оголошення масиву А
		unsigned int A;
		printf("\nВведiть розмiр множини А: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// оголошення масиву B
		unsigned int B;
		printf("\nВведiть розмiр множини B: ");
		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// виводимо перетин множин А i B
		printf("\nПеретин множин А i В: ");
		for (int i = 0; i < A; i++) {
			for (int j = 0; j < B; j++) {
				if (arA[i] == arB[j]) {
					int coincidence = arA[i];
					printf("%d ", coincidence);
				}
			}
		}
		break;
	}
	case 3:
	{
		// оголошення масиву А
		unsigned int A;
		printf("\nВведiть розмiр множини А: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// оголошення масиву B
		unsigned int B;
		printf("\nВведiть розмiр множини B: ");

		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// виводимо різницю множин A \ B
		printf("\nРiзниця множин A i B: ");
		for (int i = 0; i < A; i++) {
			int j = 0;
			while (j < B && arB[j] != arA[i]) {
				j++;
				if (j == B) {
					printf("%d ", arA[i]);
				}
			}
		}
		break;
	}
	case 4:
	{
		// оголошення масиву А
		unsigned int A;
		printf("\nВведiть розмiр множини А: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// оголошення масиву B
		unsigned int B;
		printf("\nВведiть розмiр множини B: ");
		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// рахуєм диз'юнктивну суму множин А і В
		int a = 0;
		printf("\nДиз'юнктивна сума множин А i B: ");
		do {
			// виводимо різницю множин A \ B
			for (int i = 0; i < A; i++) {
				int j = 0;
				while (j < B && arB[j] != arA[i]) {
					j++;
					if (j == B) {
						printf("%d ", arA[i]);
					}
				}
			}
			// виводимо різницю множин B \ A
			for (int j = 0; j < B; j++) {
				int i = 0;
				while (i < A && arA[i] != arB[j]) {
					i++;
					if (i == A) {
						printf("%d ", arB[j]);

					}
				}
			}
		} while (a = 0);
		break;
	}
	case 5:
	{
		// оголошення масиву А
		unsigned int A;
		printf("\nВведiть розмiр множини А: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// виводимо доповненння множини А
		printf("\nДоповнення множини А: будь-яке число унiверсуму, за винятком: \n");
		for (int j = 0; j < A; j++) {
			printf("%d ", arA[j]);
		}
		break;
	}
	}
	return 0;
}