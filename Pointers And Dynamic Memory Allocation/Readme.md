## Example1.cpp

This C++ program reads 10 integers from the user and finds the largest and smallest numbers from the input using two functions - `max()` and `min()`. The functions are defined in a separate header file named "Header.h".

Here is a brief description of the program and the functions:

### main()
In the main function, an array `r` of size 10 is dynamically allocated using the `new` keyword. The user is then prompted to enter 10 integers, which are stored in the array using a loop. The `max()` and `min()` functions are called with the array as an argument to find the largest and smallest numbers respectively. The results are then printed on the console using the `cout` statement. Finally, the allocated memory is released using the `delete[]` operator.

### max(int* arr)
This function takes a pointer to an integer array as an argument and returns the largest number in the array. It uses a simple iterative approach to compare each number with the current maximum value and update it if a larger number is found.

### min(int* arr)
This function takes a pointer to an integer array as an argument and returns the smallest number in the array. It uses a similar iterative approach to compare each number with the current minimum value and update it if a smaller number is found.

Note: The use of `new` and `delete[]` to allocate and free memory for the array is not considered best practice in modern C++. It is recommended to use `std::vector` or other container classes instead.


## Example2.cpp

## Program Description

This program prompts the user to enter five floating-point numbers, and then performs the following operations using functions defined in the "Header.h" header file:

- Calculates and displays the half of each number.
- Calculates and displays the product of all the entered numbers.

## Sample Usage

### Input:

```
5.5 2.5 10.5 8.5 1.5
```

### Output:

```
The half value is
2.75
1.25
5.25
4.25
0.75
The product is 787.59375
```

## Code Explanation

The program uses dynamic memory allocation to create an array of five floating-point numbers. It then uses a for loop to read five numbers from the user and store them in the array. 

Next, the program calls the "half" function defined in the "Header.h" header file to calculate the half of each number. It then displays the half values using another for loop.

Finally, the program calls the "multiply" function defined in the "Header.h" header file to calculate the product of all the entered numbers. It displays the product value on the console.

After the operations are complete, the program deallocates the memory used by the dynamically allocated array.



## Example3.cpp



This program compares two strings entered by the user and returns true if they are the same and false if they are different.

### Function `compare`

The `compare` function takes two char pointers as arguments and compares the characters of the two strings. It returns an integer value 1 if the strings are the same, or 0 if they are different.

```c++
int compare(char* str1, char* str2)
```

### Sample usage

```c++
int choice = 0;
char* r1 = new char[10];

cout << "Enter the 1st string " << endl;
cin >> r1;
char* r2 = new char[10];
cout << "Enter the 2nd string " << endl;
cin >> r2;

choice = compare(r1, r2);
if (choice == 1) {
    cout << "Its true";
}
else {
    cout << "Its false";
}
```

### Note

The program assumes that the length of the input strings is at most 10 characters long. If the user enters a string longer than this limit, the program may not work as intended.

## Example4.cpp


It seems like you are trying to find the first occurrence of a character in a string and print the remaining part of the string. Here's an example implementation:

```cpp
#include <iostream>
#include "Header.h"
using namespace std;

int main() {
    char r1[20];
    char r2;

    cout << "Enter the string: ";
    cin >> r1;

    cout << "Enter the character to search for: ";
    cin >> r2;

    char* p = strchr(r1, r2); // find the first occurrence of r2 in r1

    if (p != nullptr) {
        cout << "The remaining part of the string is: " << (p + 1) << endl;
    } else {
        cout << "The character was not found in the string." << endl;
    }

    return 0;
}
```

In this example, `strchr()` function is used to find the first occurrence of the character in the string. If the character is found, it returns a pointer to the first occurrence of the character in the string, and the remaining part of the string is printed using `(p + 1)`.

Note that in this example, `r1` is declared as a character array with a fixed size of 20, rather than using dynamic memory allocation with `new`. This is because the size of the input string is not known in advance, and it's easier to use a fixed-sized array with a sufficiently large size. Also, `strchr()` function expects a null-terminated string, so there's no need to allocate extra space for the null terminator.



## Example5.cpp

## String Swap

This is a C++ program that takes two input strings and swaps them. The program prompts the user to input two strings and then swaps the contents of the two strings.

### How to Run the Program

1. Open a C++ compiler of your choice.
2. Create a new file and copy the code from above.
3. Save the file with a .cpp extension.
4. Compile and run the program.
5. The program will prompt the user to input two strings.
6. The program will then swap the two strings.
7. The output will display the two swapped strings.

### Program Explanation

The program takes two strings as input using the `cin` statement. Then the `swap()` function is called, passing the two strings as parameters. Inside the `swap()` function, the program swaps the contents of the two strings using a temporary variable to hold one of the string values while swapping. Finally, the two swapped strings are displayed using `cout` statement.



## Example6.cpp

Without knowing the implementation of the `fun()` function, it's hard to know exactly what this program does. However, here is a basic step-by-step guide on how to run this program:

1. Open a C++ compiler or integrated development environment (IDE) on your computer. Popular options include Visual Studio, Code::Blocks, and Xcode.
2. Create a new project and select the option to create a console application.
3. Create two files: `main.cpp` and `Header.h`. Copy the code you provided into `main.cpp`.
4. In the `Header.h` file, include any necessary headers and declare the functions used in `main.cpp`. For example, if the `fun()` function is defined in another source file, you may need to include a header for that file and declare the function in `Header.h`.
5. Compile and run the program. This will likely involve clicking a "build" or "run" button in your IDE.
6. When the program runs, it will prompt the user to enter 10 integers. Enter 10 integer values and press Enter after each one.
7. After all 10 integers have been entered, the program will call the `fun()` function with the array of integers as an argument.
8. The `fun()` function will modify the array in some way.
9. After the `fun()` function has finished executing, the program will print out the modified array to the console.

Note that the behavior of the `fun()` function is not specified in the code you provided, so it's impossible to say exactly what this program will do. However, based on the name of the function, it's likely that it will perform some sort of transformation on the array of integers.


##--------------------------------------------------------------------------------


## Header.h

This is a header file containing multiple functions that operate on different types of data.

The `int min(int* ptr)` function takes a pointer to an integer array and returns the minimum value of the array.

The `int max(int* ptr)` function takes a pointer to an integer array and returns the maximum value of the array.

The `int half(float* ptr)` function takes a pointer to a float array and divides each element by 2.

The `float multiply(float* ptr)` function takes a pointer to a float array and returns the product of all the elements in the array.

The `bool compare(char* c1, char* c2)` function takes two pointers to char arrays and compares them character by character. If they are equal, it returns true, otherwise it returns false.

The `int swap(char*& c1, char*& c2)` function takes two pointers to char arrays and swaps the contents of the arrays.

The `int fun(int* ptr)` function takes a pointer to an integer array and moves all the even numbers to the beginning of the array and all the odd numbers to the end of the array.






