/* 
   File:   main
   Author: Logan Datin
   Created on October 05, 2016, 4:37 PM
   Purpose:  Calculate bmi and determine if the bmi is healthy or not
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
    float bmi, weight, height;
    //Input values
    cout<<"Enter your weight in pounds"<<endl;
    cin>>weight;
    cout<<"Enter your height in inches"<<endl;
    cin>>height;
    
    //Process values -> Map inputs to Outputs
    bmi=weight*(703/(height*height));  //calculate bmi
    //Display Output
    cout<<"Your BMI is "<<bmi<<endl;
    (bmi<18.5)?cout<<"You are underweight":
    (bmi>25)?cout<<"You are overweight":cout<<"You are at optimal weight";

    //Exit Program
    return 0;
}