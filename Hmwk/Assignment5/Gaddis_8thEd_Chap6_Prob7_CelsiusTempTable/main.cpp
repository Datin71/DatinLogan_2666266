/* 
   File:   main
   Author: Logan Datin
   Created on November 6, 2016, 6:19 PM
   Purpose:  Celsius Temperature Table
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>      //Output formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float cel(float); //function that turns Fahrenheit to Celsius

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float f=1, //Temperature in Fahrenheit
          c;    //Temperature in Celsius
    //Process
    for (int i=0;i<20;i++,f++){ //loop that determines how many rows will be present
        c=cel(f);   //Set Celsius Temp
        
        //Output
        cout<<"Fahrenheit: "<<f<<"    "<<fixed<<setprecision(2)<<showpoint<<"Celsius: "<<c<<endl;
                
    }    
    //Output
    
    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//**********************   Calculate degrees Celsius    *************************
//Purpose:  Calculate degrees Celsius
//Inputs:  degrees Fahrenheit
//Output:   degrees Celsius
//******************************************************************************

float cel(float f){
    float c; //Celsius
    
    //Process
    c=((f-32)*5)/9;
    
    //output
    return c;
}