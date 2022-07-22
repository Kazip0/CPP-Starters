/*

A void pointer is a pointer that has no associated data type with it. A void 
pointer can hold address of any type and can be typcasted to any type.

A void pointer cannot be directly dereferenced

*/

#include<iostream>
using namespace std;

void point(void *ptr, char type)
// void point is the function and void *ptr is the pointer

// since void pointer cannot be dereferenced directly we used a character variable here to 
// check whether the pointer stores an integer or a character
{
    switch(type)
    {
        case 'i': cout << *((int*)ptr) << endl;
        //(int*)ptr prints the address of integer pointer
        
        // dereferencing integer pointer
        // *((int*)ptr) prints the value of integer pointer
        
        break;
        case 'c': cout << *((char*)ptr) << endl;
        break;
    }
}

 
 int main ()
 {
    int number = 5;
    char letter = 'a';
    
    point(&number, 'i');
    point(&letter, 'c');
 }






