#include "sort.h"
#include "struct.h"

extern int z;
extern GAME *p;

void sort(int j) {
	int y;
	GAME *v;
	system("cls");
	if (z == 0) {
		printf("Нет данных для сортировки...");
		printf("\n\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
	else {
		if (j == 3 || j == 4) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = p[i].prpl;
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else {
						intarr[h]++;
					}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 3) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 4) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 9 || j == 10) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = p[i].amount;
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else {
						intarr[h]++;	
					}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 9) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 10) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 11 || j == 12) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = p[i].views;
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else {
						intarr[h]++;
					}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 11) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 12) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 1 || j == 2) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = (int)p[i].title[0];
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else
						if (arr[i] < arr[h]) {
							intarr[h]++;
						}
						else
							if (arr[i] == arr[h]) {
								for (int u = 1; p[i].title[u] != 0; u++) {
									if (p[i].title[u] != p[h].title[u]) {
										if (((int)p[i].title[u]) > ((int)p[h].title[u])) {
											intarr[i]++;
											break;
										}
										else {
											intarr[h]++;
											break;
										}
									}
								}
							}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 1) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 2) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 5 || j == 6) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = (int)p[i].name[0];
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else
						if (arr[i] < arr[h]) {
							intarr[h]++;
						}
						else
							if (arr[i] == arr[h]) {
								for (int u = 1; p[i].name[u] != 0; u++) {
									if (p[i].name[u] != p[h].name[u]) {
										if (((int)p[i].name[u]) > ((int)p[h].name[u])) {
											intarr[i]++;
											break;
										}
										else {
											intarr[h]++;
											break;
										}
									}
								}
							}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 5) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 6) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 13 || j == 14) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = (int)p[i].team[0];
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else
						if (arr[i] < arr[h]) {
							intarr[h]++;
						}
						else
							if (arr[i] == arr[h]) {
								for (int u = 1; p[i].team[u] != 0; u++) {
									if (p[i].team[u] != p[h].team[u]) {
										if (((int)p[i].team[u]) > ((int)p[h].team[u])) {
											intarr[i]++;
											break;
										}
										else {
											intarr[h]++;
											break;
										}
									}
								}
							}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 13) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 14) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 15 || j == 16) {
			int *arr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				arr[i] = (int)p[i].tourn[0];
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (arr[i] > arr[h]) {
						intarr[i]++;
					}
					else
						if (arr[i] < arr[h]) {
							intarr[h]++;
						}
						else
							if (arr[i] == arr[h]) {
								for (int u = 1; p[i].tourn[u] != 0; u++) {
									if (p[i].tourn[u] != p[h].tourn[u]) {
										if (((int)p[i].tourn[u]) > ((int)p[h].tourn[u])) {
											intarr[i]++;
											break;
										}
										else {
											intarr[h]++;
											break;
										}
									}
								}
							}
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 15) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 16) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(arr);
			free(intarr);
		}
		if (j == 7 || j == 8) {
			int *day = (int*)malloc(z * sizeof(int));
			char qwe[30];
			for (int k = 0; k < 30; k++) {
				qwe[k] = 0;
			}
			for (int i = 0; i < z; i++) {
				for (int k = 0; p[i].date[k] != 0; k++) {
					qwe[k] = p[i].date[k];
				}
				day[i] = atoi(qwe);
			}
			for (int k = 0; k < 30; k++) {
				qwe[k] = 0;
			}
			int *month = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				for (int k = 0; p[i].date[k] != 0; k++) {
					qwe[k] = p[i].date[k];
				}
				char *str = strtok(qwe, ".");
				str = strtok(NULL, ".");
				month[i] = atoi(str);
			}
			for (int k = 0; k < 30; k++) {
				qwe[k] = 0;
			}
			int *year = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				for (int k = 0; p[i].date[k] != 0; k++) {
					qwe[k] = p[i].date[k];
				}
				char *str = strtok(qwe, ".");
				str = strtok(NULL, ".");
				str = strtok(NULL, ".");
				year[i] = atoi(str);
			}
			int *intarr = (int*)malloc(z * sizeof(int));
			for (int i = 0; i < z; i++) {
				intarr[i] = 0;
			}
			for (int i = 0; i < z - 1; i++) {
				for (int h = i + 1; h < z; h++) {
					if (year[i] > year[h]) {
						intarr[i]++;
					}
					else if (year[i] == year[h]) {
						if (month[i] == month[h]) {
							if (day[i] == day[h])
								intarr[h]++;
							else if (day[i] > day[h])
								intarr[i]++;
							else if (day[i] < day[h])
								intarr[h]++;
						}
						else if (month[i] > month[h])
							intarr[i]++;
						else if (month[i] < month[h])
							intarr[h]++;
					}
					else
						intarr[h]++;
				}
			}
			v = (GAME*)malloc(z * sizeof(GAME));
			for (int i = 0; i < z; i++) {
				v[intarr[i]] = p[i];
			}
			if (j == 7) {
				for (int i = 0; i < z; i++) {
					p[i] = v[i];
				}
			}
			else if (j == 8) {
				for (int i = z - 1, h = 0; i != -1; i--, h++) {
					p[h] = v[i];
				}
			}
			free(v);
			free(year);
			free(month);
			free(day);
			free(intarr);
		}
		printf("Данные отсортированы...\n\nНажмите клавишу Enter для перехода в предыдущее меню... ");
		while (1) {
			y = _getch();
			if (y == 13) {
				break;
			}
		}
	}
}