#pragma once
double sum_AB(double a, double b);
//����� ������� � �������
void show_arr(int arr[], const int length);

template <typename T>
T absolute(T num) {
	return num < 0 ? -num : num;
}