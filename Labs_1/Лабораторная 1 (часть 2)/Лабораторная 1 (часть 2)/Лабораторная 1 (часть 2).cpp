#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

struct complex {
	double x;
	double y;
};

int main() {
	setlocale(LC_ALL, "rus");
	ifstream cmpl("complex.txt");
	if (!cmpl.is_open())
		cout << "Невозможно открыть файл!\n";
	int n;
	cmpl >> n;
	complex *p = new complex[n];
	int numb;
	double module, max = 0;
	cout << "Комплексные числа, записанные в файле: \n";
	for (int i = 0; i < n; i++) {
		cmpl >> p[i].x;
		cmpl >> p[i].y;
		if (p[i].y < 0)
			cout << "z = " << p[i].x << p[i].y << "*i\n";
		else
			cout << "z = " << p[i].x << "+" << p[i].y << "*i\n";
		module = sqrt(p[i].x * p[i].x + p[i].y * p[i].y);
		if (module > max) {
			max = module;
			numb = i;
		}
	}
	if (p[numb].y < 0) {
		cout << "Комплексное число с максимальным модулем: " << "z = " << p[numb].x << p[numb].y << "*i\n";
		cout << "Модуль данного числа равен: " << max << endl;
	}
	else {
		cout << "Комплексное число с максимальным модулем: " << " z = " << p[numb].x << "+" << p[numb].y << " * i\n";
		cout << "Модуль данного числа равен: " << max << endl;
	}
}
