// calculator

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "Starboy Calculator" << endl;
    cin >> num1 >> operation >> num2;
    
    switch(operation)
    {
        case  '-' : cout << num1 << operation << num2 << "=" << num1 -num2;
        break;
        
        case '+' : cout << num1 << operation << num2 << "=" << num1 + num2;
        break;
        
        case  '*' : cout << num1 << operation << num2 << "=" << num1 * num2;
        break;
        
        case '/' : cout << num1 << operation << num2 << "=" << num1 / num2;
        break;
        
        case '%' : 
        
            // for modulus function to work we must have an integer as input
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)num1 == num1);
            isNum2Int = ((int)num2 == num2);
            
            if(isNum1Int && isNum2Int)
            {
                cout << num1 << operation << num2 << "=" << int(num1)%int(num2);
                // modulus operator can be used only with integer
                // therefore float num1 and num2 had to be converted to integer
            }
            
            else
            {
                cout << "Invalid input";
            }
            break;
        
    }
    
    
}


