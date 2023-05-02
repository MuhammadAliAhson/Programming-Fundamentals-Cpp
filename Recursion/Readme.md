## Header

## Readme

This program is written in C++ and contains five functions. Here's a brief overview of each function:

### nrows(int num)
This function prints `num` number of asterisks (*) in a single row. It is a recursive function that calls itself `num` times.

### pattern1(int num)
This function prints a pattern of asterisks (*) in decreasing order of rows. It calls the `nrows()` function to print each row, and then calls itself recursively with `num-1` until `num` becomes 0.

### numrows(int i)
This function prints `i` number of asterisks (*) in a single row. It is a recursive function that calls itself `i` times.

### pattern2(int num, int i)
This function prints a pattern of asterisks (*) in increasing order of rows. It calls the `numrows()` function to print each row with `i` number of asterisks, and then calls itself recursively with `num-1` and `i+1` until `num` becomes 0.

### pattern3(int num)
This function prints a pattern of asterisks (*) which consists of pattern1 and pattern2 with an additional row of `num` asterisks in between. It calls the `pattern1()` function to print the decreasing rows of asterisks, then calls the `nrows()` function to print a single row of `num` asterisks, and finally calls the `pattern2()` function to print the increasing rows of asterisks.

### getCharCount(const char* str1, char c)
This function takes in a string `str1` and a character `c` and returns the number of times the character `c` appears in the string `str1`. It is a recursive function that calls itself to check each character in the string.

### getUniCharCount1(const char* ptr, const char* current, int count)
This function is a helper function for `getUniCharCount()` and takes in a string `ptr`, a string `current`, and an integer `count`. It checks each character in the string `ptr` and counts the number of unique characters. If a character appears only once in the string, it increments the `count` variable. This function is called recursively.

### getUniCharCount(const char* ptr, const char* current)
This function takes in a string `ptr` and a string `current` and returns the number of unique characters in the string `ptr`. It calls the `getUniCharCount1()` function to count the number of unique characters in the string `ptr`.


## ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

##  Shape1.cpp

This program is written in C++ and contains two functions that print a diamond pattern of asterisks (*). Here's a brief overview of each function:

### star(int j, int g, int i)
This function prints a single row of asterisks (*) or spaces based on the input parameters. It is a recursive function that calls itself until `i` becomes greater than `g`.

### pattern(int x, int h)
This function prints a diamond pattern of asterisks (*) with `x` being the number of rows in the diamond. It calls the `star()` function to print each row of asterisks, and then calls itself recursively with `h+1` until `h` becomes greater than `x`.

The resulting pattern has a pointy shape in the middle with two corners pointing outwards, resembling a diamond shape. The diamond is symmetric with respect to the vertical axis.
## ----------------------------------------------------------------------------------------------------------------------------------------------------------------------

##  Shape2.cpp



This program is written in C++ and contains three functions that print a pattern of asterisks (*) and spaces. Here's a brief overview of each function:

### star(int j, int g, int i)
This function prints a single row of asterisks (*) or spaces based on the input parameters. It is a recursive function that calls itself until `i` becomes greater than `g`.

### space(int n)
This function prints `n` number of spaces. It is a recursive function that calls itself until `n` becomes zero.

### pattern(int x, int h)
This function prints a pattern of asterisks (*) and spaces, with `x` being the number of rows in the pattern. It calls the `star()` function to print each row of asterisks for the top half of the pattern, and the `space()` function to print the bottom half of the pattern. Then it calls itself recursively with `h+1` until `h` becomes equal to `x-1`.

The resulting pattern has a diamond shape with two points at the top and bottom, and a wider middle section. The pattern is symmetric with respect to both the vertical and horizontal axis.
