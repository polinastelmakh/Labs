#include "pch.h" 
#include "Complex.h"
#include <string>
#include <iostream> 

using namespace std;

void Complex::input()
{
	cout << "Дейсвительная часть: ";
	cin >> x;
	cout << "Мнимая часть: ";
	cin >> y;
}

void Complex::output()
{
	cout << "Дейсвительная чать равна: " << x << endl;
	cout << "Мнимая часть равна: " << y << endl;
	double modul;
}

void Complex::module()
{
	double abs = sqrt(x * x + y * y);
	cout << "Модуль комплексного числа равен: " << abs;
}