## Readme

##    Q1.cpp (Cricket Tournament Simulator)

This C++ program simulates a cricket tournament using random number generation. The program has two rounds of matches. In the first round, six matches are played between 12 teams. The winning teams from these matches then move on to the second round, where three matches are played and the winners are declared as the champions of the tournament.

### Instructions

1. Compile the code using a C++ compiler
2. Run the executable file
3. The program will display the results of the matches, as well as the winner of the tournament.

### Code Overview

#### Libraries Used
- iostream
- string
- cstdlib

#### Variables
- match1, match2, match3, match4, match5, match6, match7, match8, match9: strings representing the winning team of each match
- teama, teamb, teamc, teamf, teamf2, teamw: strings representing the winning teams of the first and second round
- n, o, p, q, r, s, t, u, v, w, x, y, z, ab, bc, cd, ef: integers representing the results of the random number generation
- a - m: strings representing the 12 teams participating in the tournament
- win: string representing the message displayed when a team wins a match

#### Main Function

The main function contains the following steps:
1. Declare the variables as described above
2. Play the first round of matches between the 12 teams, with the winning teams of each match being stored in the match1 to match6 variables
3. Play the second round of matches between the winning teams from the first round, with the winning teams of each match being stored in the teama to teamw variables
4. Display the results of the matches and declare the winner of the tournament.



##    Q2.cpp 

This code appears to be a C++ program that asks for various inputs and makes decisions based on those inputs to determine whether to go on a trip or stay at home. 

Here's a brief summary of what the code does:

- The program welcomes the user to Trip Advisor and asks for the outlook (presumably the weather outlook).
- The program declares some variables and sets some strings for later use.
- If the outlook is "sunny", the program asks for humidity, then checks the humidity value to determine whether to go on the trip, stay home, or check the temperature.
- If the temperature is "normal", the program decides to go on the trip.
- If the temperature is "high", the program decides to stay home.
- If the humidity is greater than 60, the program decides to stay home.
- If the outlook is "overcast", the program asks for the change of perception, then checks the value to determine whether to go on the trip or stay home.
- If the change of perception is less than 50, the program asks for the wind factor, then checks the value to determine whether to go on the trip or stay home.
- If the wind factor is "strong", the program decides to stay home.
- If the wind factor is "moderate", the program decides to go on the trip.
- If the outlook is "rain", the program asks for the visibility, then checks the value to determine whether to go on the trip or stay home.
- If the visibility is "normal", the program decides to go on the trip.
- If the visibility is "poor", the program decides to stay home.

Overall, the code appears to be a simple program for making decisions about going on a trip based on weather conditions and other factors. However, there are a few issues with the code that could be improved, such as:

- The program doesn't handle invalid inputs well - for example, if the user enters an invalid value for humidity, temperature, or wind factor, the program will not give an error message or ask the user to enter a valid value.
- The program could be more flexible in handling different weather conditions and other factors - for example, it could allow for more nuanced decisions based on factors like wind speed or precipitation level.
- The program uses a lot of if statements, which can make the code harder to read and maintain over time. It might be better to use switch statements or other constructs to make the code more concise and easier to understand.


##    Q3.cpp 


How to Use the FAST-NUCES Campus Information System

This program is designed to help students, faculty, and staff at FAST-NUCES access information related to the different campuses of the university. The program allows users to navigate through different menus and select the campus of their choice, after which they can select from a range of queries related to admission, academics, accounts, IT, and sports.

To use the program, follow these steps:

1. Open the program on your computer by double-clicking on the file name. The program will open in the console window.

2. The program will display a welcome message with a list of the different campuses of the university. Select the campus of your choice by entering the corresponding number (1 for Islamabad, 2 for Lahore, 3 for Karachi, 4 for Peshawar, 5 for Faisalabad) or press 0 to talk to an operator.

3. After selecting the campus, the program will display a list of menus related to admission, academics, accounts, IT, and sports. Select the menu that corresponds to your query by entering the corresponding number.

4. Depending on the menu selected, the program will display a further list of options. Select the option that corresponds to your query by entering the corresponding number.

5. After selecting the option, the program will prompt you to enter your query. Enter your query using the keyboard and press enter.

6. The program will display a message confirming that your query has been registered and that someone will get back to you soon.

7. If you want to ask another query, repeat steps 3 to 6. If you want to exit the program, press Ctrl+C or close the console window.

Note: The program is designed to handle a range of queries related to admission, academics, accounts, IT, and sports. If your query does not fit into any of these categories, please talk to an operator by pressing 0.


