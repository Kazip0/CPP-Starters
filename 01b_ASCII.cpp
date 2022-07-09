// ASCII CODES

#include<iostream>
using namespace std;

int main()
{   
    // writing ASCII codes for the given alphabets
    cout << int ('A') << endl;
    cout << int ('Z') << endl;
    
    cout << int('a') << endl;
    cout << int ('z') << endl;
    
    
    // writing ASCII Characters from their numbers
    cout << char(65) << endl;
    cout << char(90) << endl;
    
    char c1,c2,c3,c4,c5;
    cout << "Enter the 5 letters: " ;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    
    //cin will not capture spaces or enter, it won't be regarded as error
    
    cout << "ASCII Message: " << int(c1) << " " << int(c2) << " " << int(c3) << " ";
    cout << int(c4) << " " << int(c5);
}

