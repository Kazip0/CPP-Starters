// Enter Password or guess game
#include<iostream>
using namespace std;

int main()
{
    int pinC = 234234, pin=0, counter=0;
    
    while (pin != pinC && counter < 3)   
    {
        cout << "Enter the 6 digit pin number: ";
        cin >> pin;
        counter ++;
    }
    if (counter >= 3)
    {
        cout << "Guesses are over";
    }
    if (pin == pinC)
    {
        cout << "Correct Pin";
    }
}
