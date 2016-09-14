/* 
   File:   main
   Author: Logan Datin
   Created on September 13, 2016, 6:30 PM
   Purpose: Add up your change to tell you how many cents you have  
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
    int quarter;    //how many quarters - user defined
    int dime;       //how many dimes - user input
    int nickel;     //how many nickels - user input
    int ttlcent;    //total amount of cents
    //Input values
    cout<<"How many quarters?"<<endl;   //prompt user for how many quarters
    cin>>quarter;                       //enter the number of quarters
    cout<<"How many dimes?"<<endl;      //prompt user for how many dimes
    cin>>dime;                          //enter the number of dimes
    cout<<"How many nickels?"<<endl;    //prompt user for how many nickels
    cin>>nickel;                        //enter number of nickels
    //Process values -> Map inputs to Outputs
    ttlcent = quarter*25 + dime*10 + nickel*5;  //calculate the total number of cents
    //Display Output
    cout<<"You have "<<ttlcent<<" cents."<<endl;//display total number amount of cents
    //Exit Program
    return 0;
}