#pragma once
#include <iostream>
#include "Alive.h"

using namespace std;

class Bird : public Alive {
public:
	void habitat();
	void input_bird();
	void output_bird();
};