This program is designed to provide assistance to the students and faculty of the National University of Computer and Emerging Sciences (NUCES). The program provides a menu-based interface where the user can select their campus (Islamabad, Lahore, or Karachi) and then choose from a list of options to get assistance on admission-related queries, academics, accounts and fees, IT-related queries, and sports-related queries. The program also allows users to register their queries, which will be addressed by the university's representatives.

The program is written in C++ programming language and uses nested switch statements to handle user input. The program flow is structured in a way that makes it easy for the user to navigate through the menu and select their desired option.

To use the program, simply run the executable file and follow the on-screen instructions. The program is user-friendly and designed to provide a smooth experience to the users. In case of any difficulty, the user can contact the university's representatives by selecting the "talk to a representative" option, which will connect them to the university's help desk.

Note: This program is designed for educational purposes only and is not intended to be used as a real-life assistance program.

##    Q4.cpp 

This is a C++ program that calculates the roots of a quadratic equation. The user is prompted to input the values of a, b, and c coefficients of the equation. The program then calculates the discriminant (d) of the quadratic equation, and based on the value of the discriminant, it determines whether the roots are real or imaginary, and whether there is one root or two. The program outputs the results accordingly.

Here's how the program works:

1. The program prompts the user to enter the values of a, b, and c coefficients of the quadratic equation.
2. The program calculates the discriminant (d) of the quadratic equation using the formula: d = b^2 - 4ac.
3. The program checks the value of the discriminant:
   a. If d > 0, the program calculates the two roots of the equation using the quadratic formula: x = (-b + sqrt(d)) / 2a and x = (-b - sqrt(d)) / 2a, and outputs them.
   b. If d = 0, the program calculates the only real root of the equation using the formula: x = -b / 2a, and outputs it.
   c. If d < 0, the program calculates the real part and imaginary part of the two complex roots of the equation using the formulas: real part = -b / 2a and imaginary part = sqrt(-d) / 2a, and outputs them.

Overall, the program is correctly implemented and should be able to correctly calculate the roots of a quadratic equation. However, there are a few potential issues with the program that could cause incorrect results:

1. Order of operations: In the calculation of the roots, the program uses the formula (-b +/- sqrt(d)) / 2a. However, due to the order of operations in C++, this formula is equivalent to (-b +/- sqrt(d)) / (2a), not (-b + sqrt(d)) / 2a and (-b - sqrt(d)) / 2a. To fix this, the program should use parentheses to ensure that the correct operations are performed.

2. Floating point precision: The program uses floating point variables to represent the coefficients and roots of the equation. However, floating point arithmetic is not exact, and may introduce rounding errors that could cause the program to output incorrect results, especially for complex roots. To minimize this issue, the program should use a higher precision data type, such as a long double, for the calculations.

3. Handling of degenerate cases: The program assumes that the user will input valid coefficients for the quadratic equation, and does not handle degenerate cases, such as when a = 0 or when all the coefficients are 0. To make the program more robust, it should include error checking and handling for these cases.


##    Q5.cpp 


# Using C++ to create a two-function program that takes input from a user and displays the color.

This program is designed to take input from a user and display a color based on the number entered by the user. The program is written in C++ and contains two functions that help to achieve this goal. The first function takes input from the user and returns a string that represents the color. The second function is similar to the first function and takes input from the user, but returns a different color string.

## Requirements

- C++ Compiler

## Installation

1. Download and install a C++ compiler if you don't have one installed already. 

2. Clone the repository using the command below:

```
git clone https://github.com/Abdelrahman-Abdelgawad/Simple-Program-Using-CPP.git
```

## Usage

1. Compile the code using the C++ compiler.

2. Run the executable file.

3. Enter a number between 1 and 81 when prompted.

4. The program will display a color based on the number entered.

## Functionality of the code

1. The code imports two libraries `string` and `iostream` which are used to support the program.

2. Two functions named `one()` and `two()` are defined.

3. Both functions have a return type of string and are used to display colors based on the user input.

4. The functions declare three strings named `x`, `y`, and `z` that represent colors.

5. The user is prompted to enter a number between 1 and 81.

6. The program checks which range the entered number falls into and based on the range, the program returns a string representing a color.

7. The color is returned as output by the function.

## Functionality of each function

1. `one()` function

    - The function takes input from the user and checks which range the entered number falls into.

    - Based on the range, the function returns a string representing a color.

