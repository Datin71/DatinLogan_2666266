/* 
   File:   main
   Author: Logan Datin
   Created on September 27, 2016, 10:40 PM
   Purpose:  Calculate linear displacement on a material
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
    float coeff; //coefficient of linear expansion
    float temp;  //Change in temp in degrees celsius
    float iLength; //Initial length
    float cLength; //Change in length
    
    //Input values
    cout<<"What is the coefficient of linear expansion?"<<endl;
    cin>>coeff;
    cout<<"What is the change in temperature in degrees celsius?(Remember that if it gets colder, it must be negative"<<endl;
    cin>>temp;
    cout<<"What is the initial length of the material in meters"<<endl;
    cin>>iLength;
    //Process values -> Map inputs to Outputs
    cLength=coeff*iLength*temp;
    //Display Output
    if(cLength<0)
        cout<<"The material will contract by "<<-cLength<<" meters."<<endl;
    if(cLength>0)
        cout<<"The material will expand by "<<cLength<<" meters"<<endl;
    if(cLength==0)
        cout<<"The material will not expand nor conract because the temperature did not change"<<endl;

    //Exit Program
    return 0;
}