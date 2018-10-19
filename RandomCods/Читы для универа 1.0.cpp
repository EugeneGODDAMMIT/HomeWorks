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
	Print("Читы для универа 1.0\n");
	// Используйте пароль qwerty для входа в глобальный доступ
	/* Доступные команды на данный момент:
	/givestip - Выдать себе степуху
	/dellmeplease - Отчислить студента по номеру зачетки
	/setmark - Установить себе отметку за экзамен
	/quit - Выйти из чата
	*/
	string name;
	string password;
	Print("Вы попали в раздел читов для универа. Введите свой логин Администратора:\n");
	cin >> name;
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 9) | 2));
	}
	Print(name);
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 9) | 7));
	}

	Print(", введите пароль:\n");
	cin >> password;
	if (password == "qwerty")
	{
		name = "Admin";
	}
	Print("Проверка пароля на соответствие...\n");
	Sleep(2000);
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 9) | 2));
	}
	Print("Пароль принят");
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 9) | 7));
	}
	Print(". Добро пожаловать. Вам доступен чат ввода. Вводите команду на выбор.\n");
	string waiting;
	bool start = true;
	while (start == true)
	{
		int checkfortrue = 0;
		while (checkfortrue == 0)
		{
			cin >> waiting;
			if (waiting == "/dellmeplease")
			{
				Print("Выбрана команда для отчисления Студента. Введите номер зачетной книжки.\n");
				long zachetka = 0;
				cin >> zachetka;


					Print("Студент отчислен. Возврат к чату.\n");
					waiting = "";
					checkfortrue = 0;

			}
			else if (waiting == "/givestip")
			{
				Print("Выдача стипендии студенту. Введите номер зачетной книжки.\n");
				long zachetka = 0;
				cin >> zachetka;


					Print("Введите желаемую стипендию в рублях. Общая стипендия не может достигать 35000.\n");
					long stip = 0;
					cin >> stip;
					if (stip > 35000)
					{
						Print("Стипендия слишком велика!\n");
						waiting = "";
						checkfortrue = 0;
					}
					else
					{
						Print("Стипендия успешно зачислена на карту студента с номером зачетки ");
						cout << zachetka << endl;
						Print("Возврат к чату.\n");
						checkfortrue = 0;
					}

			}
			else if (waiting == "/setmark")
			{
				Print("Установка оценки за экзамен. Введите номер зачетной книжки.\n");
				long zachetka;
				cin >> zachetka;


					Print("Введите номер предмета. Список на экране:\n");
					Print("1.Математический анализ.\n2.Алгебра.\n3.Английский язык.\n4.Информатика.\n5.Социальная Кибернетика.\n6.Физкультура.\n");
					int choice = 0;
					cin >> choice;
					if (choice == 1)
					{
						int mark = 0;
						do
						{
							Print("Введите желаемую оценку за экзамен по Математическому анализу:\n");
							cin >> mark;
						} while (mark < 0 || mark == 0 || mark >= 6);
						Print("Оценка за экзамен установлена. Возврат к чату\n");
						checkfortrue = 0;
					}
					else if (choice == 2)
					{
						int mark = 0;
						do
						{
							Print("Введите желаемую оценку за экзамен по Алгебре:\n");
							cin >> mark;
						} while (mark < 0 || mark == 0 || mark >= 6);
						Print("Оценка за экзамен установлена. Возврат к чату\n");
						checkfortrue = 0;
					}
					else if (choice == 3)
					{
						int mark = 0;
						do
						{
							Print("Введите желаемую оценку за экзамен по Английскому языку:\n");
							cin >> mark;
						} while (mark < 0 || mark == 0 || mark >= 6);
						Print("Оценка за экзамен установлена. Возврат к чату\n");
						checkfortrue = 0;
					}
					else if (choice == 4)
					{
						int mark = 0;
						do
						{
							Print("Введите желаемую оценку за экзамен по Информатике:\n");
							cin >> mark;
						} while (mark < 0 || mark == 0 || mark >= 6);
						Print("Оценка за экзамен установлена. Возврат к чату\n");
						checkfortrue = 0;
					}
					else if (choice == 5)
					{
						int mark = 0;
						do
						{
							Print("Введите желаемую оценку за экзамен по Социальной Кибернетике:\n");
							cin >> mark;
						} while (mark < 0 || mark == 0 || mark >= 6);
						Print("Оценка за экзамен установлена. Возврат к чату\n");
						checkfortrue = 0;
					}
					else if (choice == 6)
					{
						int mark = 0;
						do
						{
							Print("Введите желаемую оценку за экзамен по Физкультуре:\n");
							cin >> mark;
						} while (mark < 0 || mark == 0 || mark >= 6);
						Print("Оценка за экзамен установлена. Возврат к чату\n");
						checkfortrue = 0;
					}
					else
					{
						Print("Введенный номер предмета не существует.\n");
						waiting = "";
						checkfortrue = 0;
					}

			}
			else if (waiting == "/quit")
			{
				Print("Программа завершена. Logout Complete.\n");
				checkfortrue = 1;
				start = false;
			}
		}

	}







	return 0;
}
