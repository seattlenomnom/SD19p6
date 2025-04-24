/* sd19p6.c++
 * sourcefile for sd19p6
 *
 * DESCRIPTION:
 * sd19p6 is a program that demonstrates function overloading in a C++ program.
 * It is taken from, Dmitrovic, Slobodan, Modern C++ for Complete Beginners,
 * Apress, 2020. Chapter 19.6 Function overloading.
 *
 * Notes:
 *
 * Wed 23 Apr 2025 08:59:38 PM PDT
 * Project set up on local host, repo set up on GitHub.
 * GitHub account seattlenomnom.
 *
*/

#include <iostream>

void myprint(char);
void myprint(int);
void myprint(double);

int main() {
    myprint('c');
    myprint(123);
    myprint(456.789);
}


void myprint(char param){
    std::cout << "Printing a character: " << param << '\n';
}


void myprint(int param){
    std::cout << "Printing an integer: " << param << '\n';
}


void myprint(double param){
    std::cout << "Printing a double: " << param << '\n';
}

