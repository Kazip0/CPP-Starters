/* c++ is a
i) general purpose language (can create general purpose software, i.e. games,
    browsers, embedded programs on a hardware etc.)
ii) compiled language (needs to convert the code from high level to machine level)
iii) case sensitive language (uppercase and lowercase are treated differently)

source code : high level code that can be understand by us
object code : low level language that only machine can understand
compiler : translates source code to object code
algorithm : the sets of instructions that tells the mcomputer how to code

variable is a name which is associated with a value that can be changed.
*/
#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    float salary = 1000.99;
    bool ismoneylot = true;
    char gender = 'f';
    double balance = 78321478;
    
    
    cout<< a << endl;
    cout << "Salary is: " << salary << endl;
    
    cout << "Int " << sizeof(a) << endl;
    cout << "float "<< sizeof(salary) << endl;
    cout << "bool " << sizeof(ismoneylot) << endl;
    cout << "char " << sizeof(gender) << endl;
    cout << "double " << sizeof(balance) << endl;
    
}


