/*
return multiple values from a function. Unfortunately, C and C++ do not allow this directly. 

multiple values can be returned in 3 ways
By using pointers.
By using structures.
By using Arrays.

*/

#include<iostream>
using namespace std;

void minmax(int arr[], int size, int *min, int *max)
{
    for(int i=0; i<size; i++)
    {
        if(*min > arr[i])
            *min = arr[i];
    }
    
    for(int i=0; i<size; i++)
    {
        if(*max < arr[i])
            *max = arr[i];
    }
    
}

int main()
{
    int arr[]={2,9,-3,0,12};
    int min=arr[0], max=arr[0];
    int size = sizeof(arr)/sizeof(int);     // shows the number of elements
    minmax(arr, size, &min, &max);          //call by reference function
    
    cout << min << endl;
    cout << max << endl;
}

