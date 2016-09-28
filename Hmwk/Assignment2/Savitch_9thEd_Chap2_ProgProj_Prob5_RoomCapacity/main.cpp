/* 
   File:   main
   Author: Logan Datin
   Created on September 27, 2016, 7:31 PM
   Purpose: Determine if amount of people for room is legal  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int maxcap;  //Maximum Capacity of people that the room can hold
    int attend;  //The amount of people that will be attending the meeting or event in the room
    int over;    //The difference between the amount of people attending and the rooms maximum capacity
    //Input values
    cout<<"How many people will be present in the room?"<<endl;
    cin>>attend;
    cout<<"What is the room's maximum capacity?"<<endl;
    cin>>maxcap;
    //Process values -> Map inputs to Outputs
    over=attend-maxcap;  //Calculate how many more people should be in the room
    
    //Display Output
    if (maxcap>=attend)  
    cout<<"It is legal to hold "<<attend<<" people in the room."<<endl;
    else 
    cout<<"It is illegal to hold "<<attend<<" people in this room. You need "<<over<<" less people to comply with the law."<<endl;
 
    //Exit Program
    return 0;
}