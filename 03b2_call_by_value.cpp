/* Function is a piece of code/group of instructions that performs a specific task.

 Programming done by applying functions are called modular or procedural programming.
 Parameter Passing
 1. Pass by value
 2. Pass by address
 3. Pass by Reference
*/

//Call by value function

#include<iostream>
using namespace std;
int add(int a, int b)                       
// formal parameters for calculation
// formal parameters are destroyed after their use is over
{
    int c;
    c = a+b;
    return c;
}
int main()
{
    int num1 = 12, num2 = 30, sum;
    sum = add(num1, num2);                  // actual parameters storing the result in sum
    cout<< "Sum is: " << sum;

}






