#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <malloc.h>

int main()
{
	SetConsoleCP(1251); // Кирилиця в консолі
	SetConsoleOutputCP(1251); // Кирилиця в консолі
	
	int *A;
	int i, k, min;
	int tmp;

	
	//Кількість елементів множини А
	printf("Введіть кількість елементів множини А: ");
	scanf_s("%d", &min);

	A = (int*)malloc(min * sizeof(int));

	//Перевірка розміру множини А на правильність введення
	if (min < 31)
	{
		printf("Неправильно задана кількість a елементів множини(не виконується a > 30)");
		return -1;
	}

	//Введення елементів множини А
	printf("Введіть елементи множини A: \n");
	for (i = 0; i < min; i++)
	{
		printf("A[%d] = ", i + 1);
		scanf_s("%d", &A[i]);
	}
	
	for (i = 0; i < min; i++)
	{
		for (k = i + 1; k < min; k++)
		{
			if (A[i] > A[k])
			{
				tmp = A[i];
				A[i] = A[k];
				A[k] = tmp;
			}
		}
	}

	
	printf("\nМножина А = { ");
	for (i = 0; i < min; i++)
		printf("%d, ", A[i]);
	printf("}\n");

	//Дослідження на рефлективність, симетричність та транзитивність
	
	printf("\n-----------------------------------------------------\n");
	printf("\n-----------------------------------------------------\n");
	printf("\n  Дослідження елементів множини А на відповідність\n");
	printf("\n-----------------------------------------------------\n");
	printf("\n-----------------------------------------------------\n");
	printf("\nУмова дослідження на відповідність: x <= y, (x, y) Є A\n");
	
	int j = 0;
	int p = 0;


	for (i = 0; i < min; i++)
	{
		if (A[i] != A[i]) {
			printf("\nВідношення не є рефлективне\n");
			break;
		}
		while (i == 30) {
			if (A[i] == A[i]) {
				printf("\nВідношення є рефлективне\n");
			}
			else {
				printf("\nВідношення не є рефлективне\n");
			}
			break;
		}
	}
	for (i = 0; i < min; i++) {
		if (A[i] != A[i] && A[i] < A[i]) {
			printf("\nВідношення є антирефлективне\n");

		}
		else {
			printf("\nВідношення не є антирефлективне\n");
			break;
		}
	}

	for (i = 0, j = 1; i < min && j < min; i++, j++) {

		if (A[i] <= A[j] && A[j] <= A[i]) {
			printf("\nВідношення є симетричне\n");
		}
		else {
			printf("\nВідношення не є симетричне\n");
			break;
		}

	}
	for (i = 0, j = 1; i < min && j < min; i++, j++) {
		if (A[i] <= A[j] && A[j] <= A[i] && A[i] == A[j]) {
			printf("\nВідношення є антисиметричне\n");
		}
		else {
			printf("\nВідношення не є антисиметричне\n");
			break;
		}
	}

	for (i = 0, j = 1, p = 2; i < min && j < min && p < min; i++, j++, p++) {
		if (A[i] <= A[j] && A[j] <= A[p] && A[i] <= A[p]) {
			while (i == 28 && j == 29 && p == 30) {
				printf("\nВідношення є транзитивне\n");
				break;
			}
			continue;
		}
		else {
			printf("\nВідношення не є транзитивне\n");
			break;
		}
	}
	return 0;
 }
