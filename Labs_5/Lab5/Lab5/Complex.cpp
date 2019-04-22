#include "pch.h" 
#include "Complex.h"
#include <iostream> 

using namespace std;

Complex::Complex(double X, double Y) : x(X), y(Y) {}

Complex& Complex::operator=(const Complex& right) {
	x = right.x;
	y = right.y;
	return *this;
}

Complex& Complex::operator++(int i) {
	x++;
	y++;
	return *this;
}

Complex& Complex::operator--(int i) {
	x--;
	y--;
	return *this;
}

bool Complex::operator==(const Complex& right) {
	return (x == right.x && y == right.y);
}

bool Complex::operator!=(const Complex& right) {
	return !(x == right.x && y == right.y);
}

ostream& operator<<(ostream &ost, Complex &cmpl) {
	ost << "x: " << cmpl.x << endl
		<< "y: " << cmpl.y << endl;
	return ost;
}

istream& operator>>(istream &ist, Complex &cmpl) {
	cout << "¬ведите действительную часть: ";
	ist >> cmpl.x;
	cout << "¬ведите мнимую часть: ";
	ist >> cmpl.y;
	return ist;
}
