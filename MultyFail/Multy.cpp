// ������������ ������
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"//����������� ����� -������������� � ����������� �������
#include "Structeres.h"//����������� ����� ������������� �� ����������� � ����������� �������
#include "data.h"//����������� ����� ������������� � ��������������� �����������
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//���������� �� ����������
	
	person Tom{ "Tom Soer",14,"manager",45000 };
	show_person(Tom);
	
	// ���������� � ���������
		
	std::cout << sum_AB(3, 5) << '\n';
	const int size = 5;
	int arr[size]{ 1,2,3,4,5 };
	show_arr(arr, size);
	std::cout << "������� �����: ";
	std::cin >> n;
	std::cout << absolute(n) << "\n";
	
	std::cout << _PI << '\n';
	_N = 10;
	std::cout << _N << '\n';
	
	return 0;
}

