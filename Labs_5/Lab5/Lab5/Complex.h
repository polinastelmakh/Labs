#pragma once
#include <iostream> 

using namespace std;

class Complex {
private:
	double x;
	double y;
public:
	Complex(double X = 0, double Y = 0);
	Complex& operator=(const Complex& right);
	Complex& operator++(int i);
	Complex& operator--(int i);
	bool operator==(const Complex& right);
	bool operator!=(const Complex& right);
	friend ostream& operator<<(ostream &ost, Complex &cmpl);
	friend istream& operator>>(istream &ist, Complex &cmpl);
};