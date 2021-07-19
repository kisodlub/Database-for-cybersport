#include <windows.h>
#include "menu.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HWND ConsoleWind = GetConsoleWindow();
	RECT r;
	GetWindowRect(ConsoleWind, &r);
	MoveWindow(ConsoleWind, 350, 100, 1120, 800, TRUE);
	menu();
	return 0;
}
