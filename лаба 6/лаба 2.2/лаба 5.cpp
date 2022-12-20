#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <conio.h>
#include "melee.h"
#include "weapon.h"
#include "kind.h"
#include "form.h"
#include "transformer.h"
#include "windows.h"
#include "Record.h"
#include "mini_Record.h"
#include "Account.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int i = 0;
	string strinput;
	int intinput;
	int count_1, count_2, count_3;
	count_1 = 0;
	count_2 = 0;
	count_3 = 0;
	intinput = 0;

	auto *your_transformer = new transformer[20];
	auto *your_transformer_2 = new transformer[20][20];
	kind your_kind = kind();
	melee your_melee = melee();
	weapon your_weapon = weapon();
	model your_form = model("model_of_car", 0, 0);
	bad your_badkarma;
	good your_goodkarma;
	your_transformer[i] = transformer(your_kind, your_melee, your_weapon, your_form, your_badkarma, your_goodkarma);

	while (intinput != 8) {
		cout << " Введите: 1 - для создания вашего трансформера " << endl;
		cout << " 2 - для вывода всех ваших трансформеров " << endl;
		cout << " 3 - для создания двумерного массива из трансформера " << endl;
		cout << " 4 - для вывода двумерного массива из трансформера " << endl;
		cout << " 5 - для перегрузки оператора присваивания объекту производного класса объектов базового класса " << endl;
		cout << " 6 - для вывода кармы ваших трансформеров" << endl;
		cout << " 7 - для использования шаблона класса" << endl;
		cout << " 8 - выхода" << endl;
		/////TRY БЛОК/////
		cin >> strinput;
		try {
			intinput = stoi(strinput);
			if (intinput > 7 || intinput < 1)
				throw ("invalid range");
		}
		catch (invalid_argument e) {
			cout << ("Нужно вводить цифру");
		}
		catch (char const* s) {
			cout << ("Диапазон 1-7\n");
		}
		switch (intinput) {
		case 1:
		{
			your_transformer[i].input();
			your_transformer[i].output();
			your_transformer[i].weapon_details_counter(*your_transformer);
			your_transformer[i].color(*your_transformer);
			your_transformer[i].speed_type(*your_transformer);
			//Дружественная функция
			components(*your_transformer);
			i++;
			count_1++;
			break;
		}
		case 2: {
			for (int j = 0; j < count_1; j++) {
				your_transformer[j].output();
				your_transformer[j].weapon_details_counter(*your_transformer);
				your_transformer[j].color(*your_transformer);
				your_transformer[j].speed_type(*your_transformer);
				components(*your_transformer);
				puts("");
			}
			break;
		}
		case 3: {
			//ДВУМЕРНЫЙ МАССИВ ОБЪЕКТОВ//
			for (int k = 0; k < 1; k++) {
				count_2++;
				for (int j = 0; j < 1; j++) {
					kind your_kind = kind();
					melee your_melee = melee();
					weapon your_weapon = weapon();
					model your_form = model();

					your_transformer_2[i][j] = transformer(your_kind, your_melee, your_weapon, your_form, your_badkarma, your_goodkarma);
					your_transformer_2[i][j].input();
					your_transformer_2[i][j].output();
					your_transformer_2[i][j].weapon_details_counter(*your_transformer);
					your_transformer_2[i][j].color(*your_transformer);
					your_transformer_2[i][j].speed_type(*your_transformer);
					count_3++;
				}
			}
			break;
		}
		case 4: {
			//ДВУМЕРНЫЙ МАССИВ ОБЪЕКТОВ - ВЫВОД//
			for (int k = 0; k < count_2; k++) {
				for (int j = 0; j < count_3; j++) {
					your_transformer_2[i][j].output();
					your_transformer_2[i][j].weapon_details_counter(*your_transformer);
					your_transformer_2[i][j].color(*your_transformer);
					your_transformer_2[i][j].speed_type(*your_transformer);
					puts("");
				}
			}
			break;
		}
		//перегрузка оператора присваивания объекту производного класса объектов базового класса
		case 5: {
			Record a(2, 4);
			mini_Record b(3, 5);
			a = b;
			b.Putmin(5);    // b: min=5 sec=5 a: min=3 sec=5 – у a прежние значения полей после присваивания
			Record* c = new Record(2, 4);
			mini_Record* d = new mini_Record(3, 5);
			c = d;   // c и d указывают на одну и ту же область памяти
			d->Putmin(5); // d: min=5 sec=5 c: min=5 sec=5 ! изменение в одной области памяти
			cout << "c = " << c << endl;
			cout << "d = " << d << endl;
			break;
		}
		case 6: {
			for (int j = 0; j < count_1; j++) {
				your_transformer[j]._karma(*your_transformer);
				puts("");
			}
			break;
		}
		case 7: {
			//шаблон класса
			puts("");
			cout << "      Код выводит два account-id, шаблон используется для уточнения какого типа id(только цифры или смешанный вариант)" << endl;
			puts("");
			Account<string> acc1("ca-pub1343767");
			Account<int> acc2(1234566);
			cout << "acc1: " << acc1.getId() << endl;
			cout << "acc2: " << acc2.getId() << endl;
			break;
		}
			  fflush(stdin);
			  for (int i = 0; i < 1; i++) {
				  delete your_transformer;
			  }
			  delete[] your_transformer;

		}
	}
}