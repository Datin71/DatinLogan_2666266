/* 
   File:   main
   Author: Logan Datin
   Created on September 27, 2016, 9:51 PM
   Purpose:  Calculate the users base metabolic rate
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
    int weight, height, age; //user inputs their weight in lbs, height in inches, and age in years
    char sex;  //users sex
    float bmr; //base metabolic rate, or the amount calories needed to maintain weight
    //Input values
    cout<<"Enter weight in pounds"<<endl;
    cin>>weight;
    cout<<"Enter Height in inches"<<endl;
    cin>>height;
    cout<<"Enter age in years"<<endl;
    cin>>age;
    cout<<"Enter 'M' if you are a male or 'F' if you are a female"<<endl;
    cin>>sex;
    
    //Process values -> Map inputs to Outputs
    if (sex=='m')
        bmr=66+6.3*weight+12.9*height-6.8*age;
    if (sex=='M')
        bmr=66+6.3*weight+12.9*height-6.8*age;
    if (sex=='f')
        bmr=655+4.3*weight+4.7*height-4.7*age;
    if (sex=='F')
        bmr=655+4.3*weight+4.7*height-4.7*age;
    
    if (bmr<100)
        cout<<"Error:You entered a value or character incorrectly"<<endl;
    //Display Output
    cout<<bmr<<endl;
    //Exit Program
    return 0;
}