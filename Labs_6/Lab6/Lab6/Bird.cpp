#include "pch.h"
#include "Bird.h"
#include <string>

void Bird::habitat() {
	cout << "����� ��������: ������!";
}

void Bird::input_bird() {
	cin >> kind_animal;
}

void Bird::output_bird() {
	cout << kind_animal << endl;
}