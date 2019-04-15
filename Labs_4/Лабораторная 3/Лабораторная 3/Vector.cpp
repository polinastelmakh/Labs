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
	cout << "Пустой конструктор!" << endl;
	i = 0;
	j = 0;
	k = 0;
}

Vector::Vector(int I, int J, int K) {
	cout << "Конструктор с параметрами!" << endl;
	i = I;
	j = J;
	k = K;
}

Vector::Vector(int I, int J): i(I), j(J) {
	cout << "Конструктор инициализации!" << endl;
	k = 0;
}

Vector::Vector(const Vector & object) {
	cout << "Конструктор копирования!" << endl;
	i = object.i;
	j = object.j;
	k = object.k;
}

Vector::~Vector() {
	cout << "Декструктор Vector!" << endl;
}