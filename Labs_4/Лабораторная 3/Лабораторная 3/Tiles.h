#pragma once
#include <iostream> 

using namespace std;

class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	float price;
	Tiles();
	Tiles(string Brand,int Size_h, int Size_w, float Price);
	Tiles(string Brand, int Size_h, int Size_w);
	Tiles(const Tiles & object);
	~Tiles();
	void getData();
};