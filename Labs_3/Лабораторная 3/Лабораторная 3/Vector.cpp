#include "pch.h" 
#include "Vector.h"
#include <string>
#include <iostream> 

using namespace std;

void Vector::input() {
	cout << "i = ";
	cin >> i;
	cout << "j = ";
	cin >> j;
	cout << "k = ";
	cin >> k;
}

void Vector::output()
{
	cout << " ( " << i << ", " << j << ", " << k << ")";
}

void Vector::module()
{
	cout << sqrt(i * i + j * j + k * k);
}

void Vector::sum(Vector vec1, Vector vec2)
{
	cout << vec1.i + vec2.i << ", " << vec1.j + vec2.j << ", " << vec1.k + vec2.k << ")";
}

void Vector::subtraction(Vector vec1, Vector vec2)
{
	cout << vec1.i - vec2.i << ", " << vec1.j - vec2.j << ", " << vec1.k - vec2.k << ")";
}