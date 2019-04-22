#pragma once
#include <iostream>
#include "Alive.h"

using namespace std;

class Animal : public Alive {
public:
	void habitat();
	void input_animal();
	void output_animal();
};