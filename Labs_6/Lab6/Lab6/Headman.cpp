#include "pch.h"
#include "Headman.h"
#include <string>

void Headman::input_headman() {
	cout << "������� ��� ��������: ";
	cin >> name;
	cout << "������� ������� ��������: ";
	cin >> surname;
	cout << "������� ������� ��������: ";
	cin >> age;
	cout << "������� ����� ������ ��������: ";
	cin >> group;
	cout << "������� ����� �������� ��������: ";
	cin >> phone;
	cout << "������� Email ��������: ";
	cin >> e_mail;
}

void Headman::output_headman() {
	cout << "��� ��������: " << name << endl;
	cout << "������� ��������: " << surname << endl;
	cout << "������� ��������: " << age << endl;
	cout << "����� ������ ��������: " << group << endl;
	cout << "����� �������� ��������: " << phone << endl;
	cout << "Email ��������: " << e_mail << endl;
}