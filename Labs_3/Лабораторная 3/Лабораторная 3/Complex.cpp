#include "pch.h" 
#include "Complex.h"
#include <string>
#include <iostream> 

using namespace std;

void Complex::input()
{
	cout << "������������� �����: ";
	cin >> x;
	cout << "������ �����: ";
	cin >> y;
}

void Complex::output()
{
	cout << "������������� ���� �����: " << x << endl;
	cout << "������ ����� �����: " << y << endl;
	double modul;
}

void Complex::module()
{
	double abs = sqrt(x * x + y * y);
	cout << "������ ������������ ����� �����: " << abs;
}