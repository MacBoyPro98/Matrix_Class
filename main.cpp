#include <iostream>
#include <string>
#include "Matrix.h"
#include "Matrix.cpp"

int main() {
	//Create Matrix
	Matrix <int> matrix (5, 5);

	//Fill Matrix with 0s
	matrix.Zeroes();

	//Size of the array
	std::cout << "\nSize: " << matrix.getSize() << std::endl;

	//Print Matrix
	std::cout << "\nEmpty Matrix:\n";
	matrix.Print();

	//Add values to the Matrix
	for (int i = 0; i < matrix.getRows(); i ++) {
		for (int j = 0; j < matrix.getCols(); j ++) {
			matrix.Set(i, j, rand() % 100);
		}
	}

	//Print Updated Matrix
	std::cout << "\nFilled Matrix:\n";
	matrix.Print();

	int i = rand() % matrix.getRows();
	int j = rand() % matrix.getCols();
	std::cout << "\nValue from " << i << "," << j << " in Matrix: " << matrix.Get(i, j) << std::endl;

	//Delete Matrix
//	~matrix();

	//Create Matrix of doubles
	std::cout << "\nMatrix of Double\n";
	Matrix <double> matrix1 (5, 5);

	//Add values to the Matrix
	for (int i = 0; i < matrix1.getRows(); i ++) {
		for (int j = 0; j < matrix1.getCols(); j ++) {
			matrix1.Set(i, j, (double)rand());
		}
	}

	//Print Matrix
	std::cout << "\nFilled Matrix:\n";
	matrix1.Print();


	std::cout << "\nValue from " << i << "," << j << " in Matrix: " << matrix1.Get(i, j) << std::endl;

	return 0;
}