/* 
   File:   main
   Author: Logan Datin
   Created on October 16, 2016, 4:37 PM
   Purpose:  Display how much the ocean will have risen each year for the next 25 years
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
    float riseRat=1.5; //The ocean's rise rate. 1.5 millimeters each year
    float risen; //How much has the ocean risen?
    int year=0; //The starting year of the prediction
    
    //Process values and display output
    cout<<"year"<<"     "<<"Ocean has risen->"<<endl;
    for (int i=year; i<=25; i++){//We are at the first year, are we at the 25th year? if not, go to the next year, if so, get out of loop
        risen=riseRat*year;  //Calculate how much the ocean has rose
        cout<<year<<"        "<<risen<<"mm"<<endl; //output line of table
        year++;  //increase year by 1
        
    } 
    
    //Display Output
    

    //Exit Program
    return 0;
}