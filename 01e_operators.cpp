// Operators used in C++

#include<iostream>
using namespace std;

int main()
{
    // +,-,*,/,%
    
    cout << 5/2 << endl;        // will return integers value as result
    
    cout << 5.0/2 << endl;      
    // will return float value as result as one of the number is assigned
    // as a floating point integers
    
    float a=5, b=2;
    cout << a/b << endl;                
    // will return float values as both the variables
    // are floating point integers
    
    cout << "Addition is: " << 5+2 << endl;
    cout << "Subtraction is: "<< 5-1 << endl;
    cout << "Remainder is: " << 5%2 << endl;
    
    // ++, -- (increment and decrement operator)
    int counter =7;
    cout << "pre-incrememnt counter is: " << ++counter << endl;                      //pre-incrememnt
    cout << "pre-incrememnt counter is: " << counter << endl;   
    cout << "post-increment counter is: " << counter++ << endl;                      //post-increment
    cout << "post-increment counter is: " << counter << endl;
    
    cout << endl;
    
    counter =7;
    cout << "pre-decrement counter is: " << --counter << endl;                      //pre-decrement
    cout << "pre-decrement counter is: " << counter << endl;   
    cout << "post-decrement counter is: " << counter-- << endl;                      //post-decrement
    cout << "post-decrement counter is: " << counter << endl;
    
    // relational operators ( < , > , <= , >= , == , !=)
    int m =6, n=6;
    cout << (m >= n) << endl;       // will return either 1(True) or 0(False)
    
    
    // logical operators (&&, ||)
    if( m == n ||  a == b)
    {
        cout << "Yes" << endl;
    }
    else if ( m!=n && a!=b )
    {
        cout << "Nope"<< endl;
    }
    else
    {
        cout << "Appraoch is wrong" << endl;
    }
    // operators of assignment
    // + , += , *= , /= , %= 
    int x = 5;
    x -= 7;                 // x = x - 7
    cout << x << endl;
    
}


