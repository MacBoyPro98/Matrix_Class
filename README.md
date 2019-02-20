# Matrix Class
Template Matrix Class (C++). This will allow people to create 2D Matrices in C++. 

## Usage
Creating a new Matrix (C++)
```cpp
int main() {
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

