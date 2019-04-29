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
	cout << "Декструктор Student!" << endl;
}

void Student::print() {
	cout << "Фамилия студента: " << surname << endl;
	cout << "Имя студента: " << name << endl;
	cout << "Отчество студента: " << midname << endl;
	cout << "Возраст студента: " << age << endl;
	cout << "Присутствие на занятии: ";
	if (on_lesson == true)
		cout << "Да" << endl;
	else
		cout << "Нет" << endl;
	cout << endl << endl;
}