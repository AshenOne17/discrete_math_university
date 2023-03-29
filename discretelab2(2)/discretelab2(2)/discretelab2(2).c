#define CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Оголошуємо масиви А та В
    int* a;
    int* b;
    int n = 0, k = 0, i, j;

    // Кількість елементів масиву А
    printf("Введіть число елементів першої множини: ");
    scanf_s("%d", &n);
    a = (int*)malloc(n * sizeof(int));

    // Заповнюємо масив А
    printf("Введіть елементи першої множини: \n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf_s("%d", &a[i]);
    }
    printf("Елементи першої множини: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf(" \n");

    // Кількість елементів масиву В
    printf("\nВведіть число елементів другої множини: ");
    scanf_s("%d", &k);
    b = (int*)malloc(k * sizeof(int));

    // Заповнюємо масив В
    printf("Введіть елементи другої множини: \n");
    for (j = 0; j < k; j++) {
        printf("b[%d] = ", j);
        scanf_s("%d", &b[j]);
    }
    printf("Елементи другої множини: \n");
    for (j = 0; j < k; j++)
        printf("%d ", b[j]);

    printf(" \n");

    int choice;
    printf("\n1.Відображення з множини a в множину b");
    printf("\n2.Відображення з множини b в множину a\n");
    printf("Оберіть операцію:");
    scanf_s("%d", &choice);
    switch (choice) {
    case 1: 
    {
        if (n < k) {
            printf("\nВідображення є ін'єктивним\n");
            for (i = 0; i < n; i++) {
                printf("%d -> %d\n", a[i], b[i]);
            }
        }
        else if (n > k) {
            printf("\nВідображення є сюр'єктивним\n");
            for (i = 0, j = 0; i < n; i++, j++) {
                if (j == n) {
                    break;
                }
                if (i == k) {
                    i = 0;
                }
                printf("%d -> %d\n", a[j], b[i]);
            }
        }
        else if (n == k) {
            printf("\nВідображення є бієктивним\n");
            for (i = 0; i < n; i++) {
                printf("%d -> %d\n", a[i], b[i]);
            }
        }
        
        break;
    
    }
    case 2: 
    {
        if (k < n) {
            printf("\nВідображення є ін'єктивним\n");
            for (i = 0; i < k; i++) {
                printf("%d -> %d\n", b[i], a[i]);
            }
        }
        else if (k > n) {
            printf("\nВідображення є сюр'єктивним\n");
            for (i = 0, j = 0; i < k; i++, j++) {
                if (j == k) {
                    break;
                }
                else if (i == n) {
                    i = 0;
                }
                printf("%d -> %d\n", b[j], a[i]);
            }
        }
        else if (k == n) {
            printf("\nВідображення є бієктивним\n");
            for (i = 0; i < k; i++) {
                printf("%d -> %d\n", b[i], a[i]);
            }
        }
        break;
    }
    default: 
    {
        printf("\nТакої операцiї не iснує.\n");
        break;
    }
    }
    
    return 0;
}