#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Програма для перевірки рівності множин, та того, чи є одна множина підмножиною іншої.\n");

    // Оголошуємо масиви А та В
    int* a;
    int* b;
    int n = 0, k = 0, i, j, f;

    // Кількість елементів масиву А
    printf("Введіть число елементів першої множини: \n");
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
        printf("%d \n", a[i]);


    // Кількість елементів масиву В
    printf("Введіть число елементів другої множини: \n");
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
        printf("%d \n", b[j]);

    int match = 0, notmatch = 0;

    // Цикл 1  A > B  
    if (n > k) {
        for (int f = 0; f < n; f++) {
            for (int i = 0; i < k; i++) {
                if (b[i] == a[f]) {
                    match += 1;
                }
                else if (b[i] != a[f]) {
                    notmatch += 1;
                }
            }
        }
        if (k == match) {
                printf("\n Множина В є підмножиною множини А ");
        }
        else 
        {  
         printf("\n Множина В не є підмножиною множини А ");
        }
    }

    // Цикл 2  A = B  
    if (n == k) {
        for (int f = 0; f < n; f++) {
            for (int i = 0; i < k; i++) {
                if (b[i] == a[f])
                {
                    match += 1;
                }

                else if (b[i] != a[f])
                {
                    notmatch += 1;
                }
            }
        }
        if (n == match) {
            printf("\nМножини рівні");
        }
        else { printf("\nМножини не є рівними"); }
    }

    // Цикл 3  A < B 
    if (n < k) {
        for (int f = 0; f < k; f++) {
            for (int i = 0; i < n; i++) {
                if (b[i] == a[f])
                {
                    match += 1;
                }

                else if (b[i] != a[f])
                {
                    notmatch += 1;
                }
            }
        }
        if (n == match) {
            printf("\nМножина А є підмножиною множини В");
        }
        else 
        {
          printf("\nМножина А не є підмножиною множини В");
        }
    }



    return 0;
}