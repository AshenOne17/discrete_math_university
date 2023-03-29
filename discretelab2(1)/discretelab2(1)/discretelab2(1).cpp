#define CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include <stdio.h>
#include <Windows.h>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    printf("*Якщо при виборі режиму роботи програми виводиться відображення - значить відповідність є заданою корректно*\n\n");

    // Оголошуємо масиви А та В
    int* a;
    int* b;
    int n = 0, k = 0, i, j;

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
        printf("%d ", a[i]);


    // Кількість елементів масиву В
    printf("\nВведіть число елементів другої множини: \n");
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

    printf("\nВідповідність між множинами\n");
    for (int i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }

    printf(" \n");
    for (int i = 0; i < k; i++) {
        printf("%d  ", b[i]);
    }
    
    int choice;
    printf("\nВаріанти роботи програми: \n");
    printf("1.Перевірка на ін'єктивність\n");
    printf("2.Перевірка на сюр'єктивність\n");
    printf("3.Перевірка на бієктивність\n");
    printf("Виберіть варіант роботи програми: \n");
    scanf_s("%d", &choice);
    switch (choice) {
    case 1: // Перевірка ін'єктивності
    {
        if (n < k)  
        {
            printf("\nВідповідність є коректно заданою і відображення є ін'єктивним\n");
            for (i = 0; i < n; i++) 
            {
                printf("%d -> %d\n", a[i], b[i]);
            }
        }
        else 
        {
            printf("Відповідність введена некоректно.");
        }
        break;
    }
    case 2: // Перевірка сюр'єктивності
    {
        if (n > k) 
        {
            printf("\nВідповідність є коректно заданою і відображення є сюр'єктивним\n");
            for (i = 0, j = 0; i < n; i++, j++) 
            {
                if (j == n) 
                {
                    break;
                }
                if (i == k) 
                {
                    i = 0;
                }
                printf("%d -> %d\n", a[j], b[i]);
            }
        }
        else 
        {
            printf("\nВідповідність не є коректно заданою.\n");
        }
        break;
    }
    case 3: // Перевірка бієктивності
    {
        if (n == k) 
        {
            printf("\nВідповідність є коректно заданою і відображення є бієктивним\n");
            for (i = 0; i < n; i++) 
            {
                printf("%d -> %d\n", a[i], b[i]);
            }
        }
        else 
        {
            printf("\nВідповідність не є коректно заданою.\n");
        }
    }
    // Завершення switch
    }
        return 0;
}