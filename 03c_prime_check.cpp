// prime number check

#include<iostream>
using namespace std;


int main()
{
    int number, i;
    bool isPrime = true, primecheck;                       // by default it is 0 i.e. false
    cout << isPrime << endl;
    cout << "Enter the number: ";
    cin >> number;
    
    for (i=2; i < number ; i ++)        
    
    // intialising i from 2 as modulus operator 
    //as modulus division with  0 will give ZeroDIvisionError 
    // and modulus division with 1 will give 0
    
    {
        if(number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime)
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
    
    
    
}

