## Example



# Readme file for the given code

## Introduction

This code creates a 2D character array of size 3x5 using a function called `word_Sentences()` defined in a header file named `Header.h`. Then, it prints the contents of the array in two different ways.

## Prerequisites

- A C++ compiler installed on your system.
- The `Header.h` file should be included in the same directory as the main code file.

## How to run the code

1. Open a C++ compiler on your system.
2. Open the code file in the compiler.
3. Compile and run the code.

## Description

- The code initializes two integer variables `row` and `col` with values 3 and 5 respectively.
- It then calls the function `word_Sentences(row, col)` which returns a 2D character array of size `row` x `col`.
- The contents of the array are printed in two different ways using nested `for` loops.
- In the first loop, the array contents are printed in a grid-like format with the array index.
- In the second loop, the array contents are printed in sentence form with each row representing a sentence.
- The `if` condition inside both loops is used to break out of the loop after printing the first three rows and the first three columns.

## Conclusion

This code demonstrates the use of a 2D character array in C++ and how to print its contents in different ways. It can be used as a reference to understand the basics of working with arrays in C++.

## ===========================================================================

## Multidimensional Pointers
## Program Overview

This program takes input from the user for an array of integers of length 'size' and checks for invalid input. If the input is valid, it then performs the task of splitting the array into two subarrays, one containing the even integers and the other containing the odd integers.

## Input
The program prompts the user to enter the length of the array by displaying the message "Enter the length:". The user inputs the desired length of the array.

## Creating the array
The program creates a dynamic array of size 'size' using the 'new' operator. The array is declared as an integer pointer variable.

## Input validation
The program uses a for loop to prompt the user to enter integers for each index of the array. It also checks whether the input is valid or not. The while loop is used to check for the invalid input conditions, i.e. whether the input is less than zero or whether it is equal to the previous element of the array. If the input is not valid, the program prints an error message and prompts the user to enter a new input.

## Printing the array
After the array has been filled with the input values, the program uses a for loop to print out each element of the array.

## Splitting the array
The program calls the 'spl' function, which takes the array and its size as inputs, and returns a pointer to a new array. This array contains the even and odd integers separated into two subarrays.

## Printing the split array
The program uses a for loop to print out each element of the new array containing the even and odd integers separated into two subarrays.

## Memory deallocation
After the program has finished executing, the dynamic array is deleted using the 'delete[]' operator and the array pointer is set to NULL.

## Running the program
To run the program, compile it and run the executable file. The program will prompt the user to enter the length of the array and to enter integers for each index of the array. Once the user has finished entering values for the array, the program will print out each element of the array, followed by the even and odd integers separated into two subarrays.


