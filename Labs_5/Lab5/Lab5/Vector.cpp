#include "pch.h" 
#include "Vector.h"
#include <iostream> 

using namespace std;

Vector::Vector(int I, int J, int K) : i(I), j(J), k(K) {}

Vector& Vector::operator=(const Vector& right) {
	i = right.i;
	j = right.j;
	k = right.k;
	return *this;
}

bool Vector::operator==(const Vector& right) {
	return (i == right.i && j == right.j && k == right.k);
}

bool Vector::operator!=(const Vector& right) {
	return !(i == right.i && j == right.j && k == right.k);
}

ostream& operator<<(ostream &ost, Vector &vec) {
	ost << "i: " << vec.i << endl
		<< "j: " << vec.j << endl
		<< "k: " << vec.k << endl;
	return ost;
}

istream& operator>>(istream &ist, Vector &vec) {
	cout << "¬ведите i: ";
	ist >> vec.i;
	cout << "¬ведите j: ";
	ist >> vec.j;
	cout << "¬ведите k: ";
	ist >> vec.k;
	return ist;
}
