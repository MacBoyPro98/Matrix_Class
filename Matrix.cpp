//
// Created by Nathan Teeter on 2019-02-19.
//

#include <iostream>
#include <iomanip>
#include "Matrix.h"


/* Default Constructor*/
template <class T>
Matrix<T>::Matrix(int n, int m) {
	//Init rows/cols
	this->rows = n;
	this->cols = m;

	//create 2D array with those dimensions
	// dynamic allocation
	this->mat = new T*[n];
	for(int i = 0; i < n; ++i)
		this->mat[i] = new T[m];
}


/* Destructor */
template <class T>
Matrix<T>::~Matrix<T>(){
	for(int i = 0; i < this->rows; ++i)
		delete [] this->mat[i];
	delete [] this->mat;
}

template <class T>
void Matrix<T>::Print(){
	for(int i = 0; i < this->rows; ++i) {
		for(int j = 0; j < this->cols; ++j) {
			std::cout << std::setw(4) << this->mat[i][j] << std::setw(3) << " ";
		}
	std::cout << "\n";
	}
}

template <class T>
void Matrix<T>::fillZeros() {
	for(int i = 0; i < this->rows; ++i)
		for(int j = 0; j < this->cols; ++j)
			this->mat[i][j] = 0;
}

template <class T>
void Matrix<T>::fillNull() {
	for(int i = 0; i < this->rows; ++i)
		for(int j = 0; j < this->cols; ++j)
			this->mat[i][j] = NULL;
}

template <class T>
void Matrix<T>::fillRand() {
    //Add values to the Matrix
    for (int i = 0; i < this->rows; ++i) {
        for (int j = 0; j < this->cols; ++j) {
            this->mat[i][j] = rand() % 100;
        }
    }
}

template <class T>
void Matrix<T>::Set(int i, int j, T val) {
	this->mat[i][j] = val;
}

template <class T>
T Matrix<T>::Get(int i, int j) {
	return this->mat[i][j];
}

template <class T>
Matrix <T> dot(Matrix<T> &x, Matrix<T> &y) {
	if (x.getRows() == y.getCols()) {
		Matrix<int> m(x.getRows(), y.getCols());
		m.fillZeros();

		for (int i = 0; i < x.getRows(); i++)
			for (int j = 0; j < y.getCols(); j++)
				for (int k = 0; k < x.getCols(); k++)
					m.Set(i, j, m.Get(i, j) + x.Get(i, k) * y.Get(k, j));

//        m.Print();
        return m;
	} else {
	    std::cout << "\n[ERROR] - Dimensions of the matrices are not compatible\n";
        std::cout << "\tX Rows: " << x.getRows() << " Y Rows: " << y.getRows() << "\n";
        std::cout << "\tX Cols: " << x.getCols() << " Y Cols: " << y.getCols() << "\n";
	}
}

template <class T>
Matrix <T> sum(Matrix<T> &x, Matrix<T> &y) {
    if (x.getRows() == y.getRows() && x.getCols() == y.getCols()) {
        Matrix<int> m(x.getRows(), y.getCols());
        m.fillZeros();

        for (int i = 0; i < x.getRows(); i++)
            for (int j = 0; j < y.getCols(); j++)
                for (int k = 0; k < x.getCols(); k++)
                    m.Set(i, j, x.Get(i,j) + y.Get(i, j));

//        m.Print();
        return m;
    } else {
        std::cout << "\n[ERROR] - Dimensions of the matrices are not compatible\n";
        std::cout << "\tX Rows: " << x.getRows() << " Y Rows: " << y.getRows() << "\n";
        std::cout << "\tX Cols: " << x.getCols() << " Y Cols: " << y.getCols() << "\n";
    }
}

template <class T>
int Matrix<T>::Size() {
	return this->rows * this->cols;
}

template <class T>
int Matrix<T>::getRows() {
	return this->rows;
}

template <class T>
int Matrix<T>::getCols() {
	return this->cols;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const Matrix<T>& m) {
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            os << std::setw(4) << m.mat[i][j] << std::setw(3) << " ";
        }
        std::cout << "\n";
    }
    return os;
}