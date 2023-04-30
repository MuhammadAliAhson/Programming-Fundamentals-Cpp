# Matrix Operations

This is a C++ code that performs various operations on matrices, including:

- Finding the sum of all elements in a matrix.
- Finding the sum of each row in a matrix.
- Finding the sum of each column in a matrix.
- Transposing a matrix.
- Adding two matrices.
- Multiplying two matrices.
- Finding the sum of the left diagonal elements of a matrix.
- Finding the sum of the right diagonal elements of a matrix.
- Displaying the middle row of a matrix.
- Displaying the middle column of a matrix.
- Converting a string of digits to an array of integers.
- Adding two arrays of integers.
- Subtracting two arrays of integers.

## How to use

- The code is written in C++ and can be compiled and run in a C++ environment, such as Visual Studio or CodeBlocks.

- The code consists of several functions, each with its own input and output parameters. To use the functions, simply call them in your main function and pass the necessary parameters.

- The functions are:

  - `int arraySum(int arr[][5], int col, int row)` - This function finds the sum of all the elements in a matrix.
  - `int* rowSum(int arr[][4], int col, int row)` - This function finds the sum of each row in a matrix and returns an array of integers.
  - `int* colSum(int arr[][4], int col, int row)` - This function finds the sum of each column in a matrix and returns an array of integers.
  - `int** transposeMatrix(int arr[][2], int col, int row)` - This function transposes a matrix.
  - `int** matrixSum(int arr[][3], int arr2[][3], int col, int row)` - This function adds two matrices and returns a new matrix.
  - `int multiplyMatrix(int arr[][4], int arr2[][4], int col_1, int row_1, int col_2, int row_2)` - This function multiplies two matrices and returns an integer value.
  - `int leftDiagonalSum(int arr[][4], int col, int row)` - This function finds the sum of the left diagonal elements of a matrix.
  - `int rightDiagonalSum(int arr[][4], int col, int row)` - This function finds the sum of the right diagonal elements of a matrix.
  - `int* displayMiddleRow(int arr[][5], int row)` - This function displays the middle row of a matrix and returns an array of integers.
  - `int* displayMiddleCol(int arr[][5], int row)` - This function displays the middle column of a matrix and returns an array of integers.
  - `int* toIntArray(string str)` - This function converts a string of digits to an array of integers.
  - `int* addTwoArray(string str, string str2)` - This function adds two arrays of integers.
  - `int* subTwoArray(string str, string str2)` - This function subtracts two arrays of integers.

- The input parameters for each function are described in the function definition comments. The output parameters are returned by the functions themselves.

## Example

Here is an example of how to use the `matrixSum()` function to add two matrices:

```c++
#include <iostream>
#include "matrix_operations.h"

using namespace std;

int main()
{
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int arr2[3][3] = { {9, 8, 7}, {
