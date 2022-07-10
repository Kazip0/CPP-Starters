// continue break

#include<iostream>
using namespace std;

int main()
{
    for(int i=0; i<7; i++)
    {
        
        if(i==3)
            break;              // will stop the loop if the condition is satisfied
        cout << i << "\t";
    }
    
    cout << "\n\n";
    
    for(int i=0; i<7; i++)
    {
        
        if(i==3)
            continue;              // will skip 3(from the loop) if the condition is satisfied
            
            // in other words if the condition is satisfied then the loop will rerun again
            // before going down the next line
        cout << i << "\t";
    }
}


