#include "pch.h"
#include "Headman.h"
#include <string>

void Headman::input_headman() {
	cout << "Введите имя старосты: ";
	cin >> name;
	cout << "Введите фамилию старосты: ";
	cin >> surname;
	cout << "Введите возраст старосты: ";
	cin >> age;
	cout << "Введите номер группы старосты: ";
	cin >> group;
	cout << "Введите номер телефона старосты: ";
	cin >> phone;
	cout << "Введите Email старосты: ";
	cin >> e_mail;
}

void Headman::output_headman() {
	cout << "Имя старосты: " << name << endl;
	cout << "Фамилия старосты: " << surname << endl;
	cout << "Возраст старосты: " << age << endl;
	cout << "Номер группы старосты: " << group << endl;
	cout << "Номер телефона старосты: " << phone << endl;
	cout << "Email старосты: " << e_mail << endl;
}