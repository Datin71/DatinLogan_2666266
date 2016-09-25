/* 
   File:   main
   Author: Logan Datin
   Created on September 24, 2016, 7:27 PM
   Purpose: Calculate face value and monthly payment of a consumer loan 
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
    float intR;  //Interest rate per year in percentage
    float amt;  //Amount of money the consumer needs
    float dur;  //Duration of the loan in months
    float mP;   //Monthly Payment
    float y;   //yield
    float fV;    //Face Value
  
    //Input values
    cout<<"Hello, we are going to figure out how big your loan will be after interest. "<<endl;
    cout<<"First enter the amount of money you need in dollars."<<endl;
    cin>>amt;
    cout<<"Now enter your interest rate per year for the loan."<<endl;
    cin>>intR;
    cout<<"Great, now what will the duration of the loan be in months?"<<endl;
    cin>>dur;
   
    //Process values -> Map inputs to Outputs
    
    while (fV>=fV*dur*intR+amt)
    {y=amt*(intR*.01)*(dur/12);
    fV=y+amt;
    y++;
    }
  
    //Display Output
    cout<<"yield: "<<y<<endl;
    cout<<"FaceValue: "<<fV<<endl;
    //Exit Program
    return 0;
}