/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 7:02 PM
   Purpose:  Calculate distance a dropped object has fallen
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float g=9.8; //gravity acceleration constant in m/s^2
//Function prototypes
void dist(float); //distance object has fallen

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float t; //time in second the object is in motion
    
    //Process to get results
    for (int i=1;i<=10;i++){     //loop continues for 10 iterations
        cout<<"Run #"<<i<<" of 10"<<endl; //current loop #
        cout<<"Enter the time an object was falling"<<endl; //prompt user
        cin>>t;     //enter time
        dist(t);
    }
    //Output
    
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Calculate Distance          *************************
//Purpose:  Determine distance an object has fallen over time
//Inputs:   time
//Output:   cout the distance an object has fallen
//******************************************************************************

void dist(float t){
    //declare variables
    float d; //Distance the falling object traveled
    
    //process
    d=0.5*g*(t*t);//calculate distance
    
    //output
    cout<<"Object has fallen "<<d<<" meters in "<<t<<" seconds"<<endl;
    cout<<endl;
}
