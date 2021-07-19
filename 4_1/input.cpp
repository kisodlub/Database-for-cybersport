#include "input.h"
#include "struct.h"

extern int z;
extern GAME *p;

void vvod() {
	system("cls");
	string a, b, c, g, h, j, k, m;
	int r, d, e, f, y, t;
	if (z == 0)
		p = (GAME*)malloc(sizeof(GAME));
	else
		p = (GAME*)realloc(p, (z + 1) * sizeof(GAME));
	printf("Введите данные...\n");
	
	
	printf("Название киберспортивной дисциплины : ");
	r = 30;
	while (r >= 30 || t == r) {
		t = 0;
		getline(cin, g);
		r = size(g);
		for (int i = 0; i < r; i++) {
			if (g[i] == ' ')
				t++;
		}
		if (r >= 30 || t == r) {
			printf("Некорректный ввод. Введите название снова :");
		}
	}
	for (int i = 0; i < r; i++) {
		p[z].title[i] = g[i];
	}
	p[z].title[r] = 0;
	
	
	printf("Максимальный призовой фонд (в $) : ");
	r = 10;
	while (r >= 10 || d <= 0 || t > 0) {
		t = 0;
		getline(cin, a);
		r = size(a);
		for (int i = 0; i < r; i++) {
			if ((int)a[i] < 48 || (int)a[i] > 57)
				t++;
		}
		d = atoi(a.c_str());
		if (r >= 10 || d <= 0 || t > 0)
			printf("Некорректный ввод. Введите число снова :");
	}
	p[z].prpl = d;
	
	
	printf("Никнейм самого успешного игрока : ");
	r = 20;
	while (r >= 20 || t == r) {
		t = 0;
		getline(cin, h);
		r = size(h);
		for (int i = 0; i < r; i++) {
			if (h[i] == ' ')
				t++;
		}
		if (r >= 20 || t == r) {
			printf("Некорректный ввод. Введите никнейм ещё раз :");
		}
	}
	for (int i = 0; i < r; i++) {
		p[z].name[i] = h[i];
	}
	p[z].name[r] = 0;
	
	
	printf("Дата проведения первого турнира (в формате дд.мм.гггг) : ");
	r = 9;
	while (r != 10 || t > 0) {
		t = 0;
		getline(cin, j);
		r = size(j);
		if (r != 10)
			printf("Некорректнй ввод. Введите дату снова : ");
		else {
			char q[10];
			for (int i = 0; i < r; i++) {
				q[i] = j[i];
			}
			if (q[2] != '.' || q[5] != '.')
				t++;
			else {
				char *str = strtok(q, ".");
				d = atoi(str);
				str = strtok(NULL, ".");
				e = atoi(str);
				str = strtok(NULL, ".");
				f = atoi(str);
				if (d <= 0)
					t++;
				if (e > 12 || e <= 0)
					t++;
				if (f > 2019 || f < 1900)
					t++;
				if (e == 1)
					if (d > 31)
						t++;
				if (e == 2) {
					if (f % 4 != 0 && d > 28)
						t++;
					if (f % 4 == 0 && f % 100 == 0 && f % 400 != 0 && d > 28)
						t++;
					if (f % 4 != 0 && f % 100 != 0 && f % 400 != 0 && d > 28)
						t++;
				}
				if (e == 3)
					if (d > 31)
						t++;
				if (e == 4)
					if (d > 30)
						t++;
				if (e == 5)
					if (d > 31)
						t++;
				if (e == 6)
					if (d > 30)
						t++;
				if (e == 7)
					if (d > 31)
						t++;
				if (e == 8)
					if (d > 30)
						t++;
				if (e == 9)
					if (d > 31)
						t++;
				if (e == 10)
					if (d > 30)
						t++;
				if (e == 11)
					if (d > 31)
						t++;
				if (e == 12)
					if (d > 30)
						t++;
			}
			if (t > 0)
				printf("Некорректнй ввод. Введите дату снова : ");
		}
	}
	for (int i = 0; i < r; i++) {
		p[z].date[i] = j[i];
	}
	p[z].date[r] = 0;
	
	
	printf("Количество проведённых турниров : ");
	r = 5;
	while (r >= 5 || e <= 0 || t > 0) {
		t = 0;
		getline(cin, b);
		r = size(b);
		for (int i = 0; i < r; i++) {
			if ((int)b[i] < 48 || (int)b[i] > 57)
				t++;
		}
		e = atoi(b.c_str());
		if (r >= 5 || e <= 0 || t > 0)
			printf("Некорректный ввод. Введите число снова :");
	}
	p[z].amount = e;
	
	
	printf("Максимальное количество зрителей : ");
	r = 11;
	while (r >= 11 || f > 2000000000 || f <= 0 || t > 0) {
		t = 0;
		getline(cin, c);
		r = size(c);
		for (int i = 0; i < r; i++) {
			if ((int)c[i] < 48 || (int)c[i] > 57)
				t++;
		}
		f = atoi(c.c_str());
		if (r >= 11 || f > 2000000000 || f <= 0 || t > 0)
			printf("Некорректный ввод. Введите число ещё раз :");
	}
	p[z].views = f;
	
	
	printf("Название самой популярной команды : ");
	r = 30;
	while (r >= 30 || t == r) {
		t = 0;
		getline(cin, k);
		r = size(k);
		for (int i = 0; i < r; i++) {
			if (k[i] == ' ')
				t++;
		}
		if (r >= 30 || t == r) {
			printf("Некорректный ввод. Введите никнейм ещё раз :");
		}
	}
	for (int i = 0; i < r; i++) {
		p[z].team[i] = k[i];
	}
	p[z].team[r] = 0;


	printf("Название самого крупного турнира : ");
	r = 30;
	while (r >= 30 || t == r) {
		t = 0;
		getline(cin, m);
		r = size(m);
		for (int i = 0; i < r; i++) {
			if (m[i] == ' ')
				t++;
		}
		if (r >= 30 || t == r) {
			printf("Некорректный ввод. Введите никнейм ещё раз :");
		}
	}
	for (int i = 0; i < r; i++) {
		p[z].tourn[i] = m[i];

	}
	p[z].tourn[r] = 0;
	
	
	printf("\nИнформация добавлена...");
	printf("\n\nНажмите клавишу Enter для перехода в меню... ");
	while (1) {
		y = _getch();
		if (y == 13) {
			break;
		}
	}
	z++;
}

