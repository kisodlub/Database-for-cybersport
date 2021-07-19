#include "change.h"
#include "struct.h"
#include "input.h"

extern int z;
extern GAME *p;

void remove() {
	int y;
	string r;
	system("cls");
	printf("Введите номер удаляемой записи :");
	getline(cin, r);
	y = atoi(r.c_str());
	if (y > z || y < 1) {
		printf("\nЗапись не найдена...\n\nНажмите Enter для перехода в предыдущее меню");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
		for (int i = y-1; i < z-1; i++) {
			p[i] = p[i + 1];
		}
		z--;
		p = (GAME*)realloc(p, z * sizeof(GAME));
		printf("\nЗапись спешно удалена...\n\nНажмите Enter для прехода в предыдущее меню...");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
}

void change() {
	int y;
	string x;
	system("cls");
	printf("Введите номер изменяемой записи :");
	getline(cin, x);
	y = atoi(x.c_str());
	if (y > z || y < 1) {
		printf("\nЗапись не найдена...\n\nНажмите Enter для перехода в предыдущее меню");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
		string a, b, c, g, h, j, k, m;
		int r, d, e, f, t, u;
		printf("\nИзменение записи номер %d :\n\nВведите данные...\n", y);

		u = y - 1;

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
			p[u].title[i] = g[i];
		}
		p[u].title[r] = 0;


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
		p[u].prpl = d;


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
			p[u].name[i] = h[i];
		}
		p[u].name[r] = 0;


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
					if (d == 0)
						t++;
					if (e > 12 || e == 0)
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
			p[u].date[i] = j[i];
		}
		p[u].date[r] = 0;


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
		p[u].amount = e;


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
		p[u].views = f;


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
			p[u].team[i] = k[i];
		}
		p[u].team[r] = 0;


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
			p[u].tourn[i] = m[i];

		}
		p[u].tourn[r] = 0;


		printf("\nИнформация изменена...");
		printf("\n\nНажмите клавишу Enter для перехода в меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
}

