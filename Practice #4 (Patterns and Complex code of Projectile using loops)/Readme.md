## Practice #4 Q1

## Description
This program calculates the cosine of a given angle using the Taylor series expansion. The user inputs the angle and the number of terms they would like to use in the expansion. The program outputs the approximate value of the cosine and the exact value of the cosine for comparison.

## Usage
1. Run the program in a C++ compiler.
2. Enter the angle in degrees when prompted.
3. Enter the number of terms to be used in the Taylor series expansion.
4. The program will output the approximate value of the cosine using the Taylor series expansion.
5. The program will output the exact value of the cosine for comparison.

## Code Explanation
### Part 1
- The `iostream` and `cmath` libraries are included.
- The `namespace std` is used.
- The following functions are declared:
    - `calcTerm(long double angle, long double i)` which calculates the value of each term in the Taylor series expansion.
    - `sumTerms(long double input)` which calculates the sum of the terms in the Taylor series expansion.
    - `testFunction(long double angle)` which calculates the exact value of the cosine using the `cos()` function.
- In `main()`, the user is prompted to enter the angle and the number of terms to be used in the Taylor series expansion.
- A `for` loop is used to iterate through each term in the Taylor series expansion.
- The `calcTerm()` function is called to calculate the value of each term.
- The `sumTerms()` function is called to calculate the sum of the terms.
- The approximate value of the cosine using the Taylor series expansion is outputted.
- The exact value of the cosine using the `cos()` function is outputted.

### `calcTerm(long double angle, long double i)`
- `pi` is defined as a constant.
- `angle` is converted from degrees to radians.
- `sign`, `fact`, `exp`, and `res` are initialized to 1.
- A `for` loop is used to iterate through each term in the Taylor series expansion.
- The value of `sign`, `fact`, and `exp` are updated for each term.
- The value of `res` is calculated for each term.
- The value of `res` is returned.

### `sumTerms(long double input)`
- `sum` is initialized to 0.
- `input` is added to `sum`.
- The value of `sum` is returned.

### `testFunction(long double angle)`
- `input1` is calculated by converting `angle` from degrees to radians.
- The exact value of the cosine using the `cos()` function is returned.


## Practice #4 Q2


This program is a simple calculator that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. It has two parts, and we will describe each part step-by-step.

Part 1:

1. The program starts by including two C++ libraries - `iostream` and `cmath`.

2. The `using namespace std` statement is used to avoid writing `std::` before each standard library function.

3. Three functions are declared and defined - `calcTerm()`, `sumTerms()`, and `testFunction()`.

4. The `main()` function prompts the user to enter the angle and the number of terms.

5. The `for` loop calls the `calcTerm()` function with the angle and the current term number as arguments.

6. The `input` variable is assigned the value returned by `calcTerm()`.

7. The `sumTerms()` function is called with the `input` variable as an argument.

8. The output is displayed using `cout`.

9. Finally, the `testFunction()` function is called to test the output of the program with the `cos()` function.

Part 2:

1. The program starts by including two C++ libraries - `iostream` and `conio.h`.

2. The `using namespace std` statement is used to avoid writing `std::` before each standard library function.

3. Four functions are declared - `add()`, `sub()`, `mul()`, and `div()`.

4. The `add()`, `sub()`, `mul()`, and `div()` functions are defined to perform addition, subtraction, multiplication, and division, respectively.

5. The `main()` function prompts the user to enter two digits.

6. The `add()` and `sub()` functions are called with the two digits entered by the user as arguments.

7. The `mul()` and `div()` functions are commented out, indicating that they are not yet implemented. 

8. The program returns 0, indicating successful execution.


## Practice #4 Q3


# Explanation of Part 3

The code in Part 3 is a C++ program to find all the perfect numbers that are less than or equal to a given integer `x`. 

### Function Description

The code has two functions:

1. `int checkPerfectNumber(int i)`: This function takes an integer `i` as input, checks if it's a perfect number or not, and returns 0.
2. `int main()`: This function is the main driver function of the program, which takes an integer `x` as input, and iterates over all the integers between 2 and `x`. For each integer `i` between 2 and `x`, it calls the `checkPerfectNumber(i)` function to check if it's a perfect number or not.

### Algorithm for Perfect Number

A number is said to be a perfect number if it is equal to the sum of its proper divisors (excluding the number itself). For example, 6 is a perfect number as its proper divisors are 1, 2, and 3, and their sum is 6.

### Explanation of `checkPerfectNumber()` function

The `checkPerfectNumber()` function takes an integer `i` as input, finds all the divisors of `i` (excluding `i` itself), adds them, and checks if the sum is equal to `i`. If it's equal, then `i` is a perfect number, and the function prints `i` and returns 0. Otherwise, it just returns 0.

### Explanation of `main()` function

The `main()` function takes an integer `x` as input using `cin`, and then iterates over all the integers between 2 and `x` using a `for` loop. For each integer `i` between 2 and `x`, it calls the `checkPerfectNumber(i)` function. If `i` is a perfect number, then the `checkPerfectNumber()` function will print `i`.

### Example Output

Let's say the user enters `28` as the input for `x`. The program will iterate over all the integers between 2 and 28, and print all the perfect numbers it finds. The output will be:

```
Enter a integer :28
6
28
```

This is because 6 and 28 are the only perfect numbers between 2 and 28.
