#include "pch.h"
#include "Fish.h"
#include <string>

void Fish::habitat() {
	cout << "����� ��������: ����!";
}

void Fish::input_fish() {
	cin >> kind_animal;
}

void Fish::output_fish() {
	cout << kind_animal << endl;
}