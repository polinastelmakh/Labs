#include "pch.h"
#include "Student.h"
#include <string>

void Student::input_student() {
	cout << "������� ��� ��������: ";
	cin >> name;
	cout << "������� ������� ��������: ";
	cin >> surname;
	cout << "������� ������� ��������: ";
	cin >> age;
	cout << "������� ����� ������ ��������: ";
	cin >> group;
}

void Student::output_student() {
	cout << "��� ��������: " << name << endl;
	cout << "������� ��������: " << surname << endl;
	cout << "������� ��������: " << age << endl;
	cout << "����� ������ ��������: " << group << endl;
}