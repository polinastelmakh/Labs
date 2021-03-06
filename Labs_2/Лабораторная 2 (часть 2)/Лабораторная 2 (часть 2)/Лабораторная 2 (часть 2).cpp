#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <time.h> 
#include "func.h"

using namespace std;

int(*func(int *ar, int N))(int *ar, int N)
{
	int sum = 0;
	for (int i = 1; i < N; i++)
		sum += ar[i];
	cout << endl;
	cout << "Сумма равна " << sum << endl;
	if (sum == ar[0])
		return(one);
	if (sum > ar[0])
		return(two);
	return(three);
}

int one(int *ar, int N)
{
	int t;
	for (int i = 0; i < N / 2; i++) {
		t = ar[i];
		ar[i] = ar[N - i - 1];
		ar[N - i - 1] = t;
	}
	return 0;
}

int two(int *ar, int N)
{
	int t;
	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (ar[j] < ar[i]) {
				t = ar[i];
				ar[i] = ar[j];
				ar[j] = t;
			}
	return 0;
}

int three(int *ar, int N) {
	int t;
	for (int i = 0; i < N - 1; i++)
		for (int j = i + 1; j < N; j++)
			if (ar[j] > ar[i]) {
				t = ar[i];
				ar[i] = ar[j];
				ar[j] = t;
			}
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	int const n = 10;
	int arr[n] = {};
	int(*pointer)(int *ar, int N);
	srand(time(NULL));
	cout << "Сгенерированный целочисленный массив: ";
	for (int i = 0; i < n; i++) {
		arr[i] = -20 + rand() % 41; //[-20;20]
		cout << arr[i] << " ";
	}
	pointer = func(arr, n);
	pointer(arr, n);
	cout << "Массив, после преобразования: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
