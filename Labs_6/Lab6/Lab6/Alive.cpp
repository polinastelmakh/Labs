#include "pch.h"
#include "Alive.h"
#include <string>

void Alive::input_alive() {
	cout << "������� ��� ���������: ";
	cin >> kind_animal;
}

void Alive::output_alive() {
	cout << "��� ���������: " << kind_animal << endl;
}
