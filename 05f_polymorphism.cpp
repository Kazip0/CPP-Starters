/* Polymorphism

 we can define polymorphism as the ability of a message to be displayed in more 
 than one form. A real-life example of polymorphism, a person at the same time 
 can have different characteristics. Like a man at the same time is a father, 
 a husband, an employee. So the same person posses different behavior in different 
 situations.

*/


#include<iostream>
#include<list>                      // gives access to datatype list

using namespace std;
class YouTubeChannel                // base class
{

private:
    string Name;
    int SubscribersCount=0;
    list <string> PublishVideoTitles;
    
protected:
    string OwnerName;               // can be accessed by base and derived class too
    int ContentQuality;
    
public:
    YouTubeChannel (string name, string ownername)  
    //constructor which initialises the value of the private properties
    {
        Name = name;
        OwnerName = ownername;
        SubscribersCount = 0;
        ContentQuality = 0;
    }
    
    void CheckAnalytics()
    {
        if(ContentQuality < 5)
        {
            cout << OwnerName << " has bad Content Quality" << endl;
        }
        else
        {
            cout << OwnerName << " has a good content" << endl;
        }
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
        cout << "\n";
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
    // invoked the constructor of base class
    {
        
    }
    
    void Practice()     
    // this method is only available for CookingYoutubeChannel, i.e. derived class
    {
        cout << OwnerName << " is cooking and learning new recipies\n";
        ContentQuality++;
        // we cannot access private objects in dereived class
        // but since OwnerName is protected, therefore we can access it even in derived class too
    }
};



class SingersYoutubeChannel : public YouTubeChannel     // derived class
{
public:
    SingersYoutubeChannel(string name, string ownername):YouTubeChannel(name,ownername)
    // invoked the constructor of base class
    {
        
    }
    
    void Practice()     
    // this method is only available for CookingYoutubeChannel, i.e. derived class
    {
        cout << OwnerName << " is taking singing classes and learning new songs\n";
        // we cannot access private objects in dereived class
        // but since OwnerName is protected, therefore we can access it even in derived class too
        ContentQuality++;
    }
};

int main()
{
    
    CookingYoutubeChannel yt1("Amy's Kitchen", "Amy");
    SingersYoutubeChannel Syt("JohnSings", "John");
    
    yt1.Practice(); yt1.Practice(); yt1.Practice(); yt1.Practice(); yt1.Practice();
    Syt.Practice(); Syt.Practice(); Syt.Practice();
    
    yt1.CheckAnalytics();
    Syt.CheckAnalytics();
    cout << endl;
    // A pointer of base class can point to the variable of derived class
    YouTubeChannel *channel1 = &yt1;
    YouTubeChannel *channel2 = &Syt;
    
    channel1->CheckAnalytics();
    channel2->CheckAnalytics();
    
    
    
}










