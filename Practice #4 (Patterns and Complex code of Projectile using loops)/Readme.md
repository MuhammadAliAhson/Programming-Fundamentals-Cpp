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


## Practice #4 Q4


### Part 1

This program calculates the value of cosine of an angle using the Taylor series expansion formula. It takes two inputs from the user, the angle and the number of terms to be used in the expansion. The program uses a for loop to iterate over each term in the series, and calculates the sum of terms. 

#### How to run the program:

1. Open a C++ compiler.
2. Copy the code into the compiler.
3. Compile and run the program.
4. Enter the angle and the number of terms when prompted.

### Part 2

This program contains functions for addition, subtraction, multiplication, and division of two numbers. The program takes two integer inputs from the user and performs the requested operation. The addition and subtraction functions use bitwise operators to perform their calculations. 

#### How to run the program:

1. Open a C++ compiler.
2. Copy the code into the compiler.
3. Compile and run the program.
4. Enter the two integers when prompted.
5. Choose the operation to perform when prompted.

### Part 3

This program checks whether a number is a perfect number or not. A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). The program prompts the user to enter an integer, and then iterates over all integers from 2 to the input number to check if they are perfect numbers. 

#### How to run the program:

1. Open a C++ compiler.
2. Copy the code into the compiler.
3. Compile and run the program.
4. Enter an integer when prompted.

### Part 4

This program prints a graphical representation of a polynomial function. It prompts the user to enter two values, x and n. The program then calculates the value of the function for each value of x, and prints the function as a series of asterisks. The number of asterisks printed for each value of x is proportional to the value of the function. 

#### How to run the program:

1. Open a C++ compiler.
2. Copy the code into the compiler.
3. Compile and run the program.
4. Enter the values of x and n when prompted.




## Practice #4 Q5

# Decimal to Binary, Octal, and Hexadecimal Converter

This program takes an integer in the range of 1 to 256 as input and converts it into binary, octal, and hexadecimal numbers.

## Steps to run the program

1. Open any C/C++ compiler (preferably in Linux/Ubuntu) and create a new file.
2. Copy the given code and paste it in the file.
3. Save the file with a ".cpp" extension.
4. Compile and run the program.

## Explanation of the code

1. The `reverse` function is defined which takes an integer as input and reverses the digits of the integer. It will be used later in the `binary`, `octal`, and `hexadecimal` functions.
2. The `binary` function takes an integer as input and converts it into a binary number using the division method. The remainder of each division is stored in an array and the binary number is printed by reversing the array using the `reverse` function.
3. The `octal` function takes an integer as input and converts it into an octal number using the division method. The remainder of each division is stored in an array and the octal number is printed by reversing the array using the `reverse` function.
4. The `hexadecimal` function takes an integer as input and converts it into a hexadecimal number using the division method. The remainder of each division is stored in an array and the hexadecimal number is printed by reversing the array using the `reverse` function. If the remainder is greater than 9, the corresponding alphabet is printed instead of the number.
5. The `main` function takes an integer as input and checks whether it is in the range of 1 to 256. If it is, it calls the `binary`, `octal`, and `hexadecimal` functions. If it is not, it prints an error message.

## Output

The output of the program will be the binary, octal, and hexadecimal representations of the entered decimal number.




## Practice #4 Q6

## Hotel Room Occupancy

This program helps to calculate the room occupancy and percentage of occupancy of a hotel with floors and rooms.

### How to use the program?

1. The user inputs the number of floors the hotel has.
2. For each floor, the user inputs the number of rooms and the number of occupied rooms.
3. The program then calculates the total number of rooms, the number of occupied rooms, the number of unoccupied rooms, and the percentage of rooms that are occupied.
4. The results are printed on the console.

### How the program works?

The program takes input from the user regarding the number of floors, rooms and occupied rooms on each floor.
It calculates the total number of rooms and occupied rooms, and the number of unoccupied rooms.
It also calculates the percentage of rooms that are occupied.

The program checks if the input is valid or not. The number of rooms on each floor should be greater than or equal to 10, else it is considered invalid.
If the input is invalid, the program prints an error message and breaks out of the loop.

### Code walkthrough

The program starts with including the necessary header files.

```c++
#include <iostream>
using namespace std;
```

In the `main` function, we declare the required variables and take input from the user for the number of floors.

```c++
int main(){
    int n,w=0,rooms=0,oc_rooms=0,d=0;
    float o;
    cout<<"Enter the number of floors the hotel have : "<<endl;
    cin>>n;
```

If the input is valid, the program executes the `for` loop for the given number of floors. Inside the loop, we take input from the user for the number of rooms and the number of occupied rooms on each floor.

```c++
    if(n>=1){
    for(n;n>0;n--){
            cout<<"Enter the number  of rooms at "<<n<<" floor. ";
            cin>>w;
            if(w>=10){
            rooms=rooms+w;
            cout<<endl;
            cout<<"Enter the number of occupied rooms at "<<n<<" floor. ";
            cin>>d;
            oc_rooms=oc_rooms+d;
            cout<<endl;
        }
        else{
        	cout<<"Invalid input for the rooms "<<endl;
		break;}
    }
```

If the input is valid, the program then calculates the total number of rooms, the number of occupied rooms, the number of unoccupied rooms, and the percentage of rooms that are occupied.

```c++
    if(w>=10){
    cout<<"Total rooms "<<rooms<<endl;
    cout<<"Occupied rooms "<<oc_rooms<<endl;
    cout<<"Unoccupied rooms "<<rooms-oc_rooms<<endl;
    o=(oc_rooms/rooms);
    cout<<"The percentage of rooms that are occupied "<<o*100<<"%"<<endl;
}
```

If the input is invalid, the program prints an error message.

```c++
else {
	cout<<"Invalid input."<<endl;
}
    return 0;
}
```




## Practice #4 Q7






## Practice #4 Q8
