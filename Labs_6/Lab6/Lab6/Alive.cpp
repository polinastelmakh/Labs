#include "pch.h"
#include "Alive.h"
#include <string>

void Alive::input_alive() {
	cout << "Введите тип животного: ";
	cin >> kind_animal;
}

void Alive::output_alive() {
	cout << "Тип животного: " << kind_animal << endl;
}
