#include "pch.h"
#include <iostream>
#include "Human.h"
#include "Boss.h"
#include "Student.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	
	Human *a;

	Boss boss("Степанов", "Максим", "Юрьевич", 47, 80);
	a = &boss;
	a->print();

	Student stud("Перова", "Мария", "Сергеевна", 19, true);
	a = &stud;
	a->print();
}
