#include "pch.h"
#include "Animal.h"
#include <string>

void Animal::habitat() {
	cout << "����� ��������: ����!";
}

void Animal::input_animal() {
	cout << "������� �������� ���������: ";
	cin >> kind_animal;
}

void Animal::output_animal() {
	cout << "�������� ���������: " << kind_animal << endl;
}