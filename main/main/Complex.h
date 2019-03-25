#ifndef Complex_h
#define Complex_h

struct complex {
	double x;
	double y;
};

void sum(complex num1, complex num2);
void sub(complex num1, complex num2);
void mul(complex num1, complex num2);
void div(complex num1, complex num2);

#endif