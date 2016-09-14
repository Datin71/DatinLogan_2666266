/* 
   File:   main
   Author: Logan Datin
   Created on September 13, 2016, 5:21 PM
   Purpose:  To calculate how much fence is needed to fence off a rectangular area.
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
    int height; //the height of a given rectangular area as an input
    int width;  //the width of a given rectangular area as an input
    int totalLength; //The perimeter of the given area as a product of the first 2 inputs
    //Input values
    cout<<"Enter the height of the area in feet"<<endl; //ask the user to enter the height of the area
    cin>>height;                                        //user defined height in feet
    cout<<"Enter the width of the area in feet"<<endl;  //ask the user to enter the width of the area
    cin>>width;                                         //use defined width in feet
       
    //Process values -> Map inputs to Outputs
    totalLength = height*2 + width*2;                   //calculation to determine the total length of fence needed
    
    //Display Output
    cout<<"Total length of fence needed: "<<totalLength<<"ft"<<endl; //output the determined total length of fence needed
    //Exit Program
    return 0;
}