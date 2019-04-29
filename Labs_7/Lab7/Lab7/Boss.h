#pragma once
#include <iostream>
#include "Human.h"

class Boss : public Human {
private:
	int number_of_workers;
public:
	Boss();
	Boss(string S, string N, string M, int A, int W);
	~Boss();
	virtual void print() override;
};
