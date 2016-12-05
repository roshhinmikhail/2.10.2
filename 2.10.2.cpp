// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>


int main()
{
	using namespace std;
	unsigned int a;
	setlocale(LC_ALL, "Russian");
	printf("Сколько секунд прошло с начала суток?\n");
	scanf("i", &a);
	printf("Прошло полных часов : %i\n", a / 3600);
	printf("Осталось секунд : %i\n", a % 3600);
	system ("pause");
    return 0;
}

