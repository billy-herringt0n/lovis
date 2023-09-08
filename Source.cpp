/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>


void main() {
    int rows, cols, choice, i, j, choice2;
    int* arr = 0;
    int min, max, index, sum;
    SetConsoleCP(1251);//Установка языка
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    do {
        printf("\tÌåíþ\n");
        printf("1. Ïðîñìîòðåòü ìàññèâ\n");
        printf("2. Íàéòè ìàêñèìàëüíîå è ìèíèìàëüíîå çíà÷åíèå ýåëåìåíòà ìàññèâà\n");
        printf("3. Ïîñ÷èòàòü ñóììó ýëìåíòîâ ìàññèâà â ñòðîêå èëè ñòîëáöå\n");
        printf("4. Ñîçäàòü íîâûé ìàññèâ\n");
        printf("5. Âûõîä\n");
        printf("Âûáåðèòå äåéñòâèå: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            if (arr == NULL) {
                printf("Ñíà÷àëà ñîçäàéòå ìàññèâ!\n");
                break;
            }
            for (i = 0; i < rows; i++) {  // öèêë ïî ñòðîêàì
                for (j = 0; j < cols; j++) { // öèêë ïî ñòîëáöàì
                    printf("%5d ", *(arr + i * cols + j)); // âûâîä ýëåìåíòîâ ìàññèâà
                }
                printf("\n");
            }
            break;
        case 2:
            if (arr == NULL) {
                printf("Ñíà÷àëà ñîçäàéòå ìàññèâ!\n");
                break;
            }
            min = *(arr + 0 * cols + 0);
            max = *(arr + 0 * cols + 0);
            for (i = 0; i < rows; i++) { // öèêë ïî ñòðîêàì
                for (j = 0; j < cols; j++) { // öèêë ïî ñòîëáöàì
                    if (*(arr + i * cols + j) < min) {
                        min = *(arr + i * cols + j);
                    }
                    if (*(arr + i * cols + j) > max) {
                        max = *(arr + i * cols + j);
                    }
                }
            }
            printf("Ìèíèìàëüíîå ÷èñëî: %d\n", min);
            printf("Ìàêñèìàëüíîå ÷èñëî: %d\n", max);
            break;
        case 3:
            if (arr == NULL) {
                printf("Ñíà÷àëà ñîçäàéòå ìàññèâ!\n");
                break;
            }
            do {
                printf("\n\tÌåíþ\n");
                printf("1. Ïîñ÷èòàòü ñóììó â ñòîëáöå\n");
                printf("2. Ïîñ÷èòàòü ñóììó â ñòðîêå\n");
                printf("3. Âåðíóòüñÿ\n");
                printf("Âûáåðèòå äåéñòâèå: ");
                scanf("%d", &choice2);
                switch (choice2) {
                case 1:
                    sum = 0;
                    printf("Âûáåðèòå íîìåð ñòîáöà: ");
                    scanf("%d", &index);
                    for (i = 0; i < rows; i++) {
                        sum += *(arr + i * cols + index - 1);
                    }
                    printf("\nÑóììà ðàâíà: %d", sum);
                    break;
                case 2: 
                    sum = 0;
                    printf("Âûáåðèòå íîìåð ñòðîêè: ");
                    scanf("%d", &index);
                    for (j = 0; j < cols; j++) {
                        sum += *(arr + (index - 1) * cols + j);
                    }
                    printf("\nÑóììà ðàâíà: %d", sum);
                    break;
                case 3: 
                    system("cls");
                    break;
                default:
                    system("cls");
                    printf("Íåêîððåêòíûé âûáîð!\n");
                    break;
                }
            } while (choice2 != 3);
            break;
        case 4:
            printf("Ââåäèòå êîëè÷åñòâî ñòðîê: ");
            scanf("%d", &rows);
            printf("Ââåäèòå êîëè÷åñòâî ñòîëáöîâ: ");
            scanf("%d", &cols);
            arr = (int*)malloc(rows * cols * sizeof(int));
            if (arr == NULL) {
                printf("Íå óäàëîñü âûäåëèòü ïàìÿòü!\n");
                break;
            }
            for (i = 0; i < rows; i++)  { // öèêë ïî ñòðîêàì
                for (j = 0; j < cols; j++)  { // öèêë ïî ñòîëáöàì
                    *(arr + i * cols + j) = rand () % 10;
                }
            }
            printf("Ìàññèâ ñîçäàí!\n");
            break;
        case 5:
            system("cls");
            printf("Äî ñâèäàíèÿ!\n");
            break;
        default:
            system("cls");
            printf("Íåêîððåêòíûé âûáîð!\n");
            break;
        }
    } while (choice != 5);
}*/
