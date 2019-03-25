#include "pch.h"
#include <iostream>
#include "Complex.h"
#include <string>

using namespace std;

void sum(complex num1, complex num2) {
	if (num1.y + num2.y < 0)
		cout << (num1.x + num2.x) << (num1.y + num2.y) << "*i";
	else
		cout << (num1.x + num2.x) << "+" << (num1.y + num2.y) << "*i";
}

void sub(complex num1, complex num2) {
	if(num1.y - num2.y < 0)
		cout << num1.x - num2.x << num1.y - num2.y << "*i";
	else
		cout << num1.x - num2.x << "+" << num1.y - num2.y << "*i";
}

void mul(complex num1, complex num2) {
	if((num1.x * num2.y + num2.x * num1.y) < 0)
		cout << num1.x * num2.x - num1.y * num2.y << num1.x * num2.y + num2.x * num1.y << "*i";
	else
		cout << num1.x * num2.x - num1.y * num2.y << "+" << num1.x * num2.y + num2.x * num1.y << "*i";
}

void div(complex num1, complex num2) {
	if((num2.x * num1.y - num1.x * num2.y) / (num2.x * num2.x + num2.y * num2.y) < 0)
		cout << ((num1.x * num2.x + num1.y * num2.y) / (num2.x * num2.x + num2.y * num2.y)) << ((num2.x * num1.y - num1.x * num2.y) / (num2.x * num2.x + num2.y * num2.y)) << "*i";
	else
		cout << ((num1.x * num2.x + num1.y * num2.y) / (num2.x * num2.x + num2.y * num2.y)) << "+" << ((num2.x * num1.y - num1.x * num2.y) / (num2.x * num2.x + num2.y * num2.y)) << "*i";
}