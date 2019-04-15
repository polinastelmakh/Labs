#pragma once
#include <iostream> 

using namespace std;

class Child {
private:
	string name;
	string surname;
	int age;
public:
	Child();
	Child(string Name, string Surname, int Age);
	Child(string Name, string Surname);
	Child(const Child & object);
	~Child();
	void output();
};