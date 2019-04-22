#pragma once
#include <iostream> 

using namespace std;

class Vector {
private:
	int i;
	int j;
	int k;
public:
	Vector(int I = 0, int J = 0, int K = 0);
	Vector& operator=(const Vector& right);
	bool operator==(const Vector& right);
	bool operator!=(const Vector& right);
	friend ostream& operator<<(ostream &ost, Vector &vec);
	friend istream& operator>>(istream &ist, Vector &vec);
};