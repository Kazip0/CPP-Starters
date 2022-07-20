/* Inline Functions in C++

Inline functions are used to reduce the function call. When one function is being 
called multiple times in the program it increases the execution time, so inline 
function is used to reduce time and increase program efficiency. 

If the inline function is being used when the function is called, the inline function expands 
the whole function code at the point of a function call, instead of running the 
function. 
Inline functions are considered to be used when the function is small 
otherwise it will not perform well. Inline is not recommended when static variables 
are being used in the function.


don't use inline function in case of recursive function and static variables
*/

#include<iostream>
using namespace std;

inline int product(int a, int b)
{
    return a*b;
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

