/* 
   File:   main
   Author: Logan Datin
   Created on October 17, 2016, 5:00 PM
   Purpose:  Display distance a vehicle has traveled
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
    int v, t, d, iTime=1; //V=speed(mph) t=time(hours) d=distance(miles) iTime=initial time
    
    
    //Prompt user for inputs
    cout<<"This program determines how far a vehicle traveled"<<endl;
    cout<<"Enter the speed of a vehicle in miles per hour"<<endl;
    cin>>v;
    cout<<"Enter the time the vehicle was traveling at the previous speed"<<endl;
    cin>>t;
    //Process values -> Map inputs to Outputs
    cout<<" Hour       Distance Traveled"<<endl;
    cout<<"______________________________"<<endl;
    for(int i=iTime; i<=t; i++){
        d=i*v;
    
    cout<<"  "<<i<<"             "<<d<<" miles"<<endl;
    }         
        
    
    //Display Output
    

    //Exit Program
    return 0;
}