#include "pch.h" 
#include "Tiles.h"
#include <string>
#include <iostream> 
#include <math.h>

using namespace std;

void Tiles::getData() {
	cout << "Фирма: " << brand << endl;
	cout << "Высота: " << size_h << endl;
	cout << "Ширина: " << size_w << endl;
	cout << "Цена: " << price << endl;
	cout << endl;
}

Tiles::Tiles() {
	cout << "Пустой конструктор!" << endl;
	brand = "No brand";
	size_h = 0;
	size_w = 0;
	price = 0;
}

Tiles::Tiles(string Brand, int Size_h, int Size_w, float Price) {
	cout << "Конструктор с параметрами!" << endl;
	brand = Brand;
	size_h = Size_h;
	size_w = Size_w;
	price = Price;
}

Tiles::Tiles(string Brand, int Size_h, int Size_w): brand(Brand), size_h(Size_h), size_w(Size_w) {
	cout << "Конструктор инициализации!" << endl;
	price = 0;
}

Tiles::Tiles(const Tiles & object) {	
	cout << "Конструктор копирования" << endl;
	brand = object.brand;
	size_h = object.size_h;
	size_w = object.size_w;
	price = object.price;
}

Tiles::~Tiles() {
	cout << "Декструктор Tiles!" << endl;
}