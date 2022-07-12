// swap 2 variables

#include<iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter the 2 numbers:";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    
    cout <<"After Reversing: "<< a << " " << b;
    
}
