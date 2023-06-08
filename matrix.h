#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "func.h"

class Matrix
{
private:
	int M;
	int N;
	int** arr;
	int cnt = 1;
public:

	Matrix() {
		M = 0;
		N = 0;
		arr = nullptr;
		cnt = 1;
	}


	Matrix(int n, int m) {
		
		this->N = n;
		this->M = m;
		
		arr = new int*[n];

		for (int i = 0; i < n; i++)
		{
			arr[i] = new int[m];
		}
	}


	Matrix(Matrix& matr) {

		arr = new int* [N];
		for (int i = 0; i < N; i++)
		{
			arr[i] = new int[M];
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++)
			{
				arr[i][j] = matr.arr[i][j];
			}
		}
	}

	int get_N(){
		return N;
	}

	int get_M() {
		return M;
	}

	void print_info()
	{
		std::cout << "\n" << "Матрица " << cnt << "\n" << std::endl;
		for (int i = 0; i < get_N(); i++) {
			for (int j = 0; j < get_M(); j++)
			{
				std::cout << arr[i][j] << ' ';
			}
			std::cout << std::endl;
		}
	}

	void set_matr()
	{

		std::cout << "У нас Матрица номер "<< cnt<<" размером" << N << "x" << M << "\n" << std::endl;
		std::cout << "Заполните матрицу поочередно" << std::endl;

		for (int i = 0; i < get_N(); i++) {
			for (int j = 0; j < get_M(); j++)
			{
				input_valid(arr[i][j], "Ошибка ввода, введите ещё раз: "); 
			}
		}
	}


	~Matrix() {
		for (int i = 0; i < N; i++) delete[] arr[i];
		delete[] arr;
	}

	friend std::istream& operator>>(std::istream& is, Matrix& m);
	friend std::ostream& operator<<(std::ostream& os, Matrix& m);
};