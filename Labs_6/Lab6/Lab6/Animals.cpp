#include "pch.h"
#include "Animals.h"
#include <string>

using namespace std;

void Animals::input_animals() {
	cout << "Разновидность животного: ";
	cin >> variety;
	cout << "Возраст животного: ";
	cin >> age;
}

void  Animals::output_animals() {
	cout << "Разновидность животного: " << variety << endl;
	cout << "Возраст животного: " << age << endl;
}