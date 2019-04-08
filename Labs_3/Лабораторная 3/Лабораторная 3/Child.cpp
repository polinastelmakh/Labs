#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 

using namespace std;

void Child::input()
{
	cout << "Имя ребёнка: ";
	cin >> name;
	cout << "Фамилия ребёнка: ";
	cin >> surname;
	cout << "Возраст ребёнка: ";
	cin >> age;
}

void Child::output()
{
	cout << "Имя ребёнка: " << name << endl;
	cout << "Фамилия ребёнка: " << surname << endl;
	cout << "Возраст ребёнка: " << age << endl;
}
