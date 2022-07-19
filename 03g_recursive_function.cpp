#include<iostream>
using namespace std;

int recursive_sum (int a, int b)
{
    if (a == b)
        return a;
    return (a + recursive_sum(a+1 ,b) );    
    // 2 + (3,4)
    // 2 + 3 + (4,4)
    // 2 + 3 + 4
}


int main()
{
    int num1=2, num2 = 4;
    cout << "Sum is: " << recursive_sum(num1, num2);
    
    
    
        
}


