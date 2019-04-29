#include "pch.h"
#include <iostream>
#include "Student.h"

Student::Student() : Human() {
	on_lesson = 0;
}


Student::Student(string S, string N, string M, int A, bool L) {
	surname = S;
	name = N;
	midname = M;
	age = A;
	on_lesson = L;
}

Student::~Student() {
	cout << "����������� Student!" << endl;
}

void Student::print() {
	cout << "������� ��������: " << surname << endl;
	cout << "��� ��������: " << name << endl;
	cout << "�������� ��������: " << midname << endl;
	cout << "������� ��������: " << age << endl;
	cout << "����������� �� �������: ";
	if (on_lesson == true)
		cout << "��" << endl;
	else
		cout << "���" << endl;
	cout << endl << endl;
}