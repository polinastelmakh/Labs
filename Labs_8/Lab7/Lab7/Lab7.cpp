#include "pch.h"
#include <iostream>
#include <string>
#include "Student.h"
#include "Complex.h"
#include "Auto.h"
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	//Student
	vector <Student> the_student;
	Student stud;
	int number_of_students;
	cout << "Введите количество студентов: ";
	cin >> number_of_students;
	for (int i = 0; i < number_of_students; i++) {
		cout << "Введите данные о " << i + 1 << " студенте!" << endl;
		stud.input();
		the_student.push_back(stud);
	}
	for (int i = 0; i < number_of_students; i++) {
		cout << "Данные о " << i + 1 << " студенте: " << endl;
		the_student[i].output();
	}
	cout << endl << endl;

	//Complex
	list <Complex> the_complex;
	Complex cmpl;
	int number_of_complex;
	cout << "Введите количество комплексных чисел: ";
	cin >> number_of_complex;
	for (int i = 0; i < number_of_complex; i++) {
		cout << "Введите данные о " << i + 1 << " комплексном числе!" << endl;
		cmpl.input();
		the_complex.push_back(cmpl);
	}
	cout << "Комплексные числа: " << endl;
	for (auto i = the_complex.begin(); i != the_complex.end(); i++) 
			cout << *i;
	cout << endl << endl;

	//Auto
	queue <Auto> the_auto;
	Auto avto;
	int number_of_auto;
	cout << "Введите количество машин в очереди: ";
	cin >> number_of_auto;
	for (int i = 0; i < number_of_auto; i++) {
		cout << "Введите данные о " << i + 1 << " машине!" << endl;
		avto.input();
		the_auto.push(avto);
	}
	cout << "Машин в очереди: "<< the_auto.size() << "!" << endl;
}
