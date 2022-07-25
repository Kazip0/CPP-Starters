/* 
OOP Encapsulation

In Object Oriented Programming, Encapsulation is defined as binding together the 
data and the functions that manipulates them.

The process of implementing encapsulation can be sub-divided into two steps:

-> The data members should be labeled as private using the private access specifiers
-> The member function which manipulates the data members should be labeled as public 
using the public access specifier

*/


#include<iostream>
#include<list>                      // gives access to datatype list

using namespace std;
class YouTubeChannel                // initialises class
{

private:
    string Name;
    string OwnerName;
    int SubscribersCount=0;
    list <string> PublishVideoTitles;

public:
    YouTubeChannel (string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
    }
    
    void getinfo()              // function inside a class is call a method
    {
        cout << Name << " Hi" << endl;
        cout << OwnerName << endl;
        cout << SubscribersCount << endl;
        cout << "Videos are: " << endl;
    
        for(string Titles: PublishVideoTitles)
        {
            cout << Titles << endl;
        }
        cout << "\n\n";
    }
    
    // method to change the count of Subscribers
    void Subscribe()
    {
        SubscribersCount++;
    }
    
    void UnSubscribe()
    {
        if (SubscribersCount>0)
            SubscribersCount--;
    }
    
    // method to change 
    
    void PublishVideo(string title)
    {
        PublishVideoTitles.push_back(title);
    }
};

int main()
{
    YouTubeChannel yt = {"Saldina", "Starboy69"} ;              
    // declaring constructor yt as object of class YoutubeChannel
    
    
    /* We cannot use PublishVideoTitles in the main/driver function as PublishVideoTitles
    is now private and can be accessed by member function in class only
    
    yt.PublishVideoTitles.push_back("C++ for beginners");
    
    */
    
    // using method of class to pass the values in private object PublishVideoTitles
    yt.PublishVideo("Hello World");
    yt.PublishVideo("C++ for all");
    yt.PublishVideo("One for all");
    
    
    // using method of class to pass the values in private object SubscribersCount
    yt.Subscribe();
    yt.Subscribe();
    yt.Subscribe();
    yt.Subscribe();
    yt.UnSubscribe();
    yt.Subscribe();
    
    yt.getinfo();
    
}









