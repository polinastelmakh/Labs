#include "pch.h"
#include <iostream>
#include <string>
#include "Student.h"
#include "Headman.h"
#include "Alive.h"
#include "Bird.h"
#include "Fish.h"
#include "Animal.h"
#include "Animals.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	Student stud;
	stud.input_student();
	stud.output_student();

	Headman head;
	head.input_headman();
	head.output_headman();

	cout << endl << endl;
	
	Bird bird;
	bird.input_bird();
	bird.output_bird();
	bird.habitat();

	cout << endl << endl;
	
	Fish fish;
	fish.input_fish();
	fish.output_fish();
	fish.habitat();

	cout << endl << endl;

	Animal animal;
	animal.input_animal();
	animal.input_animal();

	cout << endl << endl;

	Dog dog;
	dog.input_animals();
	dog.output_animals();
	dog.sit();
	dog.bark();

	cout << endl << endl;

	Cat cat;
	cat.input_animals();
	cat.output_animals();
	cat.play();
	cat.purr();

	cout << endl << endl;

	return 0;
}