/* Typecasting
typecasting means the conversion of a variable type to another. In other words, 
making an integer type variable to act like another


*/


#include<iostream>
#include<typeinfo>
using namespace std;
int g = 12;

int main()
{
    
    // ***************Built-in data types***************
    int g=11;
    cout << "Enter the value of g: ";
    cin >> g;
    cout << "Local Variable g is: " << g << endl;
    cout << "Global variable of g is: " << ::g << endl;
    
    
    //************float, long, double and long double literals *************
    cout << "The sizeof 34.4 is: " << sizeof(34.4) << endl;
    cout << "The sizeof 34.4f is: " << sizeof(34.4f) << endl;
    cout << "The sizeof 34.4F is: " << sizeof(34.4F) << endl;
    cout << "The sizeof 34.4l is: " << sizeof(34.4l) << endl;
    cout << "The sizeof 34.4L is: " << sizeof(34.4L) << endl;
    
    
    int num1 = 4;
    float num2;
    num2 = (float) num1;
    cout << num2 << endl;
    cout << typeid(num1).name() << endl;        //checking the data type of the variable
    cout << typeid(num2).name() << endl;
    
    //In the above syntax, the value of num1 has promoted from int to float 
    // directly which is also known as standard conversion.
    
    int a = 15 ;
    char b = 'c' ;
    a = a + b ;  // implicitly conversion of a.
    float z = a + 3.0 ; // implicitly conversion of z
    cout << " The Value of a is = " << a << endl
    << " The Value of b is = " << b << endl
    << " The Value of z is = " << z << endl << endl ;
    
    double d = 52.20 ;                  // Explicit conversion from double to int
    int total = (int)d + 10 ;           // Explicit conversion from double to float
    float total1 = (float)d + 2.0 ;
    cout << " The total value of a after conversion is = " << total  ;
    cout << " \n The total value of a after conversion is = " << total1 ;
    return 0 ;
    
    
    // Reference variables    : check the beginnner projects
    
    
}

