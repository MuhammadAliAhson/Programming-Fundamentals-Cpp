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
