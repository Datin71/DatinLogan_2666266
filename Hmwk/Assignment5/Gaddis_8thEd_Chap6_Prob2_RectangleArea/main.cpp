/* 
   File:   main
   Author: Logan Datin
   Created on November 5, 2016, 5:21 PM
   Purpose:  Calculate area of a rectangle
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float length(float);                //input length 
float width(float);                 //input width
float area(float,float);            //calculate area
void display(float,float,float);    //Display all info
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float l,    //Length
          w,    //width
          a;    //area
    
    //Intro to program
    cout<<"This program calculates the area of a rectangle"<<endl;
    //Function to enter the length
    l=length(l);
    
    //Function to enter the width
    w=width(w);
    
    //Function to calculate area
    a=area(l,w);
    
    // Run Output Display Function
    display(l,w,a);
    
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Display all of the values   *************************
//Purpose:  Display all of the values
//Inputs:   length, width, area
//Output:   output length, width, area
//******************************************************************************

void display(float l,float w,float a){
    //Display Values
    cout<<"Length: "<<l<<" units"<<endl;
    cout<<"Width: "<<w<<" units"<<endl;
    cout<<"Area: "<<a<<" units squared"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   calculate area    ***********************************
//Purpose:  Calculate area
//Inputs:   Length, width
//Output:   area
//******************************************************************************

float area(float l, float w){
    //Declare Variables
    float a;    
    
    //Process 
    a=l*w;
    return a;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Input width of rectangle    *************************
//Purpose:  Input width of rectangle 
//Inputs:   none
//Output:   width
//******************************************************************************

float width(float w){
    //prompt user for width value
    cout<<"Enter the width of the rectangle"<<endl;
    cin>>w;
    return w;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Input length of rectangle   *************************
//Purpose:  Input length of rectangle
//Inputs:   length
//******************************************************************************

float length(float l){
    //prompt user for length value
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>l;
    return l;
}

