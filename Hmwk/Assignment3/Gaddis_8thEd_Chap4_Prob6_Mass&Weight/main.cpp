/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:37 PM
   Purpose:  
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
    float weight, mass;
    
    //Inputs
    cout<<"Enter the object's mass in kilograms"<<endl;
    cin>>mass;
    //Process values -> Map inputs to Outputs -> Display Output
    weight=mass/9.8;  //Calculate the weight
    (weight>1000)?cout<<"Too heavy": //determine if object is too heavy, light, or display the weight
    (weight<10)?cout<<"Too light":
    cout<<"Object's weight is "<<weight<<" Newtons";

    //Exit Program
    return 0;
}