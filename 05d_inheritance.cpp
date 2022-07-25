/*  Inheritance
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important feature of Object Oriented Programming. 
Sub Class: The class that inherits properties from another class is called Sub class or Derived Class. 
Super Class:The class whose properties are inherited by sub class is called Base Class or Super class. 
*/


#include<iostream>
#include<list>                      // gives access to datatype list

using namespace std;
class YouTubeChannel                // base class
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

class CookingYoutubeChannel : public YouTubeChannel     // derived class
{
public:
    CookingYoutubeChannel(string name, string ownername):YouTubeChannel(name,ownername)
    {
        
    }
    
    void Practice()     
    // this method is only available for CookingYoutubeChannel, i.e. derived class
    {
        cout << "Remember thy name everyone";
    }
};

int main()
{
    
    CookingYoutubeChannel yt2("Amy's Kitchen", "Amy");
    
    
    YouTubeChannel yt = {"Saldina", "Starboy69"} ;    
    
    // using method of class to pass the values in private object PublishVideoTitles
    yt.PublishVideo("Hello World");
    yt.PublishVideo("C++ for all");
    yt.PublishVideo("One for all");
    
    
    // using method of class to pass the values in private object SubscribersCount
    yt.Subscribe();
    yt.Subscribe();
    yt.UnSubscribe();
    yt.Subscribe();
    
    yt2.PublishVideo("Pineappple for all");
    yt2.PublishVideo("Apple Pie");
    yt2.PublishVideo("We will rock you");
    
    yt2.Subscribe();
    yt2.Subscribe();
    yt2.UnSubscribe();
    yt2.Subscribe();
    
    yt.getinfo();
    // yt.Practice();       yt can't access yt2's private method
    
    yt2.getinfo();
    yt2.Practice();
    
}








