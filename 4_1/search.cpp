#include "search.h"
#include "struct.h"

extern int z;
extern GAME *p;

void search(int j) {
	int y, k = 0, r, *mas = 0;
	string str;
	system("cls");
	if (z == 0) {
		printf("Нет данных для поиска...");
		printf("\n\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
		if (j == 1) {
			printf("Введите строку для поиска :");
			r = 30;
			while (r >= 30) {
				getline(cin, str);
				r = size(str);
				if (r >= 30)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			char str1[30];
			for (int i = 0; i < r; i++) {
				str1[i] = str[i];
			}
			str1[r] = 0;
			for (int i = 0; i < z; i++) {
				int sr = strcmp(str1, p[i].title);
				if (sr == 0) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 3) {
			printf("Введите строку для поиска :");
			r = 20;
			while (r >= 20) {
				getline(cin, str);
				r = size(str);
				if (r >= 20)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			char str1[20];
			for (int i = 0; i < r; i++) {
				str1[i] = str[i];
			}
			str1[r] = 0;
			for (int i = 0; i < z; i++) {
				int sr = strcmp(str1, p[i].name);
				if (sr == 0) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 4) {
			printf("Введите строку для поиска :");
			r = 11;
			while (r >= 11) {
				getline(cin, str);
				r = size(str);
				if (r >= 11)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			char str1[11];
			for (int i = 0; i < r; i++) {
				str1[i] = str[i];
			}
			str1[r] = 0;
			for (int i = 0; i < z; i++) {
				int sr = strcmp(str1, p[i].date);
				if (sr == 0) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 7) {
			printf("Введите строку для поиска :");
			r = 30;
			while (r >= 30) {
				getline(cin, str);
				r = size(str);
				if (r >= 30)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			char str1[30];
			for (int i = 0; i < r; i++) {
				str1[i] = str[i];
			}
			str1[r] = 0;
			for (int i = 0; i < z; i++) {
				int sr = strcmp(str1, p[i].team);
				if (sr == 0) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 8) {
			printf("Введите строку для поиска :");
			r = 30;
			while (r >= 30) {
				getline(cin, str);
				r = size(str);
				if (r >= 30)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			char str1[30];
			for (int i = 0; i < r; i++) {
				str1[i] = str[i];
			}
			str1[r] = 0;
			for (int i = 0; i < z; i++) {
				int sr = strcmp(str1, p[i].tourn);
				if (sr == 0) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 2) {
			printf("Введите строку для поиска :");
			r = 10;
			while (r >= 10) {
				getline(cin, str);
				r = size(str);
				if (r >= 10)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			int sr = atoi(str.c_str());
			for (int i = 0; i < z; i++) {
				if (p[i].prpl == sr) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 5) {
			printf("Введите строку для поиска :");
			r = 5;

			while (r >= 5) {
				getline(cin, str);
				r = size(str);
				if (r >= 5)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			int sr = atoi(str.c_str());
			for (int i = 0; i < z; i++) {
				if (p[i].amount == sr) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		if (j == 6) {
			printf("Введите строку для поиска :");
			r = 11;
			while (r >= 11) {
				getline(cin, str);
				r = size(str);
				if (r >= 11)
					printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
			}
			int sr = atoi(str.c_str());
			for (int i = 0; i < z; i++) {
				if (p[i].views == sr) {
					k++;
					if (k == 1) {
						mas = (int*)malloc(sizeof(int));
					}
					else
						mas = (int*)realloc(mas, k * sizeof(int));
					mas[k - 1] = i;
				}
			}
			if (k == 0)
				printf("\nТакой записи нет...\n");
			else if (k == 1)
				output(k, mas);
			else if (k > 1)
				output(k, mas);
		}
		printf("\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
}

void output(int r, int mas[]) {
	system("cls");
	int u = 0, size = 0, perevod = 0, v = 0;
	char x1[15], x2[15], x3[15], x4[15];
	x1[0] = 0; x2[0] = 0; x3[0] = 0; x4[0] = 0;
	char t[136];
	for (int i = 0; i < 135; i++) {
		t[i] = '-';
	}
	t[0] = '/';
	t[19] = '\\'; t[20] = '_'; t[21] = '/';
	t[33] = '\\'; t[34] = '_'; t[35] = '/';
	t[50] = '\\'; t[51] = '_'; t[52] = '/';
	t[67] = '\\'; t[68] = '_'; t[69] = '/';
	t[80] = '\\'; t[81] = '_'; t[82] = '/';
	t[95] = '\\'; t[96] = '_'; t[97] = '/';
	t[114] = '\\'; t[115] = '_'; t[116] = '/';
	t[134] = '\\'; t[135] = '\0';
	printf("%s", t);
	printf("|Название           |"); printf("Максимальный |"); printf("Никнейм самого  |"); printf("Дата проведения |"); printf("Количество  |"); printf("Максимальное  |"); printf("Название самой    |"); printf("Название самого   |");
	printf("|киберспортивной    |"); printf("призовой     |"); printf("успешного       |"); printf("первого         |"); printf("проведённых |"); printf("количество    |"); printf("популярной        |"); printf("крупного          |");
	printf("|дисциплины :       |"); printf("фонд :       |"); printf("игрока :        |"); printf("турнира :       |"); printf("турниров :  |"); printf("зрителей :    |"); printf("команды :         |"); printf("турнира :         |");
	for (int i = 0; i < 135; i++) {
		t[i] = '-';
	}
	t[20] = '*'; t[34] = '*'; t[51] = '*'; t[68] = '*'; t[81] = '*'; t[96] = '*'; t[115] = '*';
	t[0] = '\\'; t[134] = '/'; t[135] = '\0';
	printf("%s", t);

	for (int f = 0; f < r; f++) {
		for (int i = 0; i < 135; i++) {
			t[i] = ' ';
		}
		t[20] = '|'; t[34] = '|'; t[51] = '|'; t[68] = '|'; t[81] = '|'; t[96] = '|'; t[115] = '|';
		t[0] = '|'; t[134] = '|'; printf("%s", t);
		printf("|");

		for (int i = 0; i < 19; i++) {
			if (p[mas[f]].title[i] == 0) {
				size = strlen(p[mas[f]].title);
				for (int j = 0; j < 19 - size; j++) {
					printf(" ");
				}
				break;
			}
			if (i == 18 && p[mas[f]].title[19] != 0 && p[mas[f]].title[19] != ' ') {
				perevod++;
				printf("-");
				size = strlen(p[mas[f]].title);
				v = 18;
				for (int h = 0; h < size - 18; h++, v++) {
					x1[h] = p[mas[f]].title[v];
				}
				x1[size - 18] = 0;
				break;
			}
			else if (i == 18 && p[mas[f]].title[19] != 0 && p[mas[f]].title[19] == ' ') {
				perevod++;
				cout << p[mas[f]].title[i];
				size = strlen(p[mas[f]].title);
				v = 20;
				for (int h = 0; h < size - 20; h++, v++) {
					x1[h] = p[mas[f]].title[v];
				}
				x1[size - 20] = 0;
				break;
			}
			cout << p[mas[f]].title[i];
		}
		size = 0;

		printf("|");

		cout << p[mas[f]].prpl;
		int chislo;
		chislo = p[mas[f]].prpl;
		while (chislo != 0) {
			chislo /= 10;
			size++;
		}
		printf(" $");
		for (int i = 0; i < 11 - size; i++) {
			printf(" ");
		}
		size = 0;

		printf("|");

		for (int i = 0; i < 16; i++) {
			if (p[mas[f]].name[i] == 0) {
				size = strlen(p[mas[f]].name);
				for (int j = 0; j < 16 - size; j++) {
					printf(" ");
				}
				break;
			}
			if (i == 15 && p[mas[f]].name[16] != 0 && p[mas[f]].name[16] != ' ') {
				perevod++;
				printf("-");
				size = strlen(p[mas[f]].name);
				v = 15;
				for (int h = 0; h < size - 15; h++, v++) {
					x2[h] = p[mas[f]].name[v];
				}
				x2[size - 15] = 0;
				break;
			}
			else if (i == 15 && p[mas[f]].name[16] != 0 && p[mas[f]].name[16] == ' ') {
				perevod++;
				cout << p[mas[f]].name[i];
				size = strlen(p[mas[f]].name);
				v = 17;
				for (int h = 0; h < size - 17; h++, v++) {
					x2[h] = p[mas[f]].name[v];
				}
				x2[size - 17] = 0;
				break;
			}
			cout << p[mas[f]].name[i];
		}
		size = 0;
		printf("|");

		for (int i = 0; i < 16; i++) {
			size = strlen(p[mas[f]].date);
			if (p[mas[f]].date[i] == 0) {
				for (int j = 0; j < 16 - size; j++) {
					printf(" ");
				}
				break;
			}
			cout << p[mas[f]].date[i];
		}
		size = 0;

		printf("|");

		cout << p[mas[f]].amount;
		chislo = p[mas[f]].amount;
		while (chislo != 0) {
			chislo /= 10;
			size++;
		}

		for (int i = 0; i < 12 - size; i++) {
			printf(" ");
		}
		size = 0;

		printf("|");

		cout << p[mas[f]].views;
		chislo = p[mas[f]].views;
		while (chislo != 0) {
			chislo /= 10;
			size++;
		}
		for (int i = 0; i < 14 - size; i++) {
			printf(" ");
		}
		size = 0;

		printf("|");

		for (int i = 0; i < 18; i++) {
			if (p[mas[f]].team[i] == 0) {
				size = strlen(p[mas[f]].team);
				for (int j = 0; j < 18 - size; j++) {
					printf(" ");
				}
				break;
			}
			if (i == 17 && p[mas[f]].team[18] != 0 && p[mas[f]].team[18] != ' ') {
				perevod++;
				printf("-");
				size = strlen(p[mas[f]].team);
				v = 17;
				for (int h = 0; h < size - 17; h++, v++) {
					x3[h] = p[mas[f]].team[v];
				}
				x3[size - 17] = 0;
				break;
			}
			else if (i == 17 && p[mas[f]].team[18] != 0 && p[mas[f]].team[18] == ' ') {
				perevod++;
				cout << p[mas[f]].team[i];
				size = strlen(p[mas[f]].team);
				v = 19;
				for (int h = 0; h < size - 19; h++, v++) {
					x3[h] = p[mas[f]].team[v];
				}
				x3[size - 19] = 0;
				break;
			}
			cout << p[mas[f]].team[i];
		}
		size = 0;

		printf("|");

		for (int i = 0; i < 18; i++) {
			if (p[mas[f]].tourn[i] == 0) {
				size = strlen(p[mas[f]].tourn);
				for (int j = 0; j < 18 - size; j++) {
					printf(" ");
				}
				break;
			}
			if (i == 17 && p[mas[f]].tourn[18] != 0 && p[mas[f]].tourn[18] != ' ') {
				perevod++;
				printf("-");
				size = strlen(p[mas[f]].tourn);
				v = 17;
				for (int h = 0; h < size - 17; h++, v++) {
					x4[h] = p[mas[f]].tourn[v];
				}
				x4[size - 17] = 0;
				break;
			}
			else if (i == 17 && p[mas[f]].tourn[18] != 0 && p[mas[f]].tourn[18] == ' ') {
				perevod++;
				cout << p[mas[f]].tourn[i];
				size = strlen(p[mas[f]].tourn);
				v = 19;
				for (int h = 0; h < size - 19; h++, v++) {
					x4[h] = p[mas[f]].tourn[v];
				}
				x4[size - 19] = 0;
				break;
			}
			cout << p[mas[f]].tourn[i];
		}
		size = 0;

		printf("|");

		if (perevod != 0) {
			printf("|");
			for (int i = 0; i < 19; i++) {
				if (x1[i] == 0) {
					size = strlen(x1);
					for (int j = 0; j < 19 - size; j++) {
						printf(" ");
					}
					break;
				}
				printf("%c", x1[i]);
			}
			printf("|");
			for (int i = 0; i < 13; i++) {
				printf(" ");
			}
			printf("|");
			for (int i = 0; i < 16; i++) {
				if (x2[i] == 0) {
					size = strlen(x2);
					for (int j = 0; j < 16 - size; j++) {
						printf(" ");
					}
					break;
				}
				printf("%c", x2[i]);
			}
			printf("|");
			for (int i = 0; i < 16; i++) {
				printf(" ");
			}
			printf("|");
			for (int i = 0; i < 12; i++) {
				printf(" ");
			}
			printf("|");
			for (int i = 0; i < 14; i++) {
				printf(" ");
			}
			printf("|");
			for (int i = 0; i < 18; i++) {
				if (x3[i] == 0) {
					size = strlen(x3);
					for (int j = 0; j < 18 - size; j++) {
						printf(" ");
					}
					break;
				}
				printf("%c", x3[i]);
			}
			printf("|");
			for (int i = 0; i < 18; i++) {
				if (x4[i] == 0) {
					size = strlen(x4);
					for (int j = 0; j < 18 - size; j++) {
						printf(" ");
					}
					break;
				}
				printf("%c", x4[i]);
			}
			printf("|");
		}

		printf("%s", t);
		for (int i = 0; i < 135; i++) {
			t[i] = '-';
		}
		t[0] = '\\'; t[134] = '/'; t[135] = '\0';
		printf("%s", t);
	}
}