#include "pch.h"
#include "Student.h"

void Student::input() {
	cout << "������� ������� ��������: ";
	cin >> surname;
	cout << "������� ��� ��������: ";
	cin >> name;
	cout << "������� �������� ��������: ";
	cin >> midname;
	cout << "������� ������� ��������: ";
	cin >> age;
	cout << endl;
}

void Student::output() {
	cout << "������� ��������:" << surname << endl;
	cout << "��� ��������: " << name << endl;
	cout << "�������� ��������:" << midname << endl;
	cout << "������� ��������: " << age << endl;
}