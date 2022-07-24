/*OOP

represents real life objects in programming, i.e. their attributes and characteristics


*/
#include<iostream>
#include<list>                      // gives access to datatype list
// Lists are sequence containers that allow non-contiguous memory allocation. 
// As compared to vector, list has slow traversal, but once a position has been 
// found, insertion and deletion are quick. Normally, when we say a List, we 
// talk about doubly linked list. 
using namespace std;

class YouTubeChannel                // initialises class
{

public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list <string> PublishVideoTitles;
    list <int> RollCall;
};

int main()
{
    YouTubeChannel yt, yt2;              // declaring yt as object of class YoutubeChannel
    yt.Name = "Saldina" ;
    yt.OwnerName = "Starboy69";
    yt.SubscribersCount = 6500;
    yt.PublishVideoTitles = {"1. C++ videos for all", "2. HTML for all", "3. Python"};
    yt.RollCall = {43, 5, 7 ,8};
    
    
    
    cout << yt.Name << " Hi" << endl;
    cout << yt.OwnerName << endl;
    cout << yt.SubscribersCount << endl;
    cout << "Videos are: " << endl;
    
    for(string Titles: yt.PublishVideoTitles)
    {
        cout << Titles << endl;
    }
    
    for (int x : yt.RollCall)
    {
        cout << x << " ";
    }
    cout << "\n \n";
    
    
    yt2.Name = "Starboy69" ;
    yt2.OwnerName = "Kazip";
    yt2.SubscribersCount = 6500;
    yt2.PublishVideoTitles = {"Hello from the other side" , "Stargazing" , "Hey how are you nigga"};
    yt2.RollCall = {43, 5, 7 ,8};
    
    cout << yt2.Name << endl;
    cout << yt2.OwnerName << endl;
    cout << yt2.SubscribersCount << endl;
    cout << "Videos are: " << endl;
    
    for(string Titles: yt2.PublishVideoTitles)
    {
        cout << Titles << endl;
    }
    for( int x : yt2.RollCall)
    {
        cout << x << " ";
    }
    
    
    
}






