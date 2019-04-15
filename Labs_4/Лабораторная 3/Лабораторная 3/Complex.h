#pragma once
#include <iostream> 

using namespace std;

class Complex {
private:
	double x;
	double y;
public:
	Complex();
	Complex(double X, double Y);
	Complex(double X);
	Complex(const Complex & object);
	~Complex();
	void output();
};