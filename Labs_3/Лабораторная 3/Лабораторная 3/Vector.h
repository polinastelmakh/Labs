#pragma once
#include <iostream> 

using namespace std;

class Vector {
private:
	int i;
	int j;
	int k;
public:
	void input();
	void output();
	void module();
	void sum(Vector vec1, Vector vec2);
	void subtraction(Vector vec1, Vector vec2);
};