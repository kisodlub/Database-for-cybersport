#include "input.h"
#include "file.h"
#include "struct.h"
#include "sort.h"
#include "search.h"
#include "change.h"
#include "filtr.h"

void menu() {
	int y;
	while (1) {
		system("cls");
		printf("������� ����\n1.���� ������\n2.����� ������\n3.�������� ����� � ���������� ������ \n4.�������� ������ �� �����\n5.�������� �����\n6.������� ������������ ������\n7.���������� � ����� ������\n8.�������� � ��������� ������\n9.����������\n\n������� Esc ��� ���������� ���������...");
		y = _getch();
		switch (y) {
		case (49):
			vvod();
			break;
		case (50):
			while (1) {
				system("cls");
				printf("�������� ������ ������ :\n1.����� ������ � ������\n2.����� ������ � ���� �������\n\n3.����� � ������� ����");
				y = _getch();
				if (y == 49)
					vevod_line();
				if (y == 50)
					vevod_tabl();
				if (y == 51)
					break;
			}
			break;
		case (51):
			save_DB();
			break;
		case (52):
			load_DB();
			break;
		case (53):
			remove_DB();
			break;
		case (54):
			clear();
			break;
		case (55):
			while (1) {
				system("cls");
				printf("1.���������� ������\n2.����� ������\n\n3.����� � ������� ����");
				y = _getch();
				if (y == 49) {
					while (1) {
						system("cls");
						printf("�������� ���� ���������� :\n1.�������� ��������������� ����������\n2.����� ������� �������� ����\n3.������� ������ ��������� ������\n4.���� ���������� ������� �������\n5.����� ���������� ���������� ��������\n6.������������ ���������� �������� �� ����� �����\n7.�������� ����� ���������� �������\n8.�������� ������ �������� �������\n\n������� Esc ��� �������� � ���������� ����...");
						y = _getch();
						if (y == 49) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�-�\n2.�-�\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(1);
									break;
								}
								if (y == 50) {
									sort(2);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 50) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�� �����������\n2.�� ��������\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(3);
									break;
								}
								if (y == 50) {
									sort(4);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 51) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�-�\n2.�-�\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(5);
									break;
								}
								if (y == 50) {
									sort(6);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 52) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�� �����������\n2.�� ��������\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(7);
									break;
								}
								if (y == 50) {
									sort(8);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 53) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�� �����������\n2.�� ��������\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(9);
									break;
								}
								if (y == 50) {
									sort(10);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 54) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�� �����������\n2.�� ��������\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(11);
									break;
								}
								if (y == 50) {
									sort(12);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 55) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�-�\n2.�-�\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(13);
									break;
								}
								if (y == 50) {
									sort(14);
									break;
								}
								if (y == 27)
									break;
							}
						}
						if (y == 56) {
							while (1) {
								system("cls");
								printf("�������� ������ ���������� :\n1.�-�\n2.�-�\n\n������� Esc ��� �������� � ���������� ����...");
								y = _getch();
								if (y == 49) {
									sort(15);
									break;
								}
								if (y == 50) {
									sort(16);
									break;
								}
								if (y == 27)
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
						printf("�������� ���� ��� ������ :\n1.�������� ��������������� ����������\n2.����� ������� �������� ����\n3.������� ������ ��������� ������\n4.���� ���������� ������� �������\n5.����� ���������� ���������� ��������\n6.������������ ���������� �������� �� ����� �����\n7.�������� ����� ���������� �������\n8.�������� ������ �������� �������\n\n������� Esc ��� �������� � ���������� ����...");
						y = _getch();
						if (y == 49)
							search(1);
						if (y == 50)
							search(2);
						if (y == 51)
							search(3);
						if (y == 52)
							search(4);
						if (y == 53)
							search(5);
						if (y == 54)
							search(6);
						if (y == 55)
							search(7);
						if (y == 56)
							search(8);
						if (y == 27)
							break;
					}
				}
				if (y == 51)
					break;
			}
			break;
		case (56):
			while (1) {
				system("cls");
				printf("1.�������� ������\n2.��������� ������\n\n3.����� � ������� ����");
				y = _getch();
				if (y == 49)
					remove();
				if (y == 50)
					change();
				if (y == 51)
					break;
			}
			break;
		case (57):
			filtr();
			break;
		case (27):
			system("cls");
			printf("���������� ���������...\n");
			return;
			break;
		}
	}
}