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
    int quarter;
    int dime;
    int nickel;
    int ttlcent;
    //Input values
    cout<<"How many quarters?"<<endl;
    cin>>quarter;
    cout<<"How many dimes?"<<endl;
    cin>>dime;
    cout<<"How many nickels?"<<endl;
    cin>>nickel;
    //Process values -> Map inputs to Outputs
    ttlcent = quarter*25 + dime*10 + nickel*5;
    //Display Output
    cout<<"You have "<<ttlcent<<" cents."<<endl;
    //Exit Program
    return 0;
}