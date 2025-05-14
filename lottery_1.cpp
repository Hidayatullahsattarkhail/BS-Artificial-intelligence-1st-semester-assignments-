#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(0)); // Seeding random

    int lottery[5], user[5], matchCount= 0;

    
    for(int i= 0; i< 5; ++i)
    {
        lottery[i]= rand() % 10;// numebrs from 0 nto 9
    }

   
    cout<<"Enter 5 digits bw 0 and 9: "<<"\n";// asking user for their lottery 
    for(int i= 0; i< 5; ++i) 
  {
        while(true) 
       {
            cout<<"Enter digit "<<i + 1<< ": ";
            cin>>user[i];
            if(user[i]>= 0 && user[i]<= 9)
           
            {
                break;
            } else 
            {
                cout<<"Please enter valid digit bw 0 and 9." << "\n";// for invalid input
            }
        }
    }

    // printing the lottery and user's lottery
    cout<<"\nLottery array: ";
    for(int i= 0; i< 5; ++i) {
        cout<<lottery[i]<< " ";
    }
    cout<<"\nUser array: ";
    for(int i = 0; i< 5; ++i) {
        cout<<user[i]<<" ";
    }

    // Checking fro match
    for(int i = 0; i < 5; ++i) {
        if(lottery[i]== user[i]) {
            matchCount++;
        }
    }

    // Displaying result
    cout<<"\nNumber of matching digits: "<<matchCount<<"\n";

    // Check if the user is a grand prize winner
    if(matchCount== 5) {
        cout<<"Congratulations!\nYou are a grand prize winner!"<<"\n";
    } else {
        cout<<"Better luck next time!"<<"\n";
    }

    return 0;
}
