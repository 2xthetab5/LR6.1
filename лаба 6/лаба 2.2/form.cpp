#include "form.h"
#include <iostream>
#include <string.h>
using namespace std;

form::form(int speed, int horsepower) {
	this->speed = 0;
	this->horsepower = 0;
	puts("");
	cout << "������ ����������� �������� ������ � �����������" << endl;
	puts("");
}
form::form(int speed) {
	this->speed = 0;
}
form::form() {
	this->speed = 200;
	this->horsepower = 300;
}
form::~form() {

}
void form::input() {
	cout << "������� ���������� ��������� ��� � ����������, � ������� ������������ ��� �����������(�� 100 �� 1000): ";
	cin >> horsepower;
	cout << "������� ������������ �������� ����������(� ��/�), � ������� ������������ ��� �����������(�� 120 �� 400): ";
	cin >> speed;
}
void form::output() {
	cout << "���������� ��������� ��� ����������, � ������� ������������ ��� �����������: " << horsepower << endl;;
	cout << "������������ �������� ����������, � ������� ������������ ��� �����������: " << speed << endl;
}
//����� ����������� ������� ����� ����� �� ����������� �������� �������� ������
void form::test() {
	return input();
}
//����� �������� ������ ��� ����������
void form::overload() {
	cout << "����� �������� ������ ��� ����������" << endl;
}