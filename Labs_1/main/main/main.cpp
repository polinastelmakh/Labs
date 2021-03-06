#include "pch.h"
#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

double check () {
	string inp;
	cin >> inp;

	while (true) {
		bool wrong_check = false;
		int number_of_dots = 0;
		int number_of_minuses = 0;
		for (auto c : inp) {
			if (c == '.')
				number_of_dots++;
			if (c == '-')
				number_of_minuses++;
		}

		if (inp[0] == '-') {
			if (inp.size() == 1)
				wrong_check = true;
			else {
				if (number_of_dots > 1 || number_of_minuses > 1)
					wrong_check = true;
				else {
					if (inp[1] == '.' || inp[inp.size() - 1] == '.')
						wrong_check = true;
					else {
						for (int i = 1; i < inp.size(); i++) {
							if ((inp[i] < '0' || inp[i] > '9') && inp[i] != '.')
								wrong_check = true;
						}
					}
				}
			}
		}
		else {
			if (inp[0] == '.')
				wrong_check = true;
			else {
				if (number_of_dots > 1)
					wrong_check = true;
				else {
					if (inp[0] == '.' || inp[inp.size() - 1] == '.')
						wrong_check = true;
					else {
						for (auto c : inp) {
							if ((c < '0' || c > '9') && c != '.')
								wrong_check = true;
						}
					}
				}
			}
		}
		if (wrong_check) {
			inp = "";
			cout << "Вы ввели неправильное значение, попробуйте ещё раз: ";
			cin >> inp;
		}
		else
			break;
	}
	return stod(inp);
}

int  main() {
	setlocale(LC_ALL, "rus");
	complex num1;
	complex num2;
	int calculator;
	cout << "Введите действительную часть первого числа: ";
	num1.x = check();
	cout << "Введите мнимую часть первого числа: ";
	num1.y = check();
	cout << "Введите действительную часть второго числа: ";
	num2.x = check();
	cout << "Введите мнимую часть второго числа: ";
	num2.y = check();
	cout << "Какую операцию нужно произвести над косплексными числами: 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление?\n";
	calculator = check();
	switch (calculator) {
	case 1:
		sum(num1, num2);
		break;
	case 2:
		sub(num1, num2);
		break;
	case 3:
		mul(num1, num2);
		break;
	case 4:
		div(num1, num2);
		break;
	}
}

