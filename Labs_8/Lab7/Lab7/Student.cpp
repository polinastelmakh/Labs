#include "pch.h"
#include "Student.h"

void Student::input() {
	cout << "Введите фамилию студента: ";
	cin >> surname;
	cout << "Введите имя студента: ";
	cin >> name;
	cout << "Введите отчество студента: ";
	cin >> midname;
	cout << "Введите возраст студента: ";
	cin >> age;
	cout << endl;
}

void Student::output() {
	cout << "Фамилия студента:" << surname << endl;
	cout << "Имя студента: " << name << endl;
	cout << "Отчество студента:" << midname << endl;
	cout << "Возраст студента: " << age << endl;
}