#include "pch.h"
#include <iostream>

using namespace std;

int f1(int a, int b) {
	return a + b;
}

int f2(int a, int b) {
	return a - b;
}

int main() {
	setlocale(LC_ALL, "rus");
	int x, y;
	cout << "Введите два целых числа: ";
	cin >> x;
	cin >> y;
	int result;
	int(*pointer)(int x, int y);
	if (x > y)
		pointer = f1; 
	 else
		pointer = f2;
	result = pointer(x, y);
	cout << "Результат: ";
	cout << result;
}
