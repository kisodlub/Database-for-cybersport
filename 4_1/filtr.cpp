#include "filtr.h"
#include "struct.h"
#include "search.h"

extern int z;
extern GAME *p;

void filtr() {
	string f;
	int y, r, *mas, h, x = 0;
	if (z == 0) {
		system("cls");
		printf("Отсутствуют данные для фильтрации...\n\nНажмите Enter для перехода в главное меню...");
		while (1) {
			y = _getch();
			if (y == 13)
				break;
		}
	}
	else {
		mas = (int*)malloc(z * sizeof(int));
		for (int i = 0; i < z; i++) {
			mas[i] = i;
		}
		r = z;
		int *qwe11 = (int*)malloc(r * sizeof(int));
		int *qwe12 = (int*)malloc(r * sizeof(int));
		int *qwe13 = (int*)malloc(r * sizeof(int));
		for (int i = 0; i < r; i++) {
			qwe11[i] = p[i].prpl;
			qwe12[i] = p[i].amount;
			qwe13[i] = p[i].views;
		}
		char qwe21[30];
		char qwe22[20];
		char qwe23[30];
		char qwe24[30];
		while (1) {
			system("cls");
			printf("1.Выбор фильтра\n2.Вывод данных\n3.Сброс фильтров\n\n4.Выход в главное меню");
			y = _getch();
			if (y == 52)
				break;
			if (y == 49) {
				while (1) {
					system("cls");
					printf("1.Числовой фильтр\n2.Текстовый фильтр\n3.Фильтр по дате\n\nНажмите Esc для возврата в предыдущее меню...");
					y = _getch();
					if (y == 49) {
						while (1) {
							system("cls");
							printf("1.Равно\n2.Больше\n3.Меньше\n\n4.Выход");
							y = _getch();
							if (y == 49) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Призовой фонд\n2.Количество турниров\n3.Количество зрителей\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe11[i] == y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe11[j] = qwe11[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe11 = (int*)realloc(qwe11, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 50) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe12[i] == y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe12[j] = qwe12[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe12 = (int*)realloc(qwe12, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 51) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe13[i] == y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe13[j] = qwe13[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe13 = (int*)realloc(qwe13, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 50) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Призовой фонд\n2.Количество турниров\n3.Количество зрителей\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe11[i] > y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe11[j] = qwe11[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe11 = (int*)realloc(qwe11, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 50) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe12[i] > y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe12[j] = qwe12[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe12 = (int*)realloc(qwe12, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 51) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe13[i] > y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe13[j] = qwe13[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe13 = (int*)realloc(qwe13, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 51) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Призовой фонд\n2.Количество турниров\n3.Количество зрителей\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe11[i] < y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe11[j] = qwe11[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe11 = (int*)realloc(qwe11, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 50) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe12[i] < y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe12[j] = qwe12[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe12 = (int*)realloc(qwe12, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 51) {
										system("cls");
										printf("Введите число :");
										getline(cin, f);
										y = atoi(f.c_str());
										for (int i = 0; i < r; i++) {
											if (qwe13[i] < y) {}
											else {
												for (int j = i; j < r; j++) {
													qwe13[j] = qwe13[j + 1];
													mas[j] = mas[j + 1];
												}
												r--;
												qwe13 = (int*)realloc(qwe13, r * sizeof(int));
												mas = (int*)realloc(mas, r * sizeof(int));
												i--;
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 52)
								break;
						}
					}
					if (y == 50) {
						while (1) {
							system("cls");
							printf("1.Содержит...\n2.Начинается с...\n3.Заканчивается на...\n\n4.Выход");
							y = _getch();
							if (y == 49) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Название дисциплины\n2.Никнейм игрока\n3.Название команды\n4.Название турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe21[i] = f[i];
										}
										qwe21[y] = 0;
										for (int i = 0; i < r; i++) {
											char *str = strstr(p[mas[i]].title, qwe21);
											if (str != 0) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 50) {
										system("cls");
										printf("Введите символ/строку :");
										h = 20;
										while (h >= 20) {
											getline(cin, f);
											h = size(f);
											if (h >= 20)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe22[i] = f[i];
										}
										qwe22[y] = 0;
										for (int i = 0; i < r; i++) {
											char *str = strstr(p[mas[i]].name, qwe22);
											if (str != 0) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 51) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe23[i] = f[i];
										}
										qwe23[y] = 0;
										for (int i = 0; i < r; i++) {
											char *str = strstr(p[mas[i]].team, qwe23);
											if (str != 0) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 52) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe24[i] = f[i];
										}
										qwe24[y] = 0;
										for (int i = 0; i < r; i++) {
											char *str = strstr(p[mas[i]].tourn, qwe24);
											if (str != 0) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 50) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Название дисциплины\n2.Никнейм игрока\n3.Название команды\n4.Название турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe21[i] = f[i];
										}
										qwe21[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											for (int g = 0; qwe21[g] != 0; g++) {
												if (qwe21[g] == p[mas[i]].title[g]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 50) {
										system("cls");
										printf("Введите символ/строку :");
										h = 20;
										while (h >= 20) {
											getline(cin, f);
											h = size(f);
											if (h >= 20)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe22[i] = f[i];
										}
										qwe22[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											for (int g = 0; qwe22[g] != 0; g++) {
												if (qwe22[g] == p[mas[i]].name[g]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 51) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe23[i] = f[i];
										}
										qwe23[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											for (int g = 0; qwe23[g] != 0; g++) {
												if (qwe23[g] == p[mas[i]].team[g]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 52) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe24[i] = f[i];
										}
										qwe24[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											for (int g = 0; qwe24[g] != 0; g++) {
												if (qwe24[g] == p[mas[i]].tourn[g]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 51) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Название дисциплины\n2.Никнейм игрока\n3.Название команды\n4.Название турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe21[i] = f[y - i - 1];
										}
										qwe21[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											h = strlen(p[mas[i]].title);
											for (int g = 0; qwe21[g] != 0; g++) {
												if (qwe21[g] == p[mas[i]].title[h - g - 1]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 50) {
										system("cls");
										printf("Введите символ/строку :");
										h = 20;
										while (h >= 20) {
											getline(cin, f);
											h = size(f);
											if (h >= 20)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe22[i] = f[y - i - 1];
										}
										qwe22[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											h = strlen(p[mas[i]].name);
											for (int g = 0; qwe22[g] != 0; g++) {
												if (qwe22[g] == p[mas[i]].name[h - g - 1]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 51) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe23[i] = f[y - i - 1];
										}
										qwe23[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											h = strlen(p[mas[i]].team);
											for (int g = 0; qwe23[g] != 0; g++) {
												if (qwe23[g] == p[mas[i]].team[h - g - 1]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 52) {
										system("cls");
										printf("Введите символ/строку :");
										h = 30;
										while (h >= 30) {
											getline(cin, f);
											h = size(f);
											if (h >= 30)
												printf("Строка слишком длинная. Пожалуйста, повторите ввод :");
										}
										y = size(f);
										for (int i = 0; i < y; i++) {
											qwe24[i] = f[y - i - 1];
										}
										qwe24[y] = 0;
										for (int i = 0; i < r; i++) {
											x = 0;
											h = strlen(p[mas[i]].tourn);
											for (int g = 0; qwe24[g] != 0; g++) {
												if (qwe24[g] == p[mas[i]].tourn[h - g - 1]) {
													x++;
												}
											}
											if (x == y) {}
											else {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 52)
								break;
						}
					}
					if (y == 51) {
						while (1) {
							system("cls");
							printf("1.C...по...\n2.День\n3.Месяц\n4.Год\n\n5.Выход");
							int d1 = 0, d2 = 0, m1 = 0, m2 = 0, y1 = 0, y2 = 0, dm, mm, ym;
							char str[21];
							y = _getch();
							if (y == 49) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Дата первого турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите даты (в формате :дд.мм.гггг-дд.мм.гггг) :");
										h = 20;
										while (h != 21 || y != 0) {
											y = 0;
											getline(cin, f);
											h = size(f);
											if (h != 21)
												printf("Некорректный ввод.Введите строку снова (в формате :дд.мм.гггг-дд.мм.гггг) :");
											else {
												if (f[2] != '.' || f[5] != '.' || f[10] != '-' || f[13] != '.' || f[16] != '.')
													y++;
												for (int i = 0; i < h; i++) {
													str[i] = f[i];
												}
												char *t = strtok(str, ".");
												d1 = atoi(t);
												t = strtok(NULL, ".");
												m1 = atoi(t);
												t = strtok(NULL, ".-");
												y1 = atoi(t);
												t = strtok(NULL, ".");
												d2 = atoi(t);
												t = strtok(NULL, ".");
												m2 = atoi(t);
												t = strtok(NULL, ".");
												y2 = atoi(t);
												if (d1 <= 0 || d2 <= 0)
													y++;
												if (m1 > 12 || m1 <= 0 || m2 > 12 || m2 <= 0)
													y++;
												if (m1 == 1)
													if (d1 > 31)
														y++;
												if (m2 == 1)
													if (d2 > 31)
														y++;
												if (m1 == 2) {
													if (y1 % 4 != 0 && d1 > 28)
														y++;
													if (y1 % 4 == 0 && y1 % 100 == 0 && y1 % 400 != 0 && d1 > 28)
														y++;
													if (y1 % 4 != 0 && y1 % 100 != 0 && y1 % 400 != 0 && d1 > 28)
														y++;
												}
												if (m2 == 2) {
													if (y2 % 4 != 0 && d2 > 28)
														y++;
													if (y2 % 4 == 0 && y2 % 100 == 0 && y2 % 400 != 0 && d2 > 28)
														y++;
													if (y2 % 4 != 0 && y2 % 100 != 0 && y2 % 400 != 0 && d2 > 28)
														y++;
												}
												if (m1 == 3)
													if (d1 > 31)
														y++;
												if (m2 == 3)
													if (d2 > 31)
														y++;
												if (m1 == 4)
													if (d1 > 30)
														y++;
												if (m2 == 4)
													if (d2 > 30)
														y++;
												if (m1 == 5)
													if (d1 > 31)
														y++;
												if (m2 == 5)
													if (d2 > 31)
														y++;
												if (m1 == 6)
													if (d1 > 30)
														y++;
												if (m2 == 6)
													if (d2 > 30)
														y++;
												if (m1 == 7)
													if (d1 > 31)
														y++;
												if (m2 == 7)
													if (d2 > 31)
														y++;
												if (m1 == 8)
													if (d1 > 30)
														y++;
												if (m2 == 8)
													if (d2 > 30)
														y++;
												if (m1 == 9)
													if (d1 > 31)
														y++;
												if (m2 == 9)
													if (d2 > 31)
														y++;
												if (m1 == 10)
													if (d1 > 30)
														y++;
												if (m2 == 10)
													if (d2 > 30)
														y++;
												if (m1 == 11)
													if (d1 > 31)
														y++;
												if (m2 == 11)
													if (d2 > 31)
														y++;
												if (m1 == 12)
													if (d1 > 30)
														y++;
												if (m2 == 12)
													if (d2 > 30)
														y++;
												if (y1 > y2)
													y++;
												if (y1 == y2)
													if (m1 > m2)
														y++;
												if (y1 == y2)
													if (m1 == m2)
														if (d1 > d2)
															y++;
												if (y != 0)
													printf("Некорректный ввод.Введите строку снова (в формате :дд.мм.гггг-дд.мм.гггг) :");
											}
										}
										for (int i = 0; i < r; i++) {
											for (int j = 0; j < 10; j++) {
												str[j] = p[mas[i]].date[j];
											}
											str[10] = 0;
											char *t = strtok(str, ".");
											dm = atoi(t);
											t = strtok(NULL, ".");
											mm = atoi(t);
											t = strtok(NULL, ".");
											ym = atoi(t);
											if (ym > y2 || ym < y1) {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
											if(ym == y1)
												if (mm < m1) {
													for (int j = i; j < r; j++) {
														mas[j] = mas[j + 1];
													}
													r--;
													i--;
													mas = (int*)realloc(mas, r * sizeof(int));
												}
											if (ym == y1)
												if (mm == m1)
													if (dm < d1) {
														for (int j = i; j < r; j++) {
															mas[j] = mas[j + 1];
														}
														r--;
														i--;
														mas = (int*)realloc(mas, r * sizeof(int));
													}
											if (ym == y2)
												if (mm > m2) {
													for (int j = i; j < r; j++) {
														mas[j] = mas[j + 1];
													}
													r--;
													i--;
													mas = (int*)realloc(mas, r * sizeof(int));
												}
											if (ym == y2)
												if (mm == m2)
													if (dm > d2) {
														for (int j = i; j < r; j++) {
															mas[j] = mas[j + 1];
														}
														r--;
														i--;
														mas = (int*)realloc(mas, r * sizeof(int));
													}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 50) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Дата первого турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите число (1-31) :");
										h = 3;
										while (h > 2 || d1 > 31 || d1 <= 0) {
											getline(cin, f);
											h = size(f);
											if (h > 2)
												printf("Некорректный ввод.Введите число снова :");
											else {
												d1 = atoi(f.c_str());
												if (d1 > 31 || d1 <= 0)
													printf("Некорректный ввод.Введите число снова :");
											}
										}
										for (int i = 0; i < r; i++) {
											for (int j = 0; j < 10; j++) {
												str[j] = p[mas[i]].date[j];
											}
											str[10] = 0;
											char *t = strtok(str, ".");
											dm = atoi(t);
											if(dm != d1) {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 51) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Дата первого турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите число (1-12) :");
										h = 3;
										while (h > 2 || m1 > 12 || m1 <= 0) {
											getline(cin, f);
											h = size(f);
											if (h > 2)
												printf("Некорректный ввод.Введите число снова :");
											else {
												m1 = atoi(f.c_str());
												if (m1 > 12 || m1 <= 0)
													printf("Некорректный ввод.Введите число снова :");
											}
										}
										for (int i = 0; i < r; i++) {
											for (int j = 0; j < 10; j++) {
												str[j] = p[mas[i]].date[j];
											}
											str[10] = 0;
											char *t = strtok(str, ".");
											t = strtok(NULL, ".");
											mm = atoi(t);
											if (mm != m1) {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 52) {
								while (1) {
									system("cls");
									printf("Выберите поле :\n\n1.Дата первого турнира\n\nНажмите Esc для перехода в предыдущее меню...");
									y = _getch();
									if (y == 49) {
										system("cls");
										printf("Введите год :");
										h = 5;
										while (h > 4) {
											getline(cin, f);
											h = size(f);
											if (h > 4)
												printf("Некорректный ввод.Введите число снова :");
											else {
												y1 = atoi(f.c_str());
												if (y1 > 9999 || y1 <= 0)
													printf("Некорректный ввод.Введите число снова :");
											}
										}
										for (int i = 0; i < r; i++) {
											for (int j = 0; j < 10; j++) {
												str[j] = p[mas[i]].date[j];
											}
											str[10] = 0;
											char *t = strtok(str, ".");
											t = strtok(NULL, ".");
											t = strtok(NULL, ".");
											ym = atoi(t);
											if (ym != y1) {
												for (int j = i; j < r; j++) {
													mas[j] = mas[j + 1];
												}
												r--;
												i--;
												mas = (int*)realloc(mas, r * sizeof(int));
											}
										}
										printf("\nДанные отфильтрованы...\n\nНажмите Enter для продолжения...");
										while (1) {
											y = _getch();
											if (y == 13)
												break;
										}
									}
									if (y == 27)
										break;
								}
							}
							if (y == 53)
								break;
						}
					}
					if (y == 27)
						break;
				}
			}
			if (y == 50) {
				output(r, mas);
				printf("\nНажмите клавишу Enter для перехода в предыдущее меню... ");
				while (1) {
					y = _getch();
					if (y == 13) {
						break;
					}
				}
			}
			if (y == 51) {
				system("cls");
				r = z;
				mas = (int*)realloc(mas, r * sizeof(int));
				for (int i = 0; i < z; i++) {
					mas[i] = i;
				}
				printf("Выполнено успешно...\n\nНажмите Enter для перехода в предыдущее меню...");
				while (1) {
					y = _getch();
					if (y == 13)
						break;
				}
			}
		}
	}
	
}



