/*
A dynamic array is a random access, variable-size list data structure that allows 
elements to be added or removed. It is supplied with standard libraries in many 
modern programming languages. Dynamic arrays overcome a limit of static arrays, 
which have a fixed capacity that needs to be specified at allocation.
*/

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter Size of Array: ";
    cin >> size;
    
    // int myArray[size]; 
    // will cause an error as a static array needs a size to be defined 
    
    int *myArray = new int[size];           //initialising a dynamic array 
    
    for(int i=0; i<size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> myArray[i];
        
    }
    
    for(int i=0; i<size; i++)
    {
        //cout <<myArray[i] << " ";
        cout << *(myArray +i) << " ";
    }
    
    delete []myArray;                       
    // deleting the pointer in heap memory to avoid unecessary space usage
    myArray = NULL;
}


