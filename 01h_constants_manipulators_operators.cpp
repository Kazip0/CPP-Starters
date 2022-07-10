// constants, manipulato0rs and operators precedence

/*
Constant command/function fixes the Data values to stay the same every time 
a program is executed

Manipulators are operators used in C++ for formatting output. The data is 
manipulated by the programmer’s choice of display.


Operator precedence
The order in which the mathematical operation is conducted in the program is called
operator precedence i.e. BODMAS

link for checking the operator precedence
https://en.cppreference.com/w/cpp/language/operator_precedence
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{

  //making a constant variable i.e. it will become a read only variable after declaration

    const int a = 56;
    cout << "The value of a is: " << a << endl;
  //a = 12;           a constant variable cannot be reassigned any further
  //cout << "New value of a is: " << a;



  // using setw manipulator, which we have accessed from the iomanip header file
    int b = 35, c = 732, d = 8921;
    
    // without using manipulators the numbers will be left justified
    cout << "Value of b without setw is: " << b << endl;
    cout << "Value of c without setw is: " << c << endl;
    cout << "Value of d without setw is: " << d << endl;
    
    // using manipulators the numbers can also be right justified
    cout << "Value of b with setw is: " << setw(4) << b << endl;
    cout << "Value of c with setw is: " << setw(4) << c << endl;
    cout << "Value of d with setw is: " << setw(4) << d << endl;

    // next if else statement, for, do, while loop, then switch-case
    // check the codes in the c++ beginner projects


}




