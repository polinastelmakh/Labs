#include "pch.h"
#include "Animals.h"
#include <string>

using namespace std;

void Animals::input_animals() {
	cout << "������������� ���������: ";
	cin >> variety;
	cout << "������� ���������: ";
	cin >> age;
}

void  Animals::output_animals() {
	cout << "������������� ���������: " << variety << endl;
	cout << "������� ���������: " << age << endl;
}