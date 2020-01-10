//
// Created by Nathan Teeter on 2019-02-19.
//

#include <ostream>

#ifndef MATRIXMULT_MATRIX_H
#define MATRIXMULT_MATRIX_H

template <class T>
class Matrix {
private:
	/* Member Variables */
	int rows;
	int cols;
	T** mat;

public:
	/* CONSTRUCTOR */
	Matrix(int i, int j);

	/* DESTRUCTOR */
	~Matrix();

	/* GETTERS */
	int getRows();
	int getCols();

	/* METHODS */
	void Print();
	void fillZeros();
	void fillNull();
	void fillRand();
	void Set(int i, int j, T val);
	int Size();
	T Get(int i, int j);

	//Overload output
    friend std::ostream& operator<<(std::ostream& os, const Matrix<T>& m);
};


#endif //MATRIXMULT_MATRIX_H
