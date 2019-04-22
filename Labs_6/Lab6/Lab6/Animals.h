#pragma once
#include <iostream> 

using namespace std;

class Animals {
protected:
	string variety;
	int age;
public:
	void input_animals();
	void output_animals();
};