void vevod_line() {
	system("cls");
	int i, y;
	if (z == 0) {
		printf("Нет данных для вывода...");
		printf("\n\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
		for (i = 0; i < z; i++) {
			printf("Информация о %d-ой дисциплине :\n\n", i + 1);
			printf("Название киберспортивной дисциплины : ");
			puts(p[i].title);
			printf("Максимальный призовой фонд : ");
			cout << p[i].prpl << " $";
			printf("\nНикнейм самого успешного игрока : ");
			puts(p[i].name);
			printf("Дата проведения первого турнира : ");
			puts(p[i].date);
			printf("Количество проведённых турниров : ");
			cout << p[i].amount;
			printf("\nМаксимальное количество зрителей : ");
			cout << p[i].views;
			printf("\nНазвание самой популярной команды : ");
			puts(p[i].team);
			printf("Название самого крупного турнира : ");
			puts(p[i].tourn);
			cout << endl;
			for (int j = 0; j < 135; j++) {
				printf("-");
			}
			cout << endl;
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

void vevod_tabl() {
	system("cls");
	int y, u = 0, size = 0, perevod = 0, v = 0;
	char x1[15], x2[15], x3[15], x4[15];
	x1[0] = 0; x2[0] = 0; x3[0] = 0; x4[0] = 0;
	if (z == 0) {
		printf("Нет данных для вывода...");
		printf("\n\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
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

		for (int f = 0; f < z; f++) {
			for (int i = 0; i < 135; i++) {
				t[i] = ' ';
			}
			t[20] = '|'; t[34] = '|'; t[51] = '|'; t[68] = '|'; t[81] = '|'; t[96] = '|'; t[115] = '|';
			t[0] = '|'; t[134] = '|'; printf("%s", t);
			printf("|");

			for (int i = 0; i < 19; i++) {
				if (p[f].title[i] == 0) {
					size = strlen(p[f].title);
					for (int j = 0; j < 19 - size; j++) {
						printf(" ");
					}
					break;
				}
				if (i == 18 && p[f].title[19] != 0 && p[f].title[19] != ' ') {
					perevod++;
					printf("-");
					size = strlen(p[f].title);
					v = 18;
					for (int h = 0; h < size - 18; h++, v++) {
						x1[h] = p[f].title[v];
					}
					x1[size - 18] = 0;
					break;
				}
				else if (i == 18 && p[f].title[19] != 0 && p[f].title[19] == ' ') {
					perevod++;
					cout << p[f].title[i];
					size = strlen(p[f].title);
					v = 20;
					for (int h = 0; h < size - 20; h++, v++) {
						x1[h] = p[f].title[v];
					}
					x1[size - 20] = 0;
					break;
				}
				cout << p[f].title[i];
			}
			size = 0;

			printf("|");

			cout << p[f].prpl;
			int chislo;
			chislo = p[f].prpl;
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
				if (p[f].name[i] == 0) {
					size = strlen(p[f].name);
					for (int j = 0; j < 16 - size; j++) {
						printf(" ");
					}
					break;
				}
				if (i == 15 && p[f].name[16] != 0 && p[f].name[16] != ' ') {
					perevod++;
					printf("-");
					size = strlen(p[f].name);
					v = 15;
					for (int h = 0; h < size - 15; h++, v++) {
						x2[h] = p[f].name[v];
					}
					x2[size - 15] = 0;
					break;
				}
				else if (i == 15 && p[f].name[16] != 0 && p[f].name[16] == ' ') {
					perevod++;
					cout << p[f].name[i];
					size = strlen(p[f].name);
					v = 17;
					for (int h = 0; h < size - 17; h++, v++) {
						x2[h] = p[f].name[v];
					}
					x2[size - 17] = 0;
					break;
				}
				cout << p[f].name[i];
			}
			size = 0;
			printf("|");

			for (int i = 0; i < 16; i++) {
				size = strlen(p[f].date);
				if (p[f].date[i] == 0) {
					for (int j = 0; j < 16 - size; j++) {
						printf(" ");
					}
					break;
				}
				cout << p[f].date[i];
			}
			size = 0;

			printf("|");

			cout << p[f].amount;
			chislo = p[f].amount;
			while (chislo != 0) {
				chislo /= 10;
				size++;
			}

			for (int i = 0; i < 12 - size; i++) {
				printf(" ");
			}
			size = 0;

			printf("|");

			cout << p[f].views;
			chislo = p[f].views;
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
				if (p[f].team[i] == 0) {
					size = strlen(p[f].team);
					for (int j = 0; j < 18 - size; j++) {
						printf(" ");
					}
					break;
				}
				if (i == 17 && p[f].team[18] != 0 && p[f].team[18] != ' ') {
					perevod++;
					printf("-");
					size = strlen(p[f].team);
					v = 17;
					for (int h = 0; h < size - 17; h++, v++) {
						x3[h] = p[f].team[v];
					}
					x3[size - 17] = 0;
					break;
				}
				else if (i == 17 && p[f].team[18] != 0 && p[f].team[18] == ' ') {
					perevod++;
					cout << p[f].team[i];
					size = strlen(p[f].team);
					v = 19;
					for (int h = 0; h < size - 19; h++, v++) {
						x3[h] = p[f].team[v];
					}
					x3[size - 19] = 0;
					break;
				}
				cout << p[f].team[i];
			}
			size = 0;

			printf("|");

			for (int i = 0; i < 18; i++) {
				if (p[f].tourn[i] == 0) {
					size = strlen(p[f].tourn);
					for (int j = 0; j < 18 - size; j++) {
						printf(" ");
					}
					break;
				}
				if (i == 17 && p[f].tourn[18] != 0 && p[f].tourn[18] != ' ') {
					perevod++;
					printf("-");
					size = strlen(p[f].tourn);
					v = 17;
					for (int h = 0; h < size - 17; h++, v++) {
						x4[h] = p[f].tourn[v];
					}
					x4[size - 17] = 0;
					break;
				}
				else if (i == 17 && p[f].tourn[18] != 0 && p[f].tourn[18] == ' ') {
					perevod++;
					cout << p[f].tourn[i];
					size = strlen(p[f].tourn);
					v = 19;
					for (int h = 0; h < size - 19; h++, v++) {
						x4[h] = p[f].tourn[v];
					}
					x4[size - 19] = 0;
					break;
				}
				cout << p[f].tourn[i];
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
		printf("\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
}