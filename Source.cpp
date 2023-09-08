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
    SetConsoleCP(1251);//��������� �����
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    do {
        printf("\t����\n");
        printf("1. ����������� ������\n");
        printf("2. ����� ������������ � ����������� �������� ��������� �������\n");
        printf("3. ��������� ����� �������� ������� � ������ ��� �������\n");
        printf("4. ������� ����� ������\n");
        printf("5. ��������� ���������� ����� � ������\n");
        printf("6. ��������� ���������� ����� � �������\n");
        printf("7. �����\n");
        printf("�������� ��������: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            if (arr == NULL) {
                printf("������� �������� ������!\n");
                break;
            }
            for (i = 0; i < rows; i++) {  // ���� �� �������
                for (j = 0; j < cols; j++) { // ���� �� ��������
                    printf("%5d ", arr[i][j]); // ����� ��������� �������
                }
                printf("\n");
            }
            break;
        case 2:
            if (arr == NULL) {
                printf("������� �������� ������!\n");
                break;
            }
            min = arr[0][0];
            max = arr[0][0];
            for (i = 0; i < rows; i++) { // ���� �� �������
                for (j = 0; j < cols; j++) { // ���� �� ��������
                    if (arr[i][j] < min) {
                        min = arr[i][j];
                    }
                    if (arr[i][j] > max) {
                        max = arr[i][j];
                    }
                }
            }
            printf("����������� �����: %d\n", min);
            printf("������������ �����: %d\n", max);
            break;
        case 3:
            if (arr == NULL) {
                printf("������� �������� ������!\n");
                break;
            }
            do {
                printf("\n\t����\n");
                printf("1. ��������� ����� � �������\n");
                printf("2. ��������� ����� � ������\n");
                printf("3. ���������\n");
                printf("�������� ��������: ");
                scanf("%d", &choice2);
                switch (choice2) {
                case 1:
                    sum = 0;
                    printf("�������� ����� ������: ");
                    scanf("%d", &index);
                    if (index > rows) {
                        printf("������ ������� �� ����������!\n");
                        break;
                    }
                    for (i = 0; i < rows; i++) {
                        sum += arr[i][index - 1];
                    }
                    printf("\n����� �����: %d", sum);
                    break;
                case 2:
                    sum = 0;
                    printf("�������� ����� ������: ");
                    scanf("%d", &index);
                    if (index > cols) {
                        printf("����� ������ �� ����������!\n");
                        break;
                    }
                    for (j = 0; j < cols; j++) {
                        sum += arr[index - 1][j];
                    }
                    printf("\n����� �����: %d", sum);
                    break;
                case 3:
                    system("cls");
                    break;
                default:
                    system("cls");
                    printf("������������ �����!\n");
                    break;
                }
            } while (choice2 != 3);
            break;
        case 4:
            printf("������� ���������� �����: ");
            scanf("%d", &rows);
            printf("������� ���������� ��������: ");
            scanf("%d", &cols);
            arr = (int**)malloc(rows * sizeof(int*));
            rows2 = rows / 2;
            if (arr == NULL) {
                printf("�� ������� �������� ������!\n");
                break;
            }
            for (i = 0; i < rows; i++) {
                arr[i] = (int*)malloc(cols * sizeof(int));
            }
            for (i = 0; i < rows2; i++) { // ���� �� �������
                for (j = 0; j < cols; j++) { // ���� �� ��������
                    arr[rand() % rows][rand() % cols] = 0;
                }
            }
            
                for (i = 0; i < rows; i++) { // ���� �� �������
                    for (j = 0; j < cols; j++) { // ���� �� ��������
                        if (arr[i][j] != 0) {
                        arr[i][j] = rand() % 100;
                    }
                }     
            }
            printf("������ ������!\n");
            break;

        case 5: 
            printf("\n�������� ����� ������: ");
            scanf("%d", &index);
            k = 0;
            if (index > cols) {
                printf("����� ������ �� ����������!\n");
                break;
            }
            for (i = 0; i < cols; i++) {
                if (arr[index - 1][i] == 0) {
                    k++;
                }
            }
            printf("���������� ����� � ������: %d\n", k);
            break;
        case 6:
            printf("\n�������� ����� �������: ");
            scanf("%d", &index);
            if (index > rows) {
                printf("����� ������ �� ����������!\n");
                break;
            }
            k = 0;
            for (i = 0; i < cols; i++) {
                if (arr[i][index - 1] == 0) {
                    k++;
                }
            }
            printf("���������� ����� � �������: %d\n", k);
            break;
        case 7:
            system("cls");
            printf("�� ��������!\n");
            break;
        default:
            system("cls");
            printf("������������ �����!\n");
            break;
        }
    } while (choice != 7);
}
