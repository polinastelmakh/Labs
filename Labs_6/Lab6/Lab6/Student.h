#pragma once
#include <iostream>

using namespace std;

class Student {
protected:
	string name;
	string surname;
	int age;
	int group;
public:
	void input_student();
	void output_student();
};