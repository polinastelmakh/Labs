#pragma once
#include <iostream>
#include "Human.h"

class Student : public Human {
private:
	bool on_lesson;
public:
	Student();
	Student(string S, string N, string M, int A, bool L);
	~Student();
	void print() override;
};