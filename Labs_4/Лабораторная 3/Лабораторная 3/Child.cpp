#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 

using namespace std;

void Child::output() {
	cout << "Имя ребёнка: " << name << endl;
	cout << "Фамилия ребёнка: " << surname << endl;
	cout << "Возраст ребёнка: " << age << endl;
	cout << endl;
}

Child::Child() {
	name = "No name";
	surname = "No surname";
	age = 0;
	cout << "Пустой конструктор!" << endl;
}

Child::Child(string Name, string Surname, int Age) {
	name = Name;
	surname = Surname;
	age = Age;
	cout << "Конструктор с параметрами!" << endl;
}

Child::Child(string Name, string Surname) : name(Name), surname(Surname) {
	cout << "Конструктор инициализации!" << endl;
	age = 0;
}

Child::Child(const Child & object) {
	name = object.name;
	surname = object.surname;
	age = object.age;
	cout << "Конструктор копирования!" << endl;
}

Child::~Child() {
	cout << "Деструктор Child!" << endl;
}