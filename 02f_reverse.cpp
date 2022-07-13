#include<iostream>
using namespace std;

int main()
{
    int num1, num, rev=0;
    cout << "Enter the number: ";
    cin >> num;
    num1 = num;
    while(num > 0)
    {
        rev = rev*10 + num%10;
        num = num/10;
        
    }
    cout << "Reverse of a number "<< num1 <<" is: " << rev;
}

