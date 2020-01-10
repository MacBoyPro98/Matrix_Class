# Matrix Class
Template Matrix Class (C++) to allow easy creatation of 2D Matrices in C++. 

## Usage
Creating a new Matrix (C++)
```cpp
int main() {
    //creates new 5x5 matrix
    Matrix <int> matrix (5, 5);
    
    return 0;
}
```

## Methods
These are all the methods included in the class.
### Print
Prints the Matrix to the screen.
```cpp
void Print();
```

### Zeroes
Fills the Matrix with 0s.
```cpp
void Zeroes();
```

### Fill Null
Fills the Matrix with NULL.
```cpp
void fillNull();
```

### Set
Sets the value at the index with the value given.
```cpp
void Set(int i, int j, T val);
```

### Get
Returns the value at the index given.
```cpp
T Get(int i, int j);
```

### dot
Returns a new matrix that is the dot product of the two input matrices
```cpp
Matrix <T> dot(Matrix<T> x, Matrix<T> y);
```

### Sum
Returns a new matrix that is the sum of the two input matrices
```cpp
Matrix <T> sum(Matrix<T> x, Matrix<T> y);
```

## Getters
These functions return the private value from the Matrix Class.

### getSize
Returns the size of the Matrix. Size = rows * cols;
```cpp
T getSize();
```

### getRows
Returns the number of rows in the Matrix.
```cpp
T getRows();
```

### getCols
Returns the number of columns in the Matrix.
```cpp
T getCols();
```
