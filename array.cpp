﻿#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int m[10]; 			// опис масиву		
	int i;
	srand(time(NULL)); 		// ініціалізація датчику
	for (i = 0; i < 10; i++)
	{
		m[i] = rand() % 201 - 100; // заповнення масиву

	}
	cout << "Массив: ";
	for (i = 0; i < 10; i++)
	{
		cout << setw(10) << m[i]; // вивід ел-тів масиву

	}
	cout << endl;



}
