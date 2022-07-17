// prime number check with function

// prime number check

#include<iostream>
using namespace std;

int Prime (int number)
{
    bool isPrime = true;
    for (int i=2; i < number ; i ++)       
    
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
    return isPrime;
}

int main()
{
    int number, i;
    bool primecheck;                       // by default it is 0 i.e. false
    cout << "Enter the number: ";
    cin >> number;
    
    
    
    primecheck = Prime(number);
    
    if(primecheck)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
    
    
}


