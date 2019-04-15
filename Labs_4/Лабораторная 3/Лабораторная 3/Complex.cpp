#include "pch.h" 
#include "Complex.h"
#include <iostream> 

using namespace std;

void Complex::output() {
	cout << "Дейсвительная чать равна: " << x << endl;
	cout << "Мнимая часть равна: " << y << endl;
	cout << endl;
}

Complex::Complex() {
	cout << "Пустой конструктор!" << endl;
	x = 0;
	y = 0;
}

Complex::Complex(double X, double Y) {	
	cout << "Конструктор с параметрами!" << endl;
	x = X;
	y = Y;
}

Complex::Complex(double X): x(X) {
	cout << "Конструктор инициализации!" << endl;
	y = 0;
}

Complex::Complex(const Complex & object) {
	cout << "Конструктор копирования!" << endl;
	x = object.x;
	y = object.y;
}

Complex::~Complex() {
	cout << "Декструктор Complex!" << endl;
}