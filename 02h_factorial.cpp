// FACTORIAL of a Number

#include<iostream>
using namespace std;

int main()
{
    int fact=1, num, i;
    
    cout << "Enter the Number: ";
    cin >> num;
    
    for(i=num; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << "The Factorial of " << num << " is " << fact;
    
}

