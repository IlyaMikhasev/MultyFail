#include "functions.h"
#include <iostream>
double sum_AB(double a, double b) {
	return a + b;
}

void show_arr(int arr[], const int length){
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

