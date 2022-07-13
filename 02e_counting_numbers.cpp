// count the number of digits in a number

#include<iostream>
using namespace std;

int main()
{
    int num, counter = 0 ;
    cout << "Enter the number: ";
    cin >> num;
    
    if (num == 0 )
    {
        cout << "Invalid Number Zero";
    }
    
    else
    {
        if (num < 0)
        {
            num = num *(-1);
        }
        
        while(num>0)
        {
            num = num / 10;
            counter ++;
        }
        
    }
    cout << "Number of digits in a number is: " << counter;
    
    
}
