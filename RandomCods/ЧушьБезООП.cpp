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
	bool check = true;
	while (check != false)
	{
		string name;
		Print("Введите имя игрока.\n");
		cin >> name;

		int krit3 = 0;
		int krit2 = 0;
		int krit1 = 0;

		while (krit1 == 0 || krit2 == 0 || krit3 == 0)
		{
			Print("1.Проверка игрока на уровень.\n");
			Print("2.Проверка игрока на ранг в организации.\n");
			Print("3.Проверка игрока на уровень дальнобойщика.\n");
			Print("Выберите пункт.\n");
			int choice = 0;
			cin >> choice;
			if (krit1 != 0 && choice == 1)
			{
				Print("Данный пункт уже проверен!\n");
				continue;
			}
			if (choice == 1)
			{

				srand(time(0));
				int lvl = 15 + rand() % 70; // Уровень персонажа генерируется от 15 до 70
				if (lvl >= 30)
				{
					Print("Уровень игрока соответствует требованиям.\n");
					krit1 = 1;
				}
				else
				{
					Print("Уровень игрока не соответствует требованиям.\n");
					krit1 = 2;
				}


			}
			else if (choice == 2)
			{
				if (krit2 != 0 && choice == 2)
				{
					Print("Данный пункт уже проверен!\n");
					continue;
				}
				srand(time(0));
				int rang = rand() % 5; // Ранг персонажа во фракции генерируется от 0 до 15
				if (rang >= 2)
				{
					Print("Этот игрок состоит в государственной организации на ");
					cout << rang << " ";
					Print("ранге\n");
					krit2 = 1;
				}
				else if (rang == 4)
				{
					Print("Игрок лидер организации.\n");
					krit2 = 1;
				}
				else
				{
					Print("Ранг игрока недостаточно высок для критериев администрирования.\n");
					krit2 = 2;
				}
			}
			else if (choice == 3)
			{
				if (krit3 != 0 && choice == 3)
				{
					Print("Данный пункт уже проверен!\n");
					continue;
				}
				srand(time(0));
				int rank = rand() % 27; // уровень дальнобойщика генерируется от 0 до 27
				if (rank >= 10)
				{
					Print("Уровень дальнобойщика удовлетворяет условию.\n");
					krit3 = 1;
				}
				else
				{
					Print("Уровень дальнобойщика не удовлетворяет условию.\n");
					krit3 = 2;
				}
			}
		}

		string makeadmin;
		if (krit1 == 1 && krit2 == 1 && krit3 == 1)
		{
			Print("Игрок подходит по всем критериям. Выдайте ему админку командой /makeadmin name.\n");
			Print("Имя игрока - ");
			Print(name);
			cout << endl;
			cin >> makeadmin;
			if (makeadmin != "/makeadmin " + name)
			{
				while (makeadmin != "/makeadmin " + name)
				{
					Print("Неккоректный ввод команды /makeadmin или такого игрока нет!\n");
					getline(cin, makeadmin);
				}

			}
			else
			{
				Print("Поздравляю! Админка выдана.\n");
			}

		}

		Print("Подобрать другого кандидата?\n");
		char ch;
		cin >> ch;
		cout << endl;
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
			Print("Неккоректный символ. Программа завершена.\n");
			check = false;
		}
	}





	return 0;
}
