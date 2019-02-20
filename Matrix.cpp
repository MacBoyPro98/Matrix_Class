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
void Matrix<T>::Zeroes() {
	for(int i = 0; i < this->rows; ++i)
		for(int j = 0; j < this->cols; ++j)
			this->mat[i][j] = 0;
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
int Matrix<T>::getSize() {
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