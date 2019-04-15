#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 

using namespace std;

void Child::output() {
	cout << "��� ������: " << name << endl;
	cout << "������� ������: " << surname << endl;
	cout << "������� ������: " << age << endl;
	cout << endl;
}

Child::Child() {
	name = "No name";
	surname = "No surname";
	age = 0;
	cout << "������ �����������!" << endl;
}

Child::Child(string Name, string Surname, int Age) {
	name = Name;
	surname = Surname;
	age = Age;
	cout << "����������� � �����������!" << endl;
}

Child::Child(string Name, string Surname) : name(Name), surname(Surname) {
	cout << "����������� �������������!" << endl;
	age = 0;
}

Child::Child(const Child & object) {
	name = object.name;
	surname = object.surname;
	age = object.age;
	cout << "����������� �����������!" << endl;
}

Child::~Child() {
	cout << "���������� Child!" << endl;
}