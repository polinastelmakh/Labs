#pragma once
#include <iostream>
#include "Alive.h"

using namespace std;

class Fish : public Alive {
public:
	void habitat();
	void input_fish();
	void output_fish();
};