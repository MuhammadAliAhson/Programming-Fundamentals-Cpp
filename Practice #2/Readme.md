# README file for Practice #2 Q1 C++ code

This code takes the diameter of a cycle wheel and its speed as inputs and calculates the revolutions per minute (RPM) of the wheel. Here are the steps to run and understand the code:

## Step 1

Include the necessary libraries `iostream` and `iomanip`. The `iostream` library allows input and output operations, and the `iomanip` library is used for manipulating the output format.

```c++
#include <iostream>
#include <iomanip>
```

## Step 2

Declare the function `txt()` before the `main()` function as it is being called in the `main()` function.

```c++
int txt();
```

## Step 3

Define the `main()` function, where we will call the `txt()` function to perform the calculations. 

```c++
int main(){
    txt();
    return 0; 
}
```

## Step 4

Define the `txt()` function to take the inputs, calculate the circumference, and finally calculate the RPM. 

```c++
int txt(){
    float a,b,c,d,e;
    float const pi=3.1415;
    // Taking Diameter
    cout<<"Diameter of the wheel: "<<endl;
    cin>>a;
    // Taking Speed
    cout<<"Speed of the cycle: "<<endl;
    cin>>b;
    // Converting into speed per minute
    c=(b*1000)/60;
    // Calculating the circumference
    d=a*pi;
    cout<<"Circumference of the cycle: "<<d<<endl;
    // Calculating revolutions per minute
    e=c/d;
    cout<<"Revolution per minute: "<<setprecision(0)<<fixed<<e;
    return e;
}
```

## Step 5

Compile and run the code. The `txt()` function will take the diameter and speed of the cycle as inputs, calculate the circumference, and then the RPM of the wheel. The result will be printed on the console. 

### Advantages and Disadvantages

One advantage of using a function like `txt()` is that it makes the code more modular and easier to understand. It separates the input and calculation steps, making the code easier to read and follow. It also allows the same calculations to be reused multiple times within the code.

However, since the `txt()` function does not take any arguments, it is only useful for performing the same calculation every time it is called. If you wanted to calculate the RPM of a wheel with a different diameter or speed, you would have to modify the code. This may not be a problem in some cases, but in more complex programs, it can become difficult to manage.



## Practice #2 Q2 C++ code


### Overview

This program is designed to calculate the length of a train based on the time it takes to pass a stationary observer and the speeds of a passenger's train and a good's train. The program is divided into two functions: `main()` and `length()`.

### Part 1

In `Part 1`, the `txt()` function is defined to calculate the revolutions per minute (RPM) of a bicycle wheel. The function first prompts the user to enter the diameter of the wheel and the speed of the cycle. Then, it calculates the circumference of the wheel and the speed per minute. Finally, the RPM is calculated by dividing the speed per minute by the circumference of the wheel. The calculated RPM is returned as a float.

### Part 2

In `Part 2`, the `length()` function is defined to calculate the length of a train. The function first calculates the speeds of a passenger's train and a good's train by converting their speeds from kilometers per hour (km/h) to meters per second (m/s). Then, the two speeds are added together, as per the Doppler effect in physics. The user is prompted to enter the time in seconds it takes for the train to pass by. The distance formula is then used to calculate the length of the train in meters. The calculated length is returned as a float.

### Usage

To use this program, simply run the executable file. The program will prompt the user to enter the required inputs and will output the calculated RPM or length of the train.

### Conclusion

This program can be used to calculate the RPM of a bicycle wheel or the length of a train. It uses simple formulas from physics and math to perform the calculations.




## Practice #2 Q3 C++ code



This program consists of three parts, each solving a different problem using C++ programming language. Here's a brief overview of each part:

PART 1:
This program calculates the revolution per minute of a cycle wheel based on its diameter and speed. The user is asked to enter the diameter of the wheel and speed of the cycle, which are then used to calculate the circumference and revolution per minute of the wheel. The function returns the calculated value of revolution per minute.

PART 2:
This program calculates the length of a train based on its speed and time taken to pass by an observer. The user is prompted to enter the time taken in seconds and the speeds of two trains, one passenger and one goods train, are provided in kilometers per hour. These speeds are then converted to meters per second and added up to obtain the total speed of the trains. The distance formula is used to calculate the length of the train, which is then displayed as output.

PART 3:
This program demonstrates the use of Taylor series to approximate the value of sin(x) for a given angle in degrees. The user is prompted to enter the angle in degrees, which is then converted to radians. The program then calculates the value of sin(x) using the first five terms of the Taylor series and compares it with the actual value of sin(x) using the built-in sin() function. The difference between the two values is displayed along with the first five terms of the series.

Differences between the three programs:

PART 1:
This program takes input from the user and returns a value, making it useful as a function in a larger program. It is straightforward and easy to understand, with clear comments to explain each step of the process. However, it only solves a specific problem related to cycle wheels and cannot be used for other calculations.

PART 2:
This program also takes input from the user and returns a value, making it useful as a function in a larger program. It uses basic physics concepts to calculate the length of a train and can be easily modified to solve similar problems. However, it assumes that the speeds of the trains are constant and does not take into account any acceleration or deceleration.

PART 3:
This program uses mathematical concepts to approximate the value of sin(x) using the Taylor series. It demonstrates the use of functions to calculate different parts of the series and provides clear output for each step. However, it only approximates the value of sin(x) and may not be as accurate as the built-in sin() function for large values of x.

Overall, these programs demonstrate the versatility of C++ programming and how it can be used to solve a variety of problems in different fields.


## Practice #2 Q4 C++ code


Overall, your code seems to be functioning properly for the given problems. However, there are some suggestions that I would like to make to improve the code's readability, efficiency and reusability.

1. Use Meaningful Variable Names: 
Variables with meaningful names help others to understand the purpose and use of the variable. For example, instead of using variable names like 'a', 'b', and 'c', use names that reflect the variable's use, like 'passengerTrainSpeed' or 'timeInMinutes'.

2. Break down Complex Calculations:
It can be challenging for others to understand complex calculations, which may lead to errors. Therefore, it is better to break down the calculation into smaller parts or functions. For instance, in the 'length' function, you can break down the distance calculation and speed conversion into separate functions.

3. Use Proper Formatting:
Code formatting is essential as it helps others understand the code and its structure better. Therefore, it is a good practice to use consistent formatting for your code. Use proper indentation, whitespace, and commenting.

4. Use Constants:
Constants help to improve the code's readability, and they can be reused multiple times throughout the code without having to change each instance manually. For example, in the 'main' function, you can define the value of 'pi' as a constant.

5. Add Error Handling:
It is always a good idea to add error handling to your code. In case of user input errors or incorrect inputs, your code should be able to handle them gracefully. You can use conditional statements or exception handling to handle these errors.



## Practice #2 Q5 C++ code


The code in Part 5 appears to implement a simple encryption and decryption algorithm for a 16-bit input value. 

The program takes an unsigned integer as input and extracts the customer ID and account number using bitwise operators. It then encrypts the input value using a fixed value of c=5 and v=233, and finally decrypts the encrypted value using the same values of c and v.

The program includes input validation to ensure that the input value is within the range of a 16-bit unsigned integer (0 to 65535).

Overall, the code appears to function correctly and achieve its intended purpose. However, it should be noted that this encryption scheme is not very secure and could easily be cracked by an attacker with knowledge of the algorithm. For secure encryption, it is recommended to use a widely accepted encryption standard such as AES.
