#pragma once
#include <iostream> 

using namespace std;

class Vector {
private:
	int i;
	int j;
	int k;
public:
	Vector();
	Vector(int I, int J, int K);
	Vector(int I, int J);
	Vector(const Vector & object);
	~Vector();
	void output();
};