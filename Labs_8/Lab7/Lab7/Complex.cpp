#include "pch.h"
#include "Complex.h"

void Complex::input() {
	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;
	cout << endl;
}

ostream& operator<<(ostream &ost, Complex &cmpl) {
	if (cmpl.y >= 0)
		ost << cmpl.x << "+" << cmpl.y << "*i";
	else
		ost << cmpl.x << cmpl.y << "*i";
	cout << endl;
	return ost;
}
