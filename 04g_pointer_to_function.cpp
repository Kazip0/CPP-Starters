/* Pointers

A pointer to a function points to the address of the executable code of the function. 
You can use pointers to call functions and to pass functions as arguments to other functions. 
You cannot perform pointer arithmetic on pointers to functions.
*/

#include<iostream>
using namespace std;
 
 void printNumber(int *num)             // integer pointer that receives integer variable
 {
    cout << *num << endl;               //dereferencing to get the value of num
 }
 
 void printLetter(char *word)           // character pointer that receives character variable
 {
    cout << *word << endl;
 }
 
 int main ()
 {
    int number = 5;
    char letter = 'a';
    printNumber(&number);               // pass the address of number variable
    printLetter(&letter);               
 }




