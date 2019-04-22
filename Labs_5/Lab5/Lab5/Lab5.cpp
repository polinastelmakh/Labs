#include "pch.h"
#include <iostream>
#include "Complex.h"
#include "Vector.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	//Complex
	Complex c1;
	Complex c2;
	cout << "Введите первое комплексное число!" << endl;
	cin >> c1;
	cout << "Введите второе комплексное число!" << endl;
	cin >> c2;
	c1++;
	c2--;
	if (c1 == c2)
		cout << "Комплексные числа равны!" << endl;
	else
		cout << "Комплексные числа не равны!" << endl;

	//Vector
	Vector v1, v2;
	cout << "Введите первый вектор!" << endl;
	cin >> v1;
	cout << "Введите второй вектор!" << endl;
	cin >> v2;
	if (v1 == v2)
		cout << "Вектора равны!" << endl;
	else
		cout << "Вектора не равны!" << endl;

	return 0;
}
