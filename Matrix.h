//
// Created by Nathan Teeter on 2019-02-19.
//

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
	int getSize();
	int getRows();
	int getCols();

	/* METHODS */
	void Print();
	void Zeroes();
	void fillNull();
	void Set(int i, int j, T val);
	T Get(int i, int j);
};


#endif //MATRIXMULT_MATRIX_H
