// 93 Даша.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h> 
#include <time.h>   
#include <string>

using namespace std;
int ocenka = 0;
char alfavit [33]{ 'А', 'Б', 'В', 'Г', 'Ґ', 'Д', 'Е', 'Є', 'Ж', 'З', 'И', 'І', 'Ї', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ь', 'Ю', 'Я' };
void zavdania_1(int ur);
void zavdania_2(int ur);
void zavdania_3(int ur);
string associacii[33]
{
	"АНАНАС",
	"БІЛКА",
	"ВЕДМІДЬ",
	"ГРУША",
	"ҐУДЗИК",
	"ДЯТЕЛ",
	"ЕКСКАВАТОР",
	"ЄНОТ",
	"ЖИРАФА",
	"ЗАЄЦЬ",
	"КИТ",
	"ІНДИК",
	"ЇЖАК",
	"ЙОРШ",
	"КІШКА",
	"ЛИСИЦЯ",
	"МАК",
	"НОСОРІГ",
	"ОЛІВЕЦЬ",
	"ПІВЕНЬ",
	"РИБА",
	"СЛОН",
	"ТИГР",
	"УДАВ",
	"ФРУКТИ",
	"ХОМЯК",
	"ЦУЦИК",
	"ЧЕРЕПАХА",
	"ШКОЛА",
	"ЩУКА",
	"М'який знак",
	"ЮПІТЕР",
	"ЯБЛОКО",
};
int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); 
	while (int abc = 1 != 0) 
	{
		int lever = 999;
		cout << "Начало тестирования (1)" << endl << "Показать алфавит (2)" << endl << "Выход (3)" << endl;   
		cin >> lever;  

		if (lever == 1)
		{
			system("cls");
			for (int i = 1; i < 13; i++) 
			{
				cout << "Задание " << i << endl;
				int chans = 1 + rand() % 100;
				if (chans > 0 && chans < 34)
				{
					int ur = 1 + rand() % 3;
					zavdania_1(ur);
				}
				else if (chans > 33 && chans < 67)
				{
					int ur = 1 + rand() % 3;
					zavdania_2(ur);
				}
				else 
				{
					int ur = 1 + rand() % 3;
					zavdania_3(ur);
				}
			}
			cout << "Ваша оценка: " << ocenka << "/12" << endl; 
			system("pause");
			system("cls");
		}
		else if (lever == 2)
		{
			system("cls");
			for (int i = 0; i < 33; i++)
			{
				if (int j = i % 6 == 0)
					cout << endl;
				cout << alfavit[i];
			}
			cout << endl;
		}
		else if (lever == 3)
		{
			return 0;
		}
	}

	system("pause");
    return 0;
}

