#include "pch.h"
#include <iostream>
#include <string>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	Child child1;
	child1.output();
	Child child2("Stelmakh", "Polina", 19);
	child2.output();
	Child child3 = child2;
	child3.output();

	Tiles tiles1;
	tiles1.getData();
	Tiles tiles2("Kerama", 4, 6, 80);
	tiles2.getData();
	Tiles tiles3 = tiles2;
	tiles3.getData();

	Complex complex1;
	complex1.output();
	Complex complex2(5, 7);
	complex2.output();
	Complex complex3 = complex2;
	complex3.output();

	Vector vector1;
	vector1.output();
	Vector vector2(3, 8, 1);
	vector2.output();
	Vector vector3 = vector2;
	vector3.output();
}