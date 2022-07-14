// function
/*

Both int main() and int main(void) the two of them are different in C but both are same in C++.

The void main() indicates that the main() function will not return any value, 

int main() indicates that the main() can 'return' integer type data. 


In that situation, the void main() will not work. So it is good practice to use 
int main() over the void main().
*/

#include<iostream>
using namespace std;

/* 
Instead of defining the function somewhere else, declaring and defining in the 
same place can also make the function work

void fun1()                 // function declaration & definition
{
    cout <<"Hemlo World \n";
}

*/

void fun1();                // function declaration

// void main()              
// will cause error as a function is passed in the programme
// and void main don't allow the program to access functions

int main()
{
    fun1();
    fun1();
    fun1();
    
    
}

void fun1()                 // function definition
{
    cout <<"Hemlo World \n";
}



