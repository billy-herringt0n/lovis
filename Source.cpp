#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


void main() {
    int n, m, choice, i, j;
    int* arr = 0;
    setlocale(LC_ALL, "RUS");
    srand(time(NULL));
    do {
        printf("\tМеню\n");
        printf("1. Просмотреть массив\n");
        printf("2. Найти максимальное и минимальное значение эелемента массива\n");
        printf("3. Посчитать сумму элментов массива в строке или столбце\n");
        printf("4. Создать новый массив\n");
        printf("5. Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            for (i = 0; i < n; i++) {  // цикл по строкам
                for (j = 0; j < m; j++) { // цикл по столбцам
                    printf("%5d ", *(arr + i * m + j)); // 5 знакомест под элемент массива
                }
                printf("\n");
            }
            free(arr);
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            printf("Введите количество строк: ");
            scanf("%d", &n);
            printf("Введите количество столбцов: ");
            scanf("%d", &m);
            arr = (int*)malloc(n * m * sizeof(int));
            if (arr == NULL) {
                printf("Не удалось выделить память!\n");
                return;
            }
            for (j = 0; j < m * n; j++) {
                arr[j] = rand();
            }
            break;
        case 5:
            system("cls");
            printf("До свидания!\n");
            free(arr);
            break;
        default:
            system("cls");
            printf("Некорректный выбор!\n");
            break;
        }
    } while (choice != 5);
}