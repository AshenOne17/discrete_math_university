#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ope_num;
	printf("1 - ��'������� ������\n");
	printf("2 - ������� ������\n");
	printf("3 - �i����� ������\n");
	printf("4 - ���'�������� ���� ������\n");
	printf("5 - ���������� �������\n");
	printf("\n�����i�� �i ������ ������i� ��� ���������: ");
	scanf_s("%d", &ope_num);
	switch (ope_num) {
	case 1:
	{
		// ���������� ������ �
		unsigned int A;
		printf("\n����i�� ����i� ������� �: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// ���������� ������ B
		unsigned int B;
		printf("\n����i�� ����i� ������� B: ");
		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {

			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// ���� ��'������� ������ � � B
		printf("\n��'������� ������ � i �: ");
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
		// ���������� ������ �
		unsigned int A;
		printf("\n����i�� ����i� ������� �: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// ���������� ������ B
		unsigned int B;
		printf("\n����i�� ����i� ������� B: ");
		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// �������� ������� ������ � i B
		printf("\n������� ������ � i �: ");
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
		// ���������� ������ �
		unsigned int A;
		printf("\n����i�� ����i� ������� �: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// ���������� ������ B
		unsigned int B;
		printf("\n����i�� ����i� ������� B: ");

		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// �������� ������ ������ A \ B
		printf("\n�i����� ������ A i B: ");
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
		// ���������� ������ �
		unsigned int A;
		printf("\n����i�� ����i� ������� �: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// ���������� ������ B
		unsigned int B;
		printf("\n����i�� ����i� ������� B: ");
		scanf_s("%d", &B);
		int arB[100];
		for (int i = 0; i < B; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arB[i]);
		}
		// ����� ���'�������� ���� ������ � � �
		int a = 0;
		printf("\n���'�������� ���� ������ � i B: ");
		do {
			// �������� ������ ������ A \ B
			for (int i = 0; i < A; i++) {
				int j = 0;
				while (j < B && arB[j] != arA[i]) {
					j++;
					if (j == B) {
						printf("%d ", arA[i]);
					}
				}
			}
			// �������� ������ ������ B \ A
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
		// ���������� ������ �
		unsigned int A;
		printf("\n����i�� ����i� ������� �: ");
		scanf_s("%d", &A);
		int arA[100];
		for (int i = 0; i < A; i++) {
			printf("array[%d]: ", i);
			scanf_s("%d", &arA[i]);
		}
		// �������� ����������� ������� �
		printf("\n���������� ������� �: ����-��� ����� ��i�������, �� ��������: \n");
		for (int j = 0; j < A; j++) {
			printf("%d ", arA[j]);
		}
		break;
	}
	}
	return 0;
}