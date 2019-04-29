#include "pch.h"
#include <iostream>
#include "Boss.h"

Boss::Boss() : Human() {
	number_of_workers = 0;
}


Boss::Boss(string S, string N, string M, int A, int W) {
	surname = S;
	name = N;
	midname = M;
	age = A;
	number_of_workers = W;
}

Boss::~Boss() {
	cout << "Декструктор Boss!" << endl;
}

void Boss::print() {
	cout << "Фамилия босса: " << surname << endl;
	cout << "Имя босса: " << name << endl;
	cout << "Отчество босса: " << midname << endl;
	cout << "Возраст босса: " << age << endl;
	cout << "Количество сотрудников: " << number_of_workers << endl;
	cout << endl << endl;
}
