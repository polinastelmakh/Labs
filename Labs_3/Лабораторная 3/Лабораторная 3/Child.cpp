#include "pch.h" 
#include "Child.h"
#include <string>
#include <iostream> 

using namespace std;

void Child::input()
{
	cout << "��� ������: ";
	cin >> name;
	cout << "������� ������: ";
	cin >> surname;
	cout << "������� ������: ";
	cin >> age;
}

void Child::output()
{
	cout << "��� ������: " << name << endl;
	cout << "������� ������: " << surname << endl;
	cout << "������� ������: " << age << endl;
}