2. `two()` function

    - The function takes input from the user and checks which range the entered number falls into.

    - Based on the range, the function returns a string representing a color. 

## Example Usage

```c++
#include <iostream>
#include "functions.h"
using namespace std;
int main()
{
    cout<<"Function one output: "<<one()<<endl;
    cout<<"Function two output: "<<two()<<endl;
    return 0;
}
```

## Example Output

```bash
Enter a number between 1-81
50
Function one output: Grey Color
Enter a number between 1-81
27
Function two output: Blue Color
```

## Q6.cpp (A)

README - Data Package Pricing Calculator

This program calculates the pricing for internet data packages based on the user input. The user is required to enter their data usage in GBs and select their package type (A, B, or C) in capital letters. The program will then display the original price of the package and the data limit. If the user exceeds their data limit, the program will also calculate the additional data used and the price for that data.

To use the program, follow these steps:

1. Open a C++ IDE or a text editor to create a new file.
2. Copy and paste the provided code into the new file.
3. Save the file with a relevant name, such as "data_package_pricing.cpp".
4. Compile and run the program.
5. The program will greet the user with a welcome message and prompt them to enter their data usage in GBs.
6. Enter the data usage in GBs and press enter.
7. The program will then prompt the user to enter their package type (A, B, or C) in capital letters.
8. Enter the package type and press enter.
9. The program will display the original price of the package and the data limit.
10. If the user has exceeded their data limit, the program will also display the additional data used and the price for that data.
11. The program will then terminate.

Note: The provided code only includes Part 6a of the program. If you want to use the full program, please refer to the complete code.

## Q6.cpp  (B)




This is a C++ program that takes input from the user for the amount of data used in Gbs and the package type (A, B, or C) and calculates the total price for the internet usage. The program also provides additional information about the package types.

Here's how the program works:
- First, the program greets the user and asks for input for the amount of data used in Gbs and the package type.
- Depending on the package type entered by the user, the program provides additional information about the package and calculates the total price for the internet usage.
- If the package type is A, the program checks if the data used is more than 1.00 Gbs and calculates the additional price accordingly.
- If the package type is B, the program checks if the data used is more than 2.5 Gbs and calculates the additional price accordingly.
- If the package type is C, the program informs the user that the package has unlimited data and provides information on the cost savings if Package A or Package B were chosen.
- Finally, the program displays the total price for the internet usage.

Note: The program assumes that the user enters a valid package type (A, B, or C) and a valid amount of data used in Gbs. If the user enters invalid input, the program may produce unexpected results.

Overall, the program is well-structured and easy to follow. However, it could be improved by adding error handling and input validation to ensure that the user enters valid input. Additionally, the program could be extended to include more package types or additional features such as discounts or promotions.


## Q7.cpp


This program simulates an ordering system for a fast-food restaurant. The user is prompted to choose between three options: Burgers, Pizzas, and Sandwiches. Then, the user is asked to select a specific item from the chosen category and the quantity they want to order. Finally, the program displays the total price of the order.

The program uses a switch statement to handle the user's input and call the appropriate function to calculate the price. The price function takes two arguments, the number of items ordered and the unit price, and displays the total price.

The program has a few issues that need to be addressed. Firstly, the price function is declared with a return type of int, but it doesn't return anything. This needs to be fixed. Secondly, the price function is called without being defined, causing a compilation error. Finally, there are some formatting issues with the output, such as the use of double backslashes and inconsistent spacing.

Overall, the program could be improved by using better variable names, providing clearer instructions to the user, and adding error handling for invalid input.

##  Q8.cpp

This program appears to be a currency exchange program that converts an amount in Pakistani Rupees (Pkr) into various denominations of banknotes based on user input for their preferred banknote.

The program prompts the user to enter an amount in Pkr and their preferred note denomination, which is then passed to the `h()` function. This function calculates the number of banknotes of each denomination required to make up the requested amount based on the user's preferred banknote.

The function then outputs the number of each denomination of banknote required to make up the amount entered by the user.

There are some issues with the program, including the fact that the variable `z` is used to store the user's preferred banknote denomination, but it is also used as a temporary variable to store the difference between the number of banknotes of the preferred denomination and 200, which is confusing.

Also, there is no error checking for invalid input, such as entering a negative amount or a banknote denomination that is not supported.

Finally, the function should have a return type since it is returning an integer value. The `int` keyword should be added before the function name `h()` to specify its return type.

In summary, this program needs to be improved in terms of variable naming, input validation, and error handling to make it more robust and user-friendly.


