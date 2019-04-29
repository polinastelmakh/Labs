#include "pch.h"
#include <iostream>
#include "Human.h"

Human::Human() {
	surname = "No surname";
	name = "No name";
	midname = "No midname";
	age = 0;
}

Human::Human(string S, string N, string M, int A) {
	surname = S;
	name = N;
	midname = M;
	age = A;
}

Human::~Human() {
	cout << "Декструктор Human!" << endl;
}
