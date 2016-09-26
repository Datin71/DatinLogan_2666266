/* 
   File:   main
   Author: Logan Datin
   Created on September 24, 2016, 7:27 PM
   Purpose: Calculate face value and monthly payment of a consumer loan 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
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
    float fVal;  //Face value of the loan
    float monPay;   //Monthly Payment
    float yield;  //yield - The money the bank is making from the interest rate
  
    //Input values
    cout<<"Hello, we are going to figure out how big your loan will be after interest. "<<endl;
    cout<<"First enter the amount of money you need in dollars."<<endl;
    cin>>amt;
    cout<<"Now enter your interest rate per year for the loan."<<endl;
    cin>>intR;
    cout<<"Great, now what will the duration of the loan be in months?"<<endl;
    cin>>dur;
   
    //Process values -> Map inputs to Outputs
    fVal=amt/(1-(dur/12)*(intR*.01));
    yield=fVal-amt;
    monPay=fVal/dur;
    //Display Output
    cout<<"Monthly Payment: $"<<fixed<<setprecision(2)<<monPay<<endl;
    cout<<"Total Interest Paid: $"<<fixed<<setprecision(2)<<yield<<endl;
    cout<<"FaceValue of the loan: $"<<fixed<<setprecision(2)<<fVal<<endl;
    //Exit Program
    return 0;
}