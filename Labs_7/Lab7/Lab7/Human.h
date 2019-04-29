#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human {
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human();
	Human(string S, string N, string M, int A);
	virtual void print() = 0;
	~Human();
	
};
