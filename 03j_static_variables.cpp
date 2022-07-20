
#include<iostream>
using namespace std;

int product(int a, int b)
{
    static int c = 0;           // This executes only once
    /* static variables are initialised only once and the next time it won't take 
    the same initialised value. 
    
    Here, initially the value of c is 0
    in the next line c = c + 1, 
    i.e. value of c = 0 + 1
    
    the next time when the fucntion runs again, c = 0 line of code will not run
    instead the next line c = c + 1 will be executed
    i.e. value of c = 1 + 1
    
    */
    c = c + 1;                  // Next time this function is run, the value of c will be retained
    return a*b + c;
}

int main()
{
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    return 0;    
    
}

