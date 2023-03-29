#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>  //бібліотека для динамічних масивів
#include <windows.h>
int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int* a;  // вказівник масиву
    int i, n, p;
    
    printf("Введіть кількість елементів масиву: ");
    scanf_s("%d", &n);

    a = (int*)malloc(n * sizeof(int)); 


    printf("Введіть елементи масиву: \n"); // ввід елементів масиву 
    for (p = 0; p < n; p++)
    {
        printf("a[%d] = ", p);
        scanf_s("%d", &a[p]);
    }

    printf("{}\n"); // порожня множина

    int k, r;
    for (k = 0, r = 1; k < n; k++)
        r *= 2;
    for (k = 0; k < r; k++) {
        for (p = 0; p < n; p++)
            if ((k >> p) & 1)
                printf("%d ", a[p]);
        printf("\n");

    }

}