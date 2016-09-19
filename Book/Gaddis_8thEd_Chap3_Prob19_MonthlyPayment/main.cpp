/* 
 * File:   main.cpp
 * Author: Logan Datin
 * Created on September 19, 2016, 9:55 AM
 * Purpose:  Calculate Monthly Payment
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
const int PERCENT=100;  //Percentage conversion
const int MONTHS=12;    //Months in a year
//Like PI, e, Gravity, or conversions


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char nCmPrds=36;     //Number of months compounding periods
    float intRate=12;    //percentage per year
    float loanAmt=1e4f;  //$10,000 loan
    float monPay;        //Monthly Payment $'s
    float totPaid;       //Total Amount Paid in $'s
    float intPaid;       //Total interest paid in $'s
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    float temp=pow(1+intRate/PERCENT/MONTHS,nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid=totPaid-loanAmt;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount         $:"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate %/month:"<<setw(5)<<intRate<<endl;
    cout<<"Number of Months     :"<<static_cast<int>(nCmPrds)<<endl;
    cout<<"Monthly Payment     $:"<<setw(8)<<monPay<<endl;
    cout<<"Interest Paid       $:"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid          $:"<<setw(8)<<totPaid<<endl;

    //Exit
    return 0;
}

