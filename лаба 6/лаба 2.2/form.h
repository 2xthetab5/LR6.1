#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class form
{
	public:
		int horsepower;
		int speed;
		form(int speed, int horsepower); // ����������� � �����������
		form(int speed);
		form();
		~form();
		void output();
		//����������� �������
		virtual void input();
		//����� ����������� ������� ����� ����� �� ����������� �������� �������� ������
		void test();
		//����� �������� ������ ��� ����������
		void overload();

};

