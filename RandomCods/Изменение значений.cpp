#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include "Windows.h"
#include "conio.h"
#include <locale>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <cmath>
using namespace std;





void Print(string _string)
{
	string *s = &_string;

	for (int i = 0; i < (*s).size(); i++)
	{
		Sleep(30);
		cout << (*s)[i];
	}
}






int main()
{




	setlocale(LC_ALL, "rus");
	Print(" Изменение введенных аргументов через команды.\n");
	bool check = true;
	while (check != false)
	{

		Print(" Введите свое имя.\n");
		string name;
		cin >> name;
		int age;
		Print(" Введите возраст.\n");
		cin >> age;
		Print(" Введите свой курс.\n");
		int course;
		cin >> course;
		int arg1 = 0;
		int arg2 = 0;
		int arg3 = 0;
		string magistr = " магистратуры";
		string newname;
		int newage = 0;
		int newcourse = 0;
		while (arg1 == 0 || arg2 == 0 || arg3 == 0)
		{
			Print(" 1. Замена имени.\n");
			Print(" 2. Замена возраста.\n");
			Print(" 3. Замена номера курса.\n");
			int choice = 0;
			cin >> choice;
			if (arg1 != 0 && choice == 1)
			{
				Print(" Данный пункт уже изменен!\n");
				continue;
			}
			if (choice == 1)
			{
				Print(" Введите новое имя.\n");
				cin >> newname;
				arg1 = 1;
			}
			if (arg2 != 0 && choice == 2)
			{
				Print(" Данный пункт уже изменен!\n");
				continue;
			}
			if (choice == 2)
			{
				Print(" Введите новый возраст.\n");
				cin >> newage;
				arg2 = 1;
			}
			if (arg3 != 0 && choice == 3)
			{
				Print(" Данный пункт уже изменен\n");
				continue;
			}
			if (choice == 3)
			{
				Print(" Введите новый номер курса.\n");
				cin >> newcourse;
				if (newcourse > 7)
				{
					Print(" Данного курса не существует!\n");
					arg3 = 0;
				}
				else if (newcourse > 5 && newcourse <= 6)
				{

					arg3 = 1;
				}
				else if (newcourse <= 0)
				{
					Print(" Введите корректный номер курса!\n");
					arg3 = 0;
				}
				else
				{
					arg3 = 1;
				}
			}
		}
		Print(" Старое имя - ");
		Print(name);
		cout << "\t\t";
		Print(" Новое имя - ");
		Print(newname);
		cout << endl;
		Print(" Старый возраст - ");
		cout << age << "\t\t";
		Print(" Новый возраст - ");
		cout << newage << endl;
		Print(" Старый номер курса - " );
		cout << course << "\t\t";
		Print(" Новый номер курса - " );
		if (newcourse >= 5 && newcourse <= 6)
		{
			cout << newcourse << " курс " << magistr << endl;

		}
		else
		{
			cout << newcourse << endl;
		}
		Print(" Повторить операцию?    Y/N\n");
		char ch;
		cin >> ch;
		if (ch == 'Y')
		{
			check = true;
		}
		else if (ch == 'N')
		{
			check = false;
		}
		else
		{
			Print(" Неккоректный символ. Программа завершена.\n");
			check = false;
		}

	}






	return 0;
}
