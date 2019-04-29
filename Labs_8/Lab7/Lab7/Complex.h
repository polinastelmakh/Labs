#pragma once
#include <iostream>
#include <string>

using namespace std;

class Complex {
private:
	float x;
	float y;
public:
	void input();
	friend ostream& operator<<(ostream &ost, Complex &cmpl);
};