#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

#define V 5 // За умовою: кількість вершин графа дорівнює 5

int graph[V][V]; // Матриця суміжності заданого неорієнтованого графа без петель

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Ввід матриці сумiжностi:\n\n"); // Ввід матриці суміжності
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
           scanf_s("%d", &graph[i][j]);
        }
    }
    printf("\nВивід матриці суміжності:\n"); // Вивід матриці сумісності
   printf("\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d  ", graph[i][j]);
        }
       printf("\n");
    }

    printf("\n");

    int color[V];
    color[0] = 1;    // Присвоюємо перший колір першій вершині
    bool colorUsed[V];   // Перевірка на використання кольору

    for (int i = 1; i < V; i++)
        color[i] = -1;   // Присвоюємо значення -1 всім іншим вершинам (тобто їм ще не присвоєний колір)

    for (int i = 0; i < V; i++)
        colorUsed[i] = false;   // Спочатку ніякий колір не вибраний

    for (int u = 1; u < V; u++)
    {
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v])
            {
                if (color[v] != -1)
                    colorUsed[color[v]] = true; // Колір вибраний
            }
        }

        int col;
        for (col = 1; col < V + 1; col++)
            if (!colorUsed[col])    // Знайти колір, який ще неприсвоєний жодній вершині
                break;

        color[u] = col;   // Присвоїти цей колір незафарбованій вершині

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v])
            {
                if (color[v] != -1)
                    colorUsed[color[v]] = false; // Коли колір вже вибраний, зробити його недоступним для інших вершин
            }
        }
    }

    for (int u = 0; u < V; u++) { // Вивід відповідностей між вершиною і кольором
        printf("Вершинi %d ", u + 1);
        printf("присвоєний колiр %d", color[u]);
        printf("\n");
    }
        

    return 0;
}
