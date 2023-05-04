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
