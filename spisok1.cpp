#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

struct student {
	char name[20], surname[20], faculty[10], id[10];
} chel[3];
void main() {
	SetConsoleCP(1251);//Установка языка
	SetConsoleOutputCP(1251);
	int i;
	for (i = 0; i < 3; i++) {
		printf("Ââåäèòå èìÿ ñòóäåíòà %d: ", i + 1);
		scanf("%s", chel[i].name);
		printf("Ââåäèòå ôàìèëèþ ñòóäåíòà %d: ", i + 1);
		scanf("%s", chel[i].surname);
		printf("Ââåäèòå íàçâàíèå ôàêóëüòåòà ñòóäåíòà %d: ", i + 1);
		scanf("%s", chel[i].faculty);
		printf("Ââåäèòå íîìåð çà÷¸òíîé êíèæêè ñòóäåíòà %d: ", i + 1);
		scanf("%s", chel[i].id);
	}
	char search[50];
	printf("\n×òîáû íàéòè ñòóäåíòà ââåäèòå èìÿ, ôàìèëèþ èëè íîìåð êîíòàêòà (ìîæíî ââåñòè íåñêîëüêî áóêâ èëè öèôð): ");
	scanf("%s", search);
	printf("Ðåçóëüòàòû ïîèñêà:\n");

	for (i = 0; i < 3; i++) {
		if (strstr(chel[i].name, search) != NULL || strstr(chel[i].surname, search) != NULL || strstr(chel[i].faculty, search) || strstr(chel[i].id, search)) {
			printf("%d. %s %s %s %s\n", i + 1, chel[i].name, chel[i].surname, chel[i].faculty, chel[i].id);
		}
	}
}
