#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "matrix.h"
#include "matrix.h"

int main(){
	setlocale(LC_ALL, "Russian");

	Matrix A(2, 2);
	std::cin >> A;
	std::cout << A;

	Matrix B(3, 3);
	std::cin >> B;
	std::cout << B;

	return 0;
}