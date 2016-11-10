/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 6:19 PM
   Purpose:  Calculate kinetic energy of object
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void energy(float,float); //calculates kinetic energy of object

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float m, //mass in kg
          v;    //velocity in m/s
    
    //Input values
    cout<<"Enter mass of object in kilograms"<<endl;
    cin>>m;
    cout<<"Enter velocity in meters per second"<<endl;
    cin>>v;
    
    //Process to get results
    energy(m,v);    
    //Output
    
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Calculate Kinetic Energy    *************************
//Purpose:  Find kinetic energy
//Inputs:   mass and velocity
//Output:   cout the kinetic energy
//******************************************************************************

void energy(float m,float v){
    //declare variables
    float kinEn;    //kinetic energy
    
    //process kinetic energy
    kinEn=0.5*m*(v*v);
    
    //Output
    cout<<"Kinetic energy of object: "<<kinEn<<" Joules"<<endl;
}