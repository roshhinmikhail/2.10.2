// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>


int main()
{
	using namespace std;
	unsigned int a;
	setlocale(LC_ALL, "Russian");
	printf("������� ������ ������ � ������ �����?\n");
	scanf("i", &a);
	printf("������ ������ ����� : %i\n", a / 3600);
	printf("�������� ������ : %i\n", a % 3600);
	system ("pause");
    return 0;
}

