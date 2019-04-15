#include "pch.h" 
#include "Complex.h"
#include <iostream> 

using namespace std;

void Complex::output() {
	cout << "������������� ���� �����: " << x << endl;
	cout << "������ ����� �����: " << y << endl;
	cout << endl;
}

Complex::Complex() {
	cout << "������ �����������!" << endl;
	x = 0;
	y = 0;
}

Complex::Complex(double X, double Y) {	
	cout << "����������� � �����������!" << endl;
	x = X;
	y = Y;
}

Complex::Complex(double X): x(X) {
	cout << "����������� �������������!" << endl;
	y = 0;
}

Complex::Complex(const Complex & object) {
	cout << "����������� �����������!" << endl;
	x = object.x;
	y = object.y;
}

Complex::~Complex() {
	cout << "����������� Complex!" << endl;
}