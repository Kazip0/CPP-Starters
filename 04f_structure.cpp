#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;                       
// using the typedef function we have renamed the structure
// employee name as ep

// Unions are similar to structures but they provide better memory management then structures.  
// Unions use shared memory so only 1 variable can be used at a time.

// We can only use 1 variable at a time otherwise the compiler will give us a garbage value
// The compiler chooses the data type which has maximum memory for the allocation.
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};



int main()
{
    // struct employee harry;       will cause an error as the structure name is now ep
    ep harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    
    
    union money m1;
    m1.rice = 34;
    // We can only use 1 variable at a time otherwise the compiler will give us a garbage value
    // m1.car = 'c';
    cout<< m1.rice << endl;
    // cout << m1.car << endl;
    
    // in this code, the strucuture will take 8 bytes of memory and union will take 
    // minimum of 1 byte and maximum of 4 bytes of memory
    
/*
Enums in C++
Enums are user-defined types which consist of named constants. Enums are used 
to make the program more readable. It is used to assign names to the integral constants 
which makes a program easy to read and maintain. The keyword “enum” is used to declare an enumeration.


*/
    enum Meal{ breakfast, lunch, dinner};
    cout<<breakfast << endl;
    cout<<lunch << endl;
    cout<<dinner << endl; 
    
    Meal m2 = lunch;
    cout<<(m2==2);
    
    
}

