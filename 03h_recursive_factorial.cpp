#include<iostream>
using namespace std;

int recursive_fact (int a)
{    
    if(a>1)
        return (a * recursive_fact(a-1) ); 
    else
        return 1;
}
/*
return 0: A return 0 means that the program will execute successfully and did what it was intended to do.
return 1: A return 1 means that there is some error while executing the program and it is not performing 
what it was intended to do.
*/


int main()
{
    int num1=5;
    cout << "Factorial is: " << recursive_fact(num1);
}


