#pragma once
#include "form.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

//����������� �����
class model:
    public form
{
public:
    string model_of_car;
    //��������������� ����������� ������� � ����������� ������ ��� ������ override
    void input() override;
    void output_model();
    model(string model_of_car, int speed, int horsepower);
    model();
    //����� ������������ ������ ��� ����������
    void overload();
};

