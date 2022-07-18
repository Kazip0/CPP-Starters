// function overloading 

// a function having the same name and performing more than one operations is called
// function overloading

#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

double sum(double a, double b)
{
    return a+b;
}

float sum(float a, float b, float c)
{
    return a+b+c;
}

int main()
{
    cout << sum(3,2) << endl;
    cout << sum(3.3, 7.8) << endl;
    cout << sum(7.2,12.2,5.3) << endl;
    
    
}



