#include "pch.h"
#include "Auto.h"

void Auto::input() {
	cout << "������� ����� ������: ";
	cin >> car_brand;
	cout << "������� ����� ������: ";
	cin >> car_number;
	cout << endl;
}

void Auto::output() {
	cout << "����� ������: " << car_brand << endl;
	cout << "����� ������: " << car_number << endl;
}