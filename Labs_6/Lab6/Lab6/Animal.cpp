#include "pch.h"
#include "Animal.h"
#include <string>

void Animal::habitat() {
	cout << "Среда обитания: суша!";
}

void Animal::input_animal() {
	cout << "Введите название животного: ";
	cin >> kind_animal;
}

void Animal::output_animal() {
	cout << "Название животного: " << kind_animal << endl;
}