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


	Child child1, child2;
	cout << "Введите данные о первом ребёнке:\n";
	child1.input();
	cout << "Введите данные о втором ребёнке:\n";
	child2.input();
	cout << endl;
	cout << "Данные о первом ребёнке:\n";
	child1.output();
	cout << "Данные о втором ребёнке:\n";
	child2.output();
	cout << endl << endl;

 
	Tiles tiles1, tiles2;
	cout << "Введите данные о первом кафеле!\n";
	cout << "Бренд: ";
	cin >> tiles1.brand;
	cout << "Высота: ";
	cin >> tiles1.size_h;
	cout << "Ширина: ";
	cin >> tiles1.size_w;
	cout << "Цена: ";
	cin >> tiles1.price;
	cout << "Введите данные о втором кафеле!";
	cout << "Бренд: ";
	cin >> tiles2.brand;
	cout << "Высота: ";
	cin >> tiles2.size_h;
	cout << "Ширина: ";
	cin >> tiles2.size_w;
	cout << "Цена: ";
	cin >> tiles2.price;
	cout << endl;
	cout << "Данные о первом кафеле:\n";
	tiles1.getData();
	cout << "Данные о втором кафеле:\n";
	tiles2.getData();
	cout << endl << endl;

	
	Complex comple;
	comple.input();
	cout << endl;
	comple.output();
	cout << endl;


	Vector coordinates1, coordinates2, sum_vec, sub_vec;
	cout << "Введите координаты первого вектора:" << endl;
	coordinates1.input();
	cout << "Введите координаты второго вектора:" << endl;
	coordinates2.input();
	cout << "Координаты первого вектора ";
	coordinates1.output();
	cout << "Координаты второго векторa ";
	coordinates2.output();
	cout << "Модуль первого вектора равен ";
	coordinates1.module();
	cout << "Модуль второго вектора равен ";
	coordinates2.module();
	cout << "Сумма векторов равна ";
	sum_vec.sum(coordinates1, coordinates2);
	cout << "Вычитание векторов равно ";
	sub_vec.subtraction(coordinates1, coordinates2);

}