#include "model.h"
#include <iostream>
#include <string.h>
#include <string>
#include <windows.h>
using namespace std;

//����������� �����

//����� ������������ �������� ������ � ������������ ������������ ������ � �����������
model::model(string model_of_car, int speed, int horsepower):form(0, 0) {
	this->model_of_car = "model_of_car";
}
model::model() {
	this->model_of_car = "car";
}
//��������������� ����������� ������� � ����������� ������ ��� ������ override
void model::input() {
	cout << "������� � ����� ��������� ������������ ��� �����������(sportcar, truck, tank, jeep): ";
	cin >> model_of_car;
	cout << "(��������������� ��) ������� ���������� ��������� ��� � ����������, � ������� ������������ ��� �����������(�� 100 �� 1000): ";
	cin >> horsepower;
	cout << "(��������������� ��) ������� ������������ �������� ����������(� ��/�), � ������� ������������ ��� �����������(�� 120 �� 400): ";
	cin >> speed;
}
void model::output_model() {
	cout << "���������, � ������� ������������ ��� �����������: " << model_of_car << endl;
}
//����� �������� ������ ��� ����������
void model::overload() {
	cout << "����� ������������ ������ ��� ����������" << endl;
}
