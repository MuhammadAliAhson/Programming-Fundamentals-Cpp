# README


##    Practice #1 Q9   (Sales Figures Program)

# Step-by-Step Guide to the Code

The code is written in C++ and consists of a single `main` function. It prints out some formatted output to the console.

Here is a step-by-step guide to the code:

1. The code includes two header files: `iostream` and `iomanip`. The `iostream` header file is used for input/output operations, while the `iomanip` header file is used for formatting the output.

```c++
#include <iostream>
#include <iomanip>
```

2. The `main` function is declared with a return type of `int`.

```c++
int main() {
  // code here
  return 0;
}
```

3. Four double variables `a`, `b`, `c`, and `d` are declared and initialized with some values.

```c++
double a=34.789;
double b=7.0;
double c=5.789e+12;
double d=67;
```

4. The `cout` function is used to output the value of `a` with a field width of 9 and a precision of 4 decimal places using the `setw` and `setprecision` functions.

```c++
cout<<setw(9)<<setprecision(4)<<a<<endl;
```

5. The `cout` function is used again to output the value of `b` with a field width of 5 and a precision of 4 decimal places using the `setw` and `setprecision` functions.

```c++
cout<<setw(5)<<setprecision(4)<<b<<endl;
```

6. The `cout` function is used to output the value of `c` in fixed-point notation with no field width or precision specified.

```c++
cout<<fixed<<c<<endl;
```

7. The `cout` function is used to output the value of `d` with a field width of 7 and left alignment using the `setw` and `left` functions.

```c++
cout<<left<<setw(7)<<d;
```

8. The `main` function ends with a `return` statement that returns 0.

```c++
return 0;
```

Overall, the code is a simple example of how to format output using C++ and the `iomanip` library. It demonstrates how to use `setw`, `setprecision`, `fixed`, and `left` to format numbers in different ways.













##    Practice #1 Q10    (Sales Figures Program)

This program takes input for sales figures for 3 days and calculates the total sales.

### Steps
1. Declare three integer variables `a`, `b`, and `c` to store the sales figures for 3 days.
2. Collect input from the user for the sales figures for each day using `cout` and `cin` statements.
3. Display the sales figures and the total sales using `cout` statements.
4. End the program by returning 0.

### Input
The user will be prompted to input the sales figures for each day. 

### Output
The program will output the sales figures for each day and the total sales. 

### Example
```
Enter the sales for day 1 : 
1000
Enter the sales for day 2 : 
1500
Enter the sales for day 3 : 
2000

Sales Figures
-------------
Day 1 :  1000
Day 2 :  1500
Day 3 :  2000
Total :  4500
```


##    Practice #1 Q11    (Sales Figures Program)


#  Displaying Numbers and Their Properties

This program displays the properties of three numbers entered by the user. The properties include the number itself, its square, cube, and half.

## Instructions

1. The program starts by asking the user to enter three numbers.
2. Enter the first number and press enter.
3. Enter the second number and press enter.
4. Enter the third number and press enter.
5. The program will display a table with the properties of the three numbers.
6. The table will have four columns - "Variables", "Number", "Square", "Cube", "Half".
7. The first row of the table will display the properties of the first number.
8. The second row of the table will display the properties of the second number.
9. The third row of the table will display the properties of the third number.
10. The "Variables" column will display the letters "a", "b", and "c" respectively.
11. The "Number" column will display the entered number.
12. The "Square" column will display the square of the number.
13. The "Cube" column will display the cube of the number.
14. The "Half" column will display the half of the number.
15. The program will end after displaying the table.



##    Practice #1 Q12   (Sales Figures Program)

## Description
This program displays three different shapes using special characters. The shapes are:
1. A large letter '@' in the shape of a diamond.
2. A pyramid made of '#' characters.
3. A dollar sign made of increasing numbers of '$' characters.

## Steps
1. The first shape is a diamond made of '@' characters. The diamond is displayed using `cout` and `setw` to align the characters. 
2. The second shape is a pyramid made of '#' characters. The pyramid is displayed using `cout` and `setw` to align the characters.
3. The third shape is a dollar sign made of increasing numbers of '$' characters. The dollar sign is displayed using `cout` and `setw` to align the characters. 

## Sample Output

```
@@@@@@@@@@

@        @

  @    @

    @@  

  @    @

@        @

@@@@@@@@@@

##################
##            ##
###          ###
####        ####
#####      #####
######    ######
#######  #######
################
########      ##
##            ##
                  
     $           
    $$           
   $$$$          
  $$$$$$         
 $$$$$$$$        
$$$$$$$$$$       
  $$$$$$$$       
   $$$$$        
    $$         
     $
```





