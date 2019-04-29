#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string surname;
	string name;
	string midname;
	int age;
public:
	void input();
	void output();
};