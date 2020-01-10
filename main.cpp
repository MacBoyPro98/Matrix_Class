#include <iostream>
#include <string>
#include "Matrix.h"
#include "Matrix.cpp"

int main() {
	//Create Matrix
	Matrix <int> matrix (2, 3);

	//Fill Matrix with 0s
	matrix.fillZeros();

	//Size of the array
	std::cout << "\nSize: " << matrix.Size() << std::endl;

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
	std::cout << "\nFilled Matrix 1:\n";
	matrix.Print();

	//Create Second Matrix
	Matrix <int> matrix2(3, 2);

    //Fill Matrix with 0s
    matrix2.fillZeros();

    //Add values to the Matrix
    for (int i = 0; i < matrix2.getRows(); i ++) {
        for (int j = 0; j < matrix2.getCols(); j ++) {
            matrix2.Set(i, j, rand() % 100);
        }
    }

    //Print Updated Matrix
    std::cout << "\nFilled Matrix 2:\n";
    matrix2.Print();

    //Matrix Mult
    std::cout << "\nMultiplying Matrices:\n";
    Matrix<int> m = dot(matrix, matrix2);
    m.Print();

    //Create 2 new Matrices
    Matrix<int> m1(2,3);
    Matrix<int> m2(2,3);
    //Fill both randomly
    m1.fillRand();
    m2.fillRand();
    //Print both
    std::cout << "\nFilled Matrix 1:\n";
    m1.Print();
    std::cout << "\nFilled Matrix 2:\n";
    m2.Print();

    //Matrix Addition
    std::cout << "\nSumming Matrices:\n";
    Matrix<int> n = sum(m1, m2);
    n.Print();

//	int i = rand() % matrix.getRows();
//	int j = rand() % matrix.getCols();
//	std::cout << "\nValue from " << i << "," << j << " in Matrix: " << matrix.Get(i, j) << std::endl;

    return 0;
}