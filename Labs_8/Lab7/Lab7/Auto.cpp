#include "pch.h"
#include "Auto.h"

void Auto::input() {
	cout << "Введите марку машины: ";
	cin >> car_brand;
	cout << "Введите номер машины: ";
	cin >> car_number;
	cout << endl;
}

void Auto::output() {
	cout << "Марка машины: " << car_brand << endl;
	cout << "Номер машины: " << car_number << endl;
}