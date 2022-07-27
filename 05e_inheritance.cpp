// Inheritance

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
        cout << OwnerName << " is cooking and learning spices \n";
        
        // we cannot access private objects in dereived class
        // since OwnerName is protected, therefore we can access it even in derived class too
    }
};

int main()
{
    
    CookingYoutubeChannel yt2("Amy's Kitchen", "Amy");
    CookingYoutubeChannel yt3("John's Kitchen", "John");
    
    
    yt2.PublishVideo("Pineappple for all");
    yt2.PublishVideo("Apple Pie");
    yt2.PublishVideo("We will rock you");
    
    yt2.Subscribe();    yt2.Subscribe();    yt2.UnSubscribe();    yt2.Subscribe();
    
    yt3.PublishVideo("Pineappple");
    yt3.PublishVideo("Apple");
    
    yt3.Subscribe();    yt3.Subscribe();    yt3.UnSubscribe();    yt3.Subscribe();
    
    yt2.getinfo();
    yt3.getinfo();
    yt2.Practice();
    yt3.Practice();
    
}









