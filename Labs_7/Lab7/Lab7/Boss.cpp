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
	cout << "����������� Boss!" << endl;
}

void Boss::print() {
	cout << "������� �����: " << surname << endl;
	cout << "��� �����: " << name << endl;
	cout << "�������� �����: " << midname << endl;
	cout << "������� �����: " << age << endl;
	cout << "���������� �����������: " << number_of_workers << endl;
	cout << endl << endl;
}
