#pragma once
#include <iostream> 
#include "Student.h"

using namespace std;

class Headman: public Student {
protected:
	string e_mail;
	long int phone;
public:
	void input_headman();
	void output_headman();
};