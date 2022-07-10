// wap to check whether the program is a scalene, isoceles or equileteral traingle

#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout << "Enter the 3 sides of a triangle: ";
    cin >> a >> b >> c;
    
    if(a==b && b==c)
    {
        cout <<"The triangle is equileteral"<< endl;
        
    }
   
    else if( a!=b && b!=c && a!=c)
    {
        cout << "It is an scalene triangle" << endl;
    }
    else
    {
        cout << "It is an isoceles traingle" << endl;
    }
    
    /* or
    else
    {
        if( a!=b && b!=c && a!=c)
        {
            cout << "It is an scalene triangle" << endl;
        }
        else
        {
            cout << "It is an isoceles traingle" << endl;
        }
    }
    */
}


