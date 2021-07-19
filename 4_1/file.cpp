#include "file.h"
#include "struct.h"

extern int z;
extern GAME *p;

void clear() {
	int y;
	system("cls");
	if (z == 0) {
		printf("Динамическая память не была выделена...\n");
		printf("\nНажмите клавишу Enter для перехода в меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
		free(p);
		z = 0;
		printf("Динамическая память очищена...\n");
		printf("\nНажмите клавишу Enter для перехода в меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
}

ofstream new_DB() {
	int y;
	char q1[20];
	system("cls");
	cout << "Введите название файла : ";
	gets_s(q1);
	strcat(q1, ".txt");
	ofstream file(q1);
	if (!file.is_open()) {
		printf("\nФайл не может быть открыт или создан... ");
	}
	else {
		printf("\nФайл был успешно создан и открыт для записи...");
	}
	printf("\n\nНажмите клавишу Enter для продолжения... ");
	while (1) {
		y = _getch();
		if (y == 13) {
			break;
		}
	}
	return file;
}

void remove_DB() {
	char qwe[20];
	int y;
	system("cls");
	printf("Введите название файла, который хотите удалть : ");
	gets_s(qwe);
	strcat(qwe, ".txt");
	if (remove(qwe) != 0) {
		cout << "\nОшибка удаления файла...";
	}
	else {
		cout << "\nФайл успешно удалён...";
	}
	printf("\n\nНажмите клавишу Enter для перехода в меню... ");
	while (1) {
		y = _getch();
		if (y == 13) {
			break;
		}
	}
}

void save_DB() {
	int y, i;
	ofstream file = new_DB();
	system("cls");
	printf("Вы хотите добавить данные в файл?\n\nEnter - Да\nEsc - Нет\n\n");
	while (1) {
		y = _getch();
		if (y == 13) {
			if (z == 0) {
				printf("Отсутствуют данные для записи...\n");
				printf("\nНажмите клавишу Enter для перехода в меню... ");
				file.close();
				while (1) {
					y = _getch();
					if (y == 13) {
						break;
					}
				}
				break;
			}
			else {
				if (!file.is_open()) {
					printf("\nФайл не может быть открыт или создан...\n");
					printf("\nНажмите клавишу Enter для перехода в меню... ");
					while (1) {
						y = _getch();
						if (y == 13) {
							break;
						}
					}
				}
				else {
					for (i = 0; i < z; i++) {
						file << "Информация о " << i+1 << "-ой дисциплине :\n" << endl;
						file << "Название киберспортивной дисциплины : " << p[i].title << endl;
						file << "Максимальный призовой фонд : " << p[i].prpl << " $" << endl;
						file << "Никнейм самого успешного игрока : "<< p[i].name << endl;
						file << "Дата проведения первого турнира : " << p[i].date << endl;
						file << "Количество проведённых турниров : " << p[i].amount << endl;
						file << "Максимальное количество зрителей : " << p[i].views << endl;
						file << "Название самой популярной команды : " << p[i].team << endl;
						file << "Название самого крупного турнира : " << p[i].tourn << endl;
						file << endl;
					}
					file.close();
					printf("\nДанные успешно сохранены в указанный файл...\n");
					printf("\nНажмите клавишу Enter для перехода в меню... ");
					while (1) {
						y = _getch();
						if (y == 13) {
							break;
						}
					}
					break;
				}
			}
		}
		else if (y == 27) {
			file.close();
			break;
		}
		break;
	}
}

void load_DB() {
	int y, t = 0;
	char q1[20], s[30];
	system("cls");
	cout << "Введите название файла : ";
	gets_s(q1);
	strcat(q1, ".txt");
	ifstream file(q1);
	file >> s;
	if (!file.is_open() || s[0] == 0) {
		printf("\nФайл не может быть открыт или в нём отсутствуют данные... \n");
	}
	else {
		printf("\nДанные успешно загружены из файла...\n");
		if (z == 0) {
			p = (GAME*)malloc(sizeof(GAME));
			while (1) {
				file >> s >> s >> s >> s >> s >> s >> s >> s;
				file.getline(p[z].title, 32);
				for (int i = 0; i < 29; i++) {
					p[z].title[i] = p[z].title[i + 1];
				}
				p[z].title[29] = 0;
				file >> s >> s >> s >> s >> s;
				p[z].prpl = atoi(s);
				file >> s >> s >> s >> s >> s >> s;
				file.getline(p[z].name, 30);
				for (int i = 0; i < 19; i++) {
					p[z].name[i] = p[z].name[i + 1];
				}
				p[z].name[19] = 0;
				file >> s >> s >> s >> s >> s;
				file.getline(p[z].date, 20);
				for (int i = 0; i < 10; i++) {
					p[z].date[i] = p[z].date[i + 1];
				}
				p[z].date[10] = 0;
				file >> s >> s >> s >> s >> s;
				p[z].amount = atoi(s);
				file >> s >> s >> s >> s >> s;
				p[z].views = atoi(s);
				file >> s >> s >> s >> s >> s;
				file.getline(p[z].team, 32);
				for (int i = 0; i < 29; i++) {
					p[z].team[i] = p[z].team[i + 1];
				}
				p[z].team[29] = 0;
				file >> s >> s >> s >> s >> s;
				file.getline(p[z].tourn, 32);
				for (int i = 0; i < 29; i++) {
					p[z].tourn[i] = p[z].tourn[i + 1];
				}
				p[z].tourn[29] = 0;
				file >> s;
				if (s[0] != 0) {
					z++;
					p = (GAME*)realloc(p, (z + 1) * sizeof(GAME));
				}
				else { 
					z++;
					break;
				}
			}
		}
		else {
			while (1) {
				file >> s >> s >> s >> s >> s >> s >> s >> s;
				file.getline(p[t].title, 32);
				for (int i = 0; i < 29; i++) {
					p[t].title[i] = p[t].title[i + 1];
				}
				p[t].title[29] = 0;
				file >> s >> s >> s >> s >> s;
				p[t].prpl = atoi(s);
				file >> s >> s >> s >> s >> s >> s;
				file.getline(p[t].name, 30);
				for (int i = 0; i < 19; i++) {
					p[t].name[i] = p[t].name[i + 1];
				}
				p[t].name[19] = 0;
				file >> s >> s >> s >> s >> s;
				file.getline(p[t].date, 20);
				for (int i = 0; i < 10; i++) {
					p[t].date[i] = p[t].date[i + 1];
				}
				p[t].date[10] = 0;
				file >> s >> s >> s >> s >> s;
				p[t].amount = atoi(s);
				file >> s >> s >> s >> s >> s;
				p[t].views = atoi(s);
				file >> s >> s >> s >> s >> s;
				file.getline(p[t].team, 32);
				for (int i = 0; i < 29; i++) {
					p[t].team[i] = p[t].team[i + 1];
				}
				p[t].team[29] = 0;
				file >> s >> s >> s >> s >> s;
				file.getline(p[t].tourn, 32);
				for (int i = 0; i < 29; i++) {
					p[t].tourn[i] = p[t].tourn[i + 1];
				}
				p[t].tourn[29] = 0;
				file >> s;
				if (s[0] != 0) {
					t++;
					if (t == z) {
						p = (GAME*)realloc(p, (z + 1) * sizeof(GAME));
						z++;
					}
				}
				else
					break;
			}
		}
	}
	printf("\nНажмите клавишу Enter для перехода в меню... ");
	while (1) {
		y = _getch();
		if (y == 13) {
			break;
		}
	}
}