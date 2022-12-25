#include <cs50.h> // Had issues with this not being recognized https://github.com/cs50/libcs50/issues/189  (will use clang instead of make)
#include <stdio.h>

int main(void)
{
    int x = get_int("x: "); // prompt the user for two variables, x and y
    int y = get_int("y: "); // These shorter variable names are fine in this case, since we’re just using them as numbers without any other meaning.
   // int z = x + y; // use a third variable, z (I don't understand why z variable? Why is it needed? I see what it does. It doesnt change the output, and since we don't need to reuse the variable elsewhere in the program we can ommit the z variable.) Lets revert (comment it out)!
   // printf("%i\n", x + y); // print out the sum, x + y, with a placeholder for integers, %i
   // printf("%i\n", z);  // This version gives us a reusable variable, but we might not intend on using the sum again in our program, so it might not necessarily be better.

/*
We can compile and run our program with:
$ make calculator
$ ./calculator
x: 1
y: 1
2

This didn't work for me - see below

 Lecture_1_-_C git:(main) ✗ make calculator
cc     calculator.c   -o calculator
Undefined symbols for architecture arm64:
  "_get_int", referenced from:
      _main in calculator-799d33.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [calculator] Error 1

Solution - https://github.com/cs50/libcs50/issues/189 

I was able to get mine working on my Mac with Visual Studio Code as follow:
Assuming you have Visual Studio already installed and with all C/C++ extensions required for compiling and running C codes,
1a. Download the CS50 Library from https://github.com/cs50/libcs50/releases

1b. Extract/unzip the downloaded zipped folder

2a. Open Terminal and change directory to the unzipped CS50 library folder.
For example if folder is on desktop and the folder is named libcs50-10.1.0 , then terminal command should be:
cd desktop/libcs50-10.1.0

2b. Still in terminal after changing directory, then run the command:
sudo make install

3a. After installation, close terminal, go to visual studio and write your C program
#include <cs50.h>

3b. Link cs50 when compiling your code with clang. Example if your file name is hello.c
clang hello.c -o hello -lcs50

run your code


➜  Lecture_1_-_C git:(main) ✗ clang calculator.c -o calculator -lcs50
➜  Lecture_1_-_C git:(main) ✗ ll
total 80
-rwxr-xr-x  1 rob  staff    33K 25 Dec 15:41 calculator
-rw-r--r--  1 rob  staff   1.7K 25 Dec 15:40 calculator.c
➜  Lecture_1_-_C git:(main) ✗ ./calculator 
x: 5
y: 4
9

Bingo!


➜  Lecture_1_-_C git:(main) ✗ ./calculator
x: 2000000000
y: 2000000000
-294967296 // It turns out that data types each use a fixed number of bits to store their values. An int in our virtual environment uses 32 bits, which can only contain about four billion (232) different values. But since integers can be positive or negative, the highest positive value for an int can only be about two billion, with a lowest negative value of about negative two billion.

We can change our program to store and display the result as a long, with more bits:
*/
// printf("%li\n", x + y);
//REVERT
 printf("%i\n", x + y);

/*
➜  Lecture_1_-_C git:(main) ✗ ./calculator
x: 2000000000
y: 2000000000
4000000000
*/

// we could still have a value that’s too large, which is a general problem we’ll discuss again later.
}