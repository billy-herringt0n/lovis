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
        printf("\t����\n");
        printf("1. ����������� ������\n");
        printf("2. ����� ������������ � ����������� �������� ��������� �������\n");
        printf("3. ��������� ����� �������� ������� � ������ ��� �������\n");
        printf("4. ������� ����� ������\n");
        printf("5. �����\n");
        printf("�������� ��������: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            for (i = 0; i < n; i++) {  // ���� �� �������
                for (j = 0; j < m; j++) { // ���� �� ��������
                    printf("%5d ", *(arr + i * m + j)); // 5 ��������� ��� ������� �������
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
            printf("������� ���������� �����: ");
            scanf("%d", &n);
            printf("������� ���������� ��������: ");
            scanf("%d", &m);
            arr = (int*)malloc(n * m * sizeof(int));
            if (arr == NULL) {
                printf("�� ������� �������� ������!\n");
                return;
            }
            for (j = 0; j < m * n; j++) {
                arr[j] = rand();
            }
            break;
        case 5:
            system("cls");
            printf("�� ��������!\n");
            free(arr);
            break;
        default:
            system("cls");
            printf("������������ �����!\n");
            break;
        }
    } while (choice != 5);
}