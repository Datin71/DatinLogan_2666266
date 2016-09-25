/* 
   File:   main
   Author: Logan Datin
   Created on September 24, 2016, 6:45 PM
   Purpose:  Calculate retroactive dues for 6 months to be paid and new salary
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PAYINC=1.076;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float prevSal;  //Previous annual salary in dollars
    float nAnSal;  //New annual salary in dollars
    float nMoSal;  //New Monthly Salary
    float retDues; //Retroactive dues to be paid
    //Input values
    cout<<"Enter Previous Annual Salary in Dollars.";
    cin>>prevSal;
    //Process values -> Map inputs to Outputs
    nAnSal=PAYINC*prevSal;
    nMoSal=nAnSal/12;
    retDues=(nAnSal-prevSal)/2;
            
    //Display Output
    cout<<"Previous Salary: $"<<fixed<<setprecision(2)<<prevSal<<endl;
    cout<<"New Annual Salary: $"<<fixed<<setprecision(2)<<nAnSal<<endl;
    cout<<"New Monthly Salary: $"<<fixed<<setprecision(2)<<nMoSal<<endl;
    cout<<"Retroactive Dues to be paid: $"<<fixed<<setprecision(2)<<retDues<<endl;

    //Exit Program
    return 0;
}