#ifndef FILE_H
#define FILE_H

#include <conio.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void clear();
ofstream new_DB();
void remove_DB();
void save_DB();
void load_DB();

#endif