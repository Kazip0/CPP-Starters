// bmi calculator

#include<iostream>
using namespace std;

int main()
{
    float weight, height, bmi;
    cout << "Enter Weight: ";
    cin >> weight;
    
    cout << "Enter Height: ";
    cin >> height;
    
    bmi = weight/(height*height);
    
    if(bmi < 18.5)
    {
        cout <<"Underweight"<< endl;
    }
    else if(bmi > 25)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Normal weight" << endl;
    }
    
    cout << "Your Body Mass Index is:" << bmi;
}

