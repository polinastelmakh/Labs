#include "pch.h"
#include "Student.h"
#include <string>

void Student::input_student() {
	cout << "Введите имя студента: ";
	cin >> name;
	cout << "Введите фамилию студента: ";
	cin >> surname;
	cout << "Введите возраст студента: ";
	cin >> age;
	cout << "Введите номер группы студента: ";
	cin >> group;
}

void Student::output_student() {
	cout << "Имя студента: " << name << endl;
	cout << "Фамилия студента: " << surname << endl;
	cout << "Возраст студента: " << age << endl;
	cout << "Номер группы студента: " << group << endl;
}