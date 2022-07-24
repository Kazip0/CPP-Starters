/* Constructors and Class methods
A constructor is a special type of member function of a class which initializes 
objects of a class. In C++, Constructor is automatically called when 
object(instance of class) is created. It is special member function of the class 
because it does not have any return type.
-> name of the constructor should be same as the class itself


Method 
A method also works the same as that of function.
A method is defined inside a class. For Example: main() in Java
A method can be private, public, or protected.


*/ 

#include<iostream>
#include<list>                      // gives access to datatype list

using namespace std;
class YouTubeChannel                // initialises class
{

public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list <string> PublishVideoTitles;
    
    YouTubeChannel (string name, string ownername, int count)       // constructor 
    {
        Name = name;
        OwnerName = ownername;
        SubscribersCount = count;
        
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
    
};

int main()
{
    YouTubeChannel yt = {"Saldina", "Starboy69", 9000};              
    // declaring  yt as object of class YoutubeChannel
    // wherein the constructor will take the values
    
    //uploading the list of videos in the object PublishVideoTitles
    yt.PublishVideoTitles.push_back("C++ for beginners");
    yt.PublishVideoTitles.push_back("OOP Masters");
    yt.PublishVideoTitles.push_back("Hello_Coders");
    
    
    YouTubeChannel yt2 = {"Starboy69", "Kazip", 12000};
    yt2.PublishVideoTitles.push_back("Bye Bye World");
    yt2.PublishVideoTitles.push_back("Never ssay Never");
    yt2.PublishVideoTitles.push_back("Don't Give Up");
    
    
    yt.getinfo();
    yt2.getinfo();
    
}

