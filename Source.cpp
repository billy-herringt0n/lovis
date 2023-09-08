#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


void main() {
    int rows, cols, rows2, cols2, choice, i, j, choice2, k;
    int** arr = 0;
    int min, max, index, sum;
    SetConsoleCP(1251);//Установка языка
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    do {
        printf("\tМеню\n");
        printf("1. Просмотреть массив\n");
        printf("2. Найти максимальное и минимальное значение эелемента массива\n");
        printf("3. Посчитать сумму элментов массива в строке или столбце\n");
        printf("4. Создать новый массив\n");
        printf("5. Посчитать количесвто нулей в строке\n");
        printf("6. Посчитать количество нулей в столбце\n");
        printf("7. Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            if (arr == NULL) {
                printf("Сначала создайте массив!\n");
                break;
            }
            for (i = 0; i < rows; i++) {  // цикл по строкам
                for (j = 0; j < cols; j++) { // цикл по столбцам
                    printf("%5d ", arr[i][j]); // вывод элементов массива
                }
                printf("\n");
            }
            break;
        case 2:
            if (arr == NULL) {
                printf("Сначала создайте массив!\n");
                break;
            }
            min = arr[0][0];
            max = arr[0][0];
            for (i = 0; i < rows; i++) { // цикл по строкам
                for (j = 0; j < cols; j++) { // цикл по столбцам
                    if (arr[i][j] < min) {
                        min = arr[i][j];
                    }
                    if (arr[i][j] > max) {
                        max = arr[i][j];
                    }
                }
            }
            printf("Минимальное число: %d\n", min);
            printf("Максимальное число: %d\n", max);
            break;
        case 3:
            if (arr == NULL) {
                printf("Сначала создайте массив!\n");
                break;
            }
            do {
                printf("\n\tМеню\n");
                printf("1. Посчитать сумму в столбце\n");
                printf("2. Посчитать сумму в строке\n");
                printf("3. Вернуться\n");
                printf("Выберите действие: ");
                scanf("%d", &choice2);
                switch (choice2) {
                case 1:
                    sum = 0;
                    printf("Выберите номер стобца: ");
                    scanf("%d", &index);
                    if (index > rows) {
                        printf("Такого столбца не существует!\n");
                        break;
                    }
                    for (i = 0; i < rows; i++) {
                        sum += arr[i][index - 1];
                    }
                    printf("\nСумма равна: %d", sum);
                    break;
                case 2:
                    sum = 0;
                    printf("Выберите номер строки: ");
                    scanf("%d", &index);
                    if (index > cols) {
                        printf("Такой строки не существует!\n");
                        break;
                    }
                    for (j = 0; j < cols; j++) {
                        sum += arr[index - 1][j];
                    }
                    printf("\nСумма равна: %d", sum);
                    break;
                case 3:
                    system("cls");
                    break;
                default:
                    system("cls");
                    printf("Некорректный выбор!\n");
                    break;
                }
            } while (choice2 != 3);
            break;
        case 4:
            printf("Введите количество строк: ");
            scanf("%d", &rows);
            printf("Введите количество столбцов: ");
            scanf("%d", &cols);
            arr = (int**)malloc(rows * sizeof(int*));
            rows2 = rows / 2;
            if (arr == NULL) {
                printf("Не удалось выделить память!\n");
                break;
            }
            for (i = 0; i < rows; i++) {
                arr[i] = (int*)malloc(cols * sizeof(int));
            }
            for (i = 0; i < rows2; i++) { // цикл по строкам
                for (j = 0; j < cols; j++) { // цикл по столбцам
                    arr[rand() % rows][rand() % cols] = 0;
                }
            }
            
                for (i = 0; i < rows; i++) { // цикл по строкам
                    for (j = 0; j < cols; j++) { // цикл по столбцам
                        if (arr[i][j] != 0) {
                        arr[i][j] = rand() % 100;
                    }
                }     
            }
            printf("Массив создан!\n");
            break;

        case 5: 
            printf("\nВыберите номер строки: ");
            scanf("%d", &index);
            k = 0;
            if (index > cols) {
                printf("Такой строки не существует!\n");
                break;
            }
            for (i = 0; i < cols; i++) {
                if (arr[index - 1][i] == 0) {
                    k++;
                }
            }
            printf("Количество нулей в строке: %d\n", k);
            break;
        case 6:
            printf("\nВыберите номер столбца: ");
            scanf("%d", &index);
            if (index > rows) {
                printf("Такой строки не существует!\n");
                break;
            }
            k = 0;
            for (i = 0; i < cols; i++) {
                if (arr[i][index - 1] == 0) {
                    k++;
                }
            }
            printf("Количество нулей в столбце: %d\n", k);
            break;
        case 7:
            system("cls");
            printf("До свидания!\n");
            break;
        default:
            system("cls");
            printf("Некорректный выбор!\n");
            break;
        }
    } while (choice != 7);
}