void zavdania_1(int ur)
{
	int lever = 0 + rand() % 33;
	while (lever >= 30)
	{
		lever = 0 + rand() % 33;
	}
	cout << "Какие буквы стоят между заданными?" << endl;
	if (ur == 1)
	{
		cout << alfavit[lever] << "_" << alfavit[lever + 2] << endl;
		char a;
		cin >> a;
		if (a == alfavit[lever + 1])
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
	if (ur == 2)
	{
		cout << alfavit[lever] << "__" << alfavit[lever + 3] << endl;
		char a;
		char b;
		cin >> a;
		cin >> b;
		if (a == alfavit[lever + 1] && b == alfavit[lever + 2])
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
	if (ur == 3)
	{
		cout << alfavit[lever] << "___" << alfavit[lever + 4] << endl;
		char a;
		char b;
		char c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a == alfavit[lever + 1] && b == alfavit[lever + 2] && c == alfavit[lever + 3])
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
}
void zavdania_2(int ur)
{
	if (ur == 1)
	{
		cout << "Выберите правильное слово-ассоциацию к букве: ";
		int b = 0 + rand() % 34;
		cout << alfavit[b] << endl;
		int z[2]{ b , 0 + rand() % 34};
		for (int i = 0; i < 2; i++)
		{
			cout << i << ")" << associacii[z[i]] << endl;
		}
		int lever;
		cin >> lever;
		if (z[lever] == b)
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
	if (ur == 2)
	{
		cout << "Выберите правильное слово-ассоциацию к букве: ";
		int b = 0 + rand() % 34;
		cout << alfavit[b] << endl;
		int z[3]{ 0 + rand() % 34, b , 0 + rand() % 34 };
		for (int i = 0; i < 3; i++)
		{
			cout << i << ")" << associacii[z[i]] << endl;
		}
		int lever;
		cin >> lever;
		if (z[lever] == b)
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
	if (ur == 3)
	{
		cout << "Выберите правильное слово-ассоциацию к букве: ";
		int b = 0 + rand() % 34;
		cout << alfavit[b] << endl;
		int z[4]{ 0 + rand() % 34, 0 + rand() % 34, 0 + rand() % 34, b};
		for (int i = 0; i < 4; i++)
		{
			cout << i << ")" << associacii[z[i]]<< endl;
		}
		int lever;
		cin >> lever;
		if (z[lever] == b)
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
}
void zavdania_3(int ur)
{
	cout << "Какую букву пропущено?" << endl;
	if (ur == 1)
	{
		int b = 0 + rand() % 34;
		while (b == 31)
			b = 0 + rand() % 34;
		int c = rand() % size(associacii[b]);
		int d;
		for (int i = 0; i < 33; i++)
		{
			if (associacii[b][c] == alfavit[i])
			{
				d = i;
			}
		}
		for (int i = 0; i < size(associacii[b]); i++)
		{
			if (i == c)
				cout << "_";
			else
				cout << associacii[b][i];
		}
		cout << endl;
		int z[2]{ d , 0 + rand() % 34 };
		for (int i = 0; i < 2; i++)
		{
			cout << i << ")" << alfavit[z[i]] << endl;
		}
		int lever;
		cin >> lever;
		if (z[lever] == d)
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
	if (ur == 2)
	{
		int b = 0 + rand() % 34;
		while (b == 31)
			b = 0 + rand() % 34;
		int c = rand() % size(associacii[b]);
		int d;
		for (int i = 0; i < 33; i++)
		{
			if (associacii[b][c] == alfavit[i])
			{
				d = i;
			}
		}
		for (int i = 0; i < size(associacii[b]); i++)
		{
			if (i == c)
				cout << "_";
			else
				cout << associacii[b][i];
		}
		cout << endl;
		int z[3]{ 0 + rand() % 34, d , 0 + rand() % 34 };
		for (int i = 0; i < 3; i++)
		{
			cout << i << ")" << alfavit[z[i]] << endl;
		}
		int lever;
		cin >> lever;
		if (z[lever] == d)
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
	if (ur == 3)
	{
		int b = 0 + rand() % 34;
		while (b == 31)
			b = 0 + rand() % 34;
		int c = rand() % size(associacii[b]);
		int d;
		for (int i = 0; i < 33; i++)
		{
			if (associacii[b][c] == alfavit[i])
			{
				d = i;
			}
		}
		for (int i = 0; i < size(associacii[b]); i++)
		{
			if (i == c)
				cout << "_";
			else
				cout << associacii[b][i];
		}
		cout << endl;
		int z[4]{ 0 + rand() % 34, 0 + rand() % 34, d , 0 + rand() % 34 };
		for (int i = 0; i < 4; i++)
		{
			cout << i << ")" << alfavit[z[i]] << endl;
		}
		int lever;
		cin >> lever;
		if (z[lever] == d)
		{
			cout << "Ответ правильный!" << endl;
			ocenka++;
			Sleep(2000);
		}
		else
		{
			cout << "Ответ НЕправильный!" << endl;
			Sleep(2000);
		}
	}
}

