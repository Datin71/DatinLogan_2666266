/* 
   File:   main
   Author: Logan Datin
   Created on September 27, 2016, 9:32 PM
   Purpose:  Calculate volume in gallons that a well can hold
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=3.14159265358979f;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float radius, depth; //radius and depth of the well in feet
    float inchRad; //radius in inches
    float volGal, volFt; //Volume in gallons, volume in feet cubed
    //Input values
    cout<<"What is the radius of the well in inches?"<<endl;
    cin>>inchRad;
    cout<<"What is the depth of your well in feet?"<<endl;
    cin>>depth;
    
    //Process values -> Map inputs to Outputs
    radius=inchRad/12; //Convert the radius in inches to radius in feet
    volFt=PI*(radius)*(radius)*(depth); //calculate volume in feet cubed
    volGal=volFt*7.48; //Convert feet cubed to gallons
    
    //Display Output
    cout<<"Your well has a "<<fixed<<setprecision(1)<<volGal<<" gallon well casing"<<endl;
            
    //Exit Program
    return 0;
}