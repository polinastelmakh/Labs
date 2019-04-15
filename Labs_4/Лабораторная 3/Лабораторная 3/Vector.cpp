#include "pch.h" 
#include "Vector.h"
#include <string>
#include <iostream> 

using namespace std;

void Vector::output()
{
	cout << "(" << i << "," << j << "," << k << ")" << endl;
	cout << endl;
}

Vector::Vector() {
	cout << "������ �����������!" << endl;
	i = 0;
	j = 0;
	k = 0;
}

Vector::Vector(int I, int J, int K) {
	cout << "����������� � �����������!" << endl;
	i = I;
	j = J;
	k = K;
}

Vector::Vector(int I, int J): i(I), j(J) {
	cout << "����������� �������������!" << endl;
	k = 0;
}

Vector::Vector(const Vector & object) {
	cout << "����������� �����������!" << endl;
	i = object.i;
	j = object.j;
	k = object.k;
}

Vector::~Vector() {
	cout << "����������� Vector!" << endl;
}