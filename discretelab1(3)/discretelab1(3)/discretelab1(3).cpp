#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <math.h>

int main() {


    // Оголошуємо масиви А та В
    int* a;
    int* b;
    int n = 0, k = 0, i, j, f;

    // Кількість елементів масиву А
    printf("Enter the number of elements of the first set: \n");
    scanf_s("%d", &n);
    a = (int*)malloc(n * sizeof(int));

    // Заповнюємо масив А
    printf("Enter elements of the first set: \n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf_s("%d", &a[i]);
    }
    printf("Set elements you entered: \n");
    for (i = 0; i < n; i++)
        printf("%d \n", a[i]);


    // Кількість елементів масиву В
    printf("Enter the number of elements of the second set: \n");
    scanf_s("%d", &k);
    b = (int*)malloc(k * sizeof(int));

    // Заповнюємо масив В
    printf("Enter elements of the second set: \n");
    for (j = 0; j < k; j++) {
        printf("b[%d] = ", j);
        scanf_s("%d", &b[j]);
    }
    printf("Set elements you entered: \n");
    for (j = 0; j < k; j++)
        printf("%d \n", b[j]);
    // Логіка декартового добутку
    printf("{");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf(" (%d %d) ", a[i], b[j]);
        }
    }
    printf("}");
    return 0;
}