/* 
   File:   main
   Author: Logan Datin
   Created on September 27, 2016, 8:57 PM
   Purpose:  Calculate the velocity of sound in different temperature ranges
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
    int iTemp, fTemp; //Initial temperature and final temperature in celsius
    int instanc; //Difference between fTemp and iTemp to tell us how many times to repeat
    float vSound; //Velocity of sound
    
    //Input values
    cout<<"We are going to find the velocity of sound between a range of temperatures"<<endl;
    cout<<"First, enter the starting colder temperature in whole degrees celsius"<<endl;
    cin>>iTemp;
    cout<<"Now enter the final warmer temperature in whole degrees celsius"<<endl;
    cin>>fTemp;
    //Process values -> Map inputs to Outputs
    if (fTemp<iTemp)
        cout<<"Error: You must enter the colder number first and they must be in whole numbers"<<endl;
    while (fTemp>=iTemp)
    {
        vSound=331.3+.61*iTemp;
        cout<<"Velocity of sound at "<<iTemp<<" Degrees Celsius: "<<vSound<<endl;
        iTemp=iTemp+1;
    }
    
    
    //Display Output

    //Exit Program
    return 0;